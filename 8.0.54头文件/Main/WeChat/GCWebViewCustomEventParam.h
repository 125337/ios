@interface GCWebViewCustomEventParam : NSObject
{
    MMUIViewController<WXCustomWebViewControllerProtocol> * _webVc; // +0x8
    NSString * _eventName; // +0x10
    NSMutableDictionary * _customParam; // +0x18
    NSDictionary * _jsParam; // +0x20
}
- (id)webVc;
- (void)setWebVc:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)customParam;
- (void)setCustomParam:(id)arg1;
- (id)jsParam;
- (void)setJsParam:(id)arg1;
- (void).cxx_destruct;
@end

