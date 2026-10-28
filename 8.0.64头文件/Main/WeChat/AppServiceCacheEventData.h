@interface AppServiceCacheEventData : NSObject
{
    unsigned long long _eventType; // +0x8
    long long _jsEvent; // +0x10
    NSString * _jsStringEventName; // +0x18
    NSDictionary * _dicParam; // +0x20
    unsigned long long _webviewID; // +0x28
}
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (long long)jsEvent;
- (void)setJsEvent:(long long)arg1;
- (id)jsStringEventName;
- (void)setJsStringEventName:(id)arg1;
- (id)dicParam;
- (void)setDicParam:(id)arg1;
- (unsigned long long)webviewID;
- (void)setWebviewID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
