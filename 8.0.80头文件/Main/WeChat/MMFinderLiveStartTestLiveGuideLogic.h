@interface MMFinderLiveStartTestLiveGuideLogic : NSObject
{
    BOOL _isStartTestLiveGuideShowing; // +0x8
    id <MMFinderLiveStartTestLiveGuideLogicDelegate> _delegate; // +0x10
    WCFinderLiveStarterReporter * _reporter; // +0x18
}
- (id)initWithReporter:(id)arg1;
- (void)checkNeedShowStartTestLiveGuideWithTaskId:(id)arg1;
- (void)onMoreActionSheetShown;
- (BOOL)checkStartTestLiveGuideShowCntBelowLimit:(id)arg1;
- (BOOL)checkStartTestLiveGuideShowTimeIntervalReached;
- (unsigned int)getCurStartTestLiveGuideShowCnt;
- (void)updateCurStartTestLiveGuideShowCnt;
- (unsigned long long)getLastStartTestLiveGuideShowTime;
- (void)updateLastStartTestLiveGuideShowTime;
- (void)onUserClickGuidePubble;
- (void)dismissGuideOnClick;
- (void)dismissGuideOnTimeout;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isStartTestLiveGuideShowing;
- (void)setIsStartTestLiveGuideShowing:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
