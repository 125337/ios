@interface KindaJSEvent : NSObject <MMKJSEvent>
{
    WAJSEventHandler_BaseEvent * _tinyAppEvent; // +0x8
    JSEvent * _webEvent; // +0x10
}
- (void)kindaCloseWebViewImpl:(BOOL)arg1 completion:(id)arg2;
- (void)kindaEndWithResult:(id)arg1 extraInfo:(id)arg2;
- (long long)kindaGetType;
- (id)tinyAppEvent;
- (void)setTinyAppEvent:(id)arg1;
- (id)webEvent;
- (void)setWebEvent:(id)arg1;
- (void).cxx_destruct;
@end

