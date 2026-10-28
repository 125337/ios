@interface WCFinderGetDetailDataItemCGIConfig : NSObject
{
    double _timeout; // +0x8
    NSString * _uxinfo; // +0x10
    WCFinderPushFeedViewProductParams * _productInfo; // +0x18
    NSString * _gMsgId; // +0x20
    JsApiSourceInfo * _jsApiSourceInfo; // +0x28
    unsigned long long _relatedScene; // +0x30
    NSString * _fromSessionId; // +0x38
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
- (unsigned long long)relatedScene;
- (void)setRelatedScene:(unsigned long long)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (void).cxx_destruct;
@end
