@interface WCWebEventsStore : MMObject
{
    WKWebView * _webView; // +0x8
    NSMutableArray * _curNavigationEventsQueue; // +0x10
    NSMutableSet * _curEventsStore; // +0x18
    NSMutableArray * _curEventActions; // +0x20
    NSMutableDictionary * _reqToFullUrlDic; // +0x28
}
+ (id)eventSetDescription:(id)arg1;
- (id)init;
- (void)__dispatchWebEvent:(id)arg1;
- (void)checkActions;
- (void)appendWebEvent:(id)arg1;
- (void)resetWebEventStore;
- (id)webviewEventsInStore;
- (void)appendArrWebEventAction:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)curNavigationEventsQueue;
- (void)setCurNavigationEventsQueue:(id)arg1;
- (id)curEventsStore;
- (void)setCurEventsStore:(id)arg1;
- (id)curEventActions;
- (void)setCurEventActions:(id)arg1;
- (id)reqToFullUrlDic;
- (void)setReqToFullUrlDic:(id)arg1;
- (void).cxx_destruct;
@end

