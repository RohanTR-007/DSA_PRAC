#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'fetchItemsToDisplay' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. 2D_STRING_ARRAY items
 *  2. INTEGER sortParameter
 *  3. INTEGER sortOrder
 *  4. INTEGER itemsPerPage
 *  5. INTEGER pageNumber
 */

vector<string> fetchItemsToDisplay(vector<vector<string>> items, int sortParameter, int sortOrder, int itemsPerPage, int pageNumber) {
    vector<string> given;
    vector<vector<string>>ans;
    int count = items.size();
    for(int i =0;i<items.size();++i)
    {
        given[i]=items[i][sortParameter];
    }
    if(sortOrder == 0)
    {
        sort(given.begin(),given.end());
    
    }
    else if (sortOrder == 1) {
        sort(given.begin(),given.end(),greater<string>());
    }
    int k=0;
    for(int i=0;i<count;++i)
    {
        for(int j=0;j<itemsPerPage;++j)
        {
            ans[i][j]=given[k++];
        }
    }
    return ans[pageNumber];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string items_rows_temp;
    getline(cin, items_rows_temp);

    int items_rows = stoi(ltrim(rtrim(items_rows_temp)));

    string items_columns_temp;
    getline(cin, items_columns_temp);

    int items_columns = stoi(ltrim(rtrim(items_columns_temp)));

    vector<vector<string>> items(items_rows);

    for (int i = 0; i < items_rows; i++) {
        items[i].resize(items_columns);

        string items_row_temp_temp;
        getline(cin, items_row_temp_temp);

        vector<string> items_row_temp = split(rtrim(items_row_temp_temp));

        for (int j = 0; j < items_columns; j++) {
            string items_row_item = items_row_temp[j];

            items[i][j] = items_row_item;
        }
    }

    string sortParameter_temp;
    getline(cin, sortParameter_temp);

    int sortParameter = stoi(ltrim(rtrim(sortParameter_temp)));

    string sortOrder_temp;
    getline(cin, sortOrder_temp);

    int sortOrder = stoi(ltrim(rtrim(sortOrder_temp)));

    string itemsPerPage_temp;
    getline(cin, itemsPerPage_temp);

    int itemsPerPage = stoi(ltrim(rtrim(itemsPerPage_temp)));

    string pageNumber_temp;
    getline(cin, pageNumber_temp);

    int pageNumber = stoi(ltrim(rtrim(pageNumber_temp)));

    vector<string> result = fetchItemsToDisplay(items, sortParameter, sortOrder, itemsPerPage, pageNumber);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
