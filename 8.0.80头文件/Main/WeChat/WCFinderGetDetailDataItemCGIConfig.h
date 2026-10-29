@interface WCFinderGetDetailDataItemCGIConfig : NSObject
{
    BOOL _takeOverBusinessErrMsg; // +0x8
    BOOL _isPrefetch; // +0x9
    unsigned int _bypassType; // +0xc
    double _timeout; // +0x10
    NSString * _uxinfo; // +0x18
    WCFinderPushFeedViewProductParams * _productInfo; // +0x20
    NSString * _gMsgId; // +0x28
    JsApiSourceInfo * _jsApiSourceInfo; // +0x30
    FinderNativeSourceInfo * _nativeInfo; // +0x38
    unsigned long long _relatedScene; // +0x40
    NSString * _fromSessionId; // +0x48
    NSData * _bypassData; // +0x50
}
- (id)init;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)gMsgId;
- (void)setGMsgId:(id)arg1;
- (id)jsApiSourceInfo;
- (void)setJsApiSourceInfo:(id)arg1;
- (id)nativeInfo;
- (void)setNativeInfo:(id)arg1;
- (unsigned long long)relatedScene;
- (void)setRelatedScene:(unsigned long long)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (unsigned int)bypassType;
- (void)setBypassType:(unsigned int)arg1;
- (id)bypassData;
- (void)setBypassData:(id)arg1;
- (BOOL)takeOverBusinessErrMsg;
- (void)setTakeOverBusinessErrMsg:(BOOL)arg1;
- (BOOL)isPrefetch;
- (void)setIsPrefetch:(BOOL)arg1;
- (void).cxx_destruct;
@end
