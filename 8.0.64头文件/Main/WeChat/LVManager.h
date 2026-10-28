@interface LVManager : MMUserService <MegaVideoReddotListener, MMServiceProtocol>
{
    BOOL _redDotOberver; // +0x8
    LVMinimize * _minimize; // +0x10
    LVCacheManager * _pageCache; // +0x18
    NSMutableDictionary * _cachedExpt; // +0x20
}
+ (id)shared;
- (id)exptStringValueForKey:(id)arg1 ignoreCache:(BOOL)arg2;
- (int)exptIntValueForKey:(id)arg1 defaultValue:(int)arg2 ignoreCache:(BOOL)arg3;
- (BOOL)exptBoolValueForKey:(id)arg1 defaultValue:(BOOL)arg2 ignoreCache:(BOOL)arg3;
- (BOOL)enableBrowseChannel;
- (long long)playerDetailEnterType;
- (BOOL)isPlayerDetailFlutterFromOthers;
- (int)mainFeedType;
- (BOOL)isMainFeedFlutter;
- (BOOL)isMainFeedFlutterChannel;
- (int)channelUIStyle;
- (BOOL)shouldAutoMinimize;
- (BOOL)shouldAutoPip;
- (int)cellExposePercentage;
- (BOOL)mainFeedAutoPlay;
- (BOOL)mainFeedSilencePlay;
- (BOOL)mainFeedCardShowDuration;
- (BOOL)playerDetailPrefetchContinuePlayFeed;
- (int)playerDetailPrefetchRemainingTime;
- (BOOL)openMainFeedCache;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)setupSubmanagers;
- (void)startReddotObserver;
- (void)stopReddotObserver;
- (void)onFindFriendRedDotEvent:(id)arg1;
- (void)onReddotChanged:(id)arg1 newReddotInfo:(id)arg2;
- (id)minimize;
- (void)setMinimize:(id)arg1;
- (id)pageCache;
- (void)setPageCache:(id)arg1;
- (id)cachedExpt;
- (void)setCachedExpt:(id)arg1;
- (BOOL)redDotOberver;
- (void)setRedDotOberver:(BOOL)arg1;
- (void).cxx_destruct;
@end
