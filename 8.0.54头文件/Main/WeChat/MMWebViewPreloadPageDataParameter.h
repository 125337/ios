@interface MMWebViewPreloadPageDataParameter : NSObject
{
    BOOL _isUsePreloadWebView; // +0x8
    BOOL _useOfflineCache; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _enterType; // +0x10
    NSString * _url; // +0x18
    NSString * _pageDataKeyUrl; // +0x20
    MMWebCoreConfig * _config; // +0x28
}
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)pageDataKeyUrl;
- (void)setPageDataKeyUrl:(id)arg1;
- (BOOL)isUsePreloadWebView;
- (void)setIsUsePreloadWebView:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (BOOL)useOfflineCache;
- (void)setUseOfflineCache:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

