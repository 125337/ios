@interface OfflinePageA8KeyData : NSObject
{
    NSString * _originalUrl; // +0x8
    NSString * _a8KeyFullUrl; // +0x10
    NSArray * _a8KeyHeaders; // +0x18
    id _webViewController; // +0x20
}
- (id)originalUrl;
- (void)setOriginalUrl:(id)arg1;
- (id)a8KeyFullUrl;
- (void)setA8KeyFullUrl:(id)arg1;
- (id)a8KeyHeaders;
- (void)setA8KeyHeaders:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void).cxx_destruct;
@end
