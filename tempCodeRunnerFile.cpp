void generate(string &s, int open, int close)
{
    static vector<string> generateParenthesis; // Add missing vector declaration and definition
    if (open == 0 && close == 0)
    {
        generateParenthesis.push_back(s);
        return;
    }
    if (open > 0)
    {
        s.push_back('(');
        generate(s, open - 1, close);
        s.pop_back();
    }
    if (open < close)
    {
        s.push_back(')');
        generate(s, open, close - 1);
        s.pop_back();
    }
}