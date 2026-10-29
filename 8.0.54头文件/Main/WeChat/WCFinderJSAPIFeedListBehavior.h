@interface WCFinderJSAPIFeedListBehavior : NSObject
{
    BOOL _allowTopPull; // +0x8
    BOOL _allowInfiniteTopPull; // +0x9
    BOOL _reportFeedRead; // +0xa
    BOOL _feedFocusChangeNotify; // +0xb
    BOOL _fromSearchTemplate; // +0xc
    BOOL _delayCompleteCallback; // +0xd
    WCFinderCompleteHandler * _completeHandler; // +0x10
    id /* block */ _sendTemplateEvent; // +0x18
    NSMutableArray * _completeActions; // +0x20
    NSMutableDictionary * _bckInfo; // +0x28
    NSString * _liteAppId; // +0x30
}
+ (id)behaviorWithParams:(id)arg1 event:(id)arg2;
+ (id)behaviorDict:(id)arg1;
+ (BOOL)boolValueForKey:(id)arg1 inDict:(id)arg2;
- (BOOL)delayCallResultCallback;
- (void)notifyTemplate:(id)arg1 params:(id)arg2;
- (BOOL)feedFocusChangeNotify;
- (id)createPlugin;
- (void)addCompleteAction:(id /* block */)arg1;
- (void)onComplete;
- (void)updateBckInfo:(id /* block */)arg1;
- (BOOL)allowTopPull;
- (void)setAllowTopPull:(BOOL)arg1;
- (BOOL)allowInfiniteTopPull;
- (void)setAllowInfiniteTopPull:(BOOL)arg1;
- (BOOL)reportFeedRead;
- (void)setReportFeedRead:(BOOL)arg1;
- (void)setFeedFocusChangeNotify:(BOOL)arg1;
- (id)completeHandler;
- (void)setCompleteHandler:(id)arg1;
- (BOOL)fromSearchTemplate;
- (void)setFromSearchTemplate:(BOOL)arg1;
- (id /* block */)sendTemplateEvent;
- (void)setSendTemplateEvent:(id /* block */)arg1;
- (id)completeActions;
- (void)setCompleteActions:(id)arg1;
- (id)bckInfo;
- (void)setBckInfo:(id)arg1;
- (BOOL)delayCompleteCallback;
- (void)setDelayCompleteCallback:(BOOL)arg1;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (void).cxx_destruct;
@end

