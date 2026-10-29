@interface CBTFlutterHalfScreenMgr : NSObject
{
    NSMutableDictionary * _flutterHalfScreenNavCache; // +0x8
    NSMutableDictionary * _delayedHangupTimerCache; // +0x10
    NSMutableDictionary * _dismissCallbackCache; // +0x18
}
+ (id)sharedInstance;
- (id)initWithPrivate;
- (void)showHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 sourceType:(long long)arg3 sourceId:(id)arg4 dismissCallback:(id /* block */)arg5;
- (void)showHalfScreenWithBypassInfo:(id)arg1 fromVC:(id)arg2 multimodalXml:(id)arg3 multimodalType:(int)arg4 multimodalWrapData:(id)arg5 sourceType:(long long)arg6 sourceId:(id)arg7 dismissCallback:(id /* block */)arg8 imagePaths:(id)arg9 showTempChatTips:(BOOL)arg10 pendingSendMsgContent:(id)arg11 pendingTimelineFeedId:(id)arg12 enterScene:(long long)arg13 isSticker:(BOOL)arg14 routeType:(long long)arg15;
- (void)dismissCurrentHalfScreen;
- (BOOL)isHalfScreenPresenting;
- (id)getCachedHalfScreenVCForCacheKey:(id)arg1;
- (void)clearCachedHalfScreenForCacheKey:(id)arg1;
- (void)clearAllHalfScreenCache;
- (void)notifyUIVisible:(id)arg1 visible:(BOOL)arg2;
- (void)closeAllEmojiHalfScreens;
- (void)closeAllForegroundHalfScreens;
- (void)reuseCachedFlutterHalfScreenNav:(id)arg1 fromVC:(id)arg2 cacheKey:(id)arg3 dismissCallback:(id /* block */)arg4 action:(long long)arg5;
- (void)attachOrUpdateDismissContextForNav:(id)arg1 flutterVC:(id)arg2 cacheKey:(id)arg3 dismissCallback:(id /* block */)arg4;
- (void)updatePageExposeCallback:(id /* block */)arg1 forKey:(id)arg2;
- (void)updatePageExitCallback:(id /* block */)arg1 forKey:(id)arg2;
- (void)handlePageExposedForCacheKey:(id)arg1;
- (void)clearPageCallbacksForKey:(id)arg1;
- (void)handlePageExitedForKey:(id)arg1;
- (void)handleHalfScreenDismissedForCacheKey:(id)arg1;
- (void)handleHalfScreenDeclinedForCacheKey:(id)arg1;
- (void)clearSessionAndNavForCacheKey:(id)arg1;
- (void)removeTempAuthIfNeededForCacheKey:(id)arg1;
- (void)startDelayedHangupForCacheKey:(id)arg1;
- (void)cancelDelayedHangupForCacheKey:(id)arg1;
- (void)onDelayedHangupTimer:(id)arg1;
- (void)clearHalfScreenCacheByVoipSessionID:(id)arg1;
- (id)getCachedHalfScreenNavForInstanceKey:(id)arg1;
- (void)setCachedHalfScreenNav:(id)arg1 forInstanceKey:(id)arg2;
- (BOOL)containsCachedHalfScreenNav:(id)arg1;
- (id)flutterHalfScreenNavCache;
- (void)setFlutterHalfScreenNavCache:(id)arg1;
- (id)delayedHangupTimerCache;
- (void)setDelayedHangupTimerCache:(id)arg1;
- (id)dismissCallbackCache;
- (void)setDismissCallbackCache:(id)arg1;
- (void).cxx_destruct;
@end
