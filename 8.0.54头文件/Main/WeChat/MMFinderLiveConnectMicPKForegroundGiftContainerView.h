@interface MMFinderLiveConnectMicPKForegroundGiftContainerView : UIView
{
    NSMutableDictionary * _usernameForegroundHeightMap; // +0x8
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    NSMutableDictionary * _usernameForgroundPAGViewMap; // +0x18
    MMFinderLiveRewardGiftItem * _foregroundGiftItem; // +0x20
    PAGFile * _foregroundPAGFile; // +0x28
    RfxPagFile * _foregroundRfxPAGFile; // +0x30
    CGSize _lastLayoutSize; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)forceRelayout;
- (void)updateForegroundHeightPercent:(double)arg1 username:(id)arg2;
- (void)refreshDisplay;
- (void)refreshDisplayWithUsername:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (BOOL)isUseRfxPAG;
- (id)getOrCreateForegroundPAGViewWithUsername:(id)arg1;
- (void)resetPAGState;
- (id)liveTask;
- (id)usernameForgroundPAGViewMap;
- (id)usernameForegroundHeightMap;
- (void)setForegroundGiftItem:(id)arg1;
- (void)setUsernameForegroundHeightMap:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void)setUsernameForgroundPAGViewMap:(id)arg1;
- (id)foregroundGiftItem;
- (id)foregroundPAGFile;
- (void)setForegroundPAGFile:(id)arg1;
- (id)foregroundRfxPAGFile;
- (void)setForegroundRfxPAGFile:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

