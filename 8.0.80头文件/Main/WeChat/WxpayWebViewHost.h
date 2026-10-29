@interface WxpayWebViewHost : NSObject
{
    UIView * _canvas; // +0x8
    weak_ptr<wxpay_luggage::SelfRenderRuntime> _runtime; // +0x10
    NSMutableDictionary * _entries; // +0x20
    NSMutableDictionary * _pending; // +0x28
    map<wxpay_luggage::SceneKey, bool, std::less<wxpay_luggage::SceneKey>, std::allocator<std::pair<const wxpay_luggage::SceneKey, bool>>> _visible; // +0x30
    BOOL _closed; // +0x48
}
- (id)initWithView:(id)arg1 runtime:(shared_ptr<wxpay_luggage::SelfRenderRuntime>)arg2;
- (void)event:(id)arg1 detail:(id)arg2 scene:(SceneKey)arg3 inner:(int)arg4 node:(unsigned long long)arg5;
- (BOOL)dispatch:(const void *)arg1 ratio:(double)arg2;
- (void)perform:(const void *)arg1 ratio:(double)arg2;
- (void)layout:(id)arg1 key:(id)arg2 ratio:(double)arg3;
- (id)viewForScene:(SceneKey)arg1 inner:(int)arg2;
- (void)remove:(id)arg1;
- (void)cancel:(SceneKey)arg1;
- (void)close;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
