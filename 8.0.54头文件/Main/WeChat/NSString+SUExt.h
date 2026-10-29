@interface NSString (SUExt)
+ (id)stringWithStdString:(const void *)arg1;
- (unsigned int)u32Value;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)utf8StdString;
- (const char *)utf8CString;
- (BOOL)equalsIgnoreCase:(id)arg1;
@end

