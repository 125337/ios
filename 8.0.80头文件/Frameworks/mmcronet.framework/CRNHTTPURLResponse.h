@interface CRNHTTPURLResponse : NSHTTPURLResponse
{
    NSString * _cr_HTTPVersion; // +0x18
}
- (id)cr_HTTPVersion;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (void).cxx_destruct;
@end
