@interface WxpayWebViewRequest : NSObject
{
    BOOL _transparent; // +0x8
    BOOL _showHorizontalScrollIndicator; // +0x9
    BOOL _showVerticalScrollIndicator; // +0xa
    BOOL _disableTextInteraction; // +0xb
    int _innerId; // +0xc
    NSString * _appId; // +0x10
    unsigned long long _appUuid; // +0x18
    unsigned long long _pageId; // +0x20
    NSString * _url; // +0x28
}
- (id)init;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)appUuid;
- (void)setAppUuid:(unsigned long long)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (int)innerId;
- (void)setInnerId:(int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)transparent;
- (void)setTransparent:(BOOL)arg1;
- (BOOL)showHorizontalScrollIndicator;
- (void)setShowHorizontalScrollIndicator:(BOOL)arg1;
- (BOOL)showVerticalScrollIndicator;
- (void)setShowVerticalScrollIndicator:(BOOL)arg1;
- (BOOL)disableTextInteraction;
- (void)setDisableTextInteraction:(BOOL)arg1;
- (void).cxx_destruct;
@end
