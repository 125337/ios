@interface NSString (CXXExt)
+ (id)sc_stringWithSTDString:(const void *)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)sc_stdString;
@end

