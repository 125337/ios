@interface MMFinderLiveHomePageBottomPlayerViewModel : NSObject
{
    MMFinderLiveTaskId * _liveTaskId; // +0x8
    NSString * _liveAnchorName; // +0x10
    NSString * _liveTitleDescription; // +0x18
    WCFinderContact * _anchorContact; // +0x20
    unsigned long long _playBtnStatus; // +0x28
    double _bottomPlayerViewHeight; // +0x30
    double _bottomPlayerViewTop; // +0x38
    CGSize _liveContainerSize; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)playLive;
- (void)pauseLive;
- (void)onEnterForeground;
- (unsigned long long)playBtnStatus;
- (id)liveAnchorName;
- (id)liveTitleDescription;
- (id)anchorContact;
- (double)getLiveViewHeightPerWidthPercent;
- (void)adjustBottomPlayerSubviewsSize;
- (void)setLiveContainerSize:(CGSize)arg1;
- (id)liveTask;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void)setLiveAnchorName:(id)arg1;
- (void)setLiveTitleDescription:(id)arg1;
- (void)setAnchorContact:(id)arg1;
- (void)setPlayBtnStatus:(unsigned long long)arg1;
- (CGSize)liveContainerSize;
- (double)bottomPlayerViewHeight;
- (void)setBottomPlayerViewHeight:(double)arg1;
- (double)bottomPlayerViewTop;
- (void)setBottomPlayerViewTop:(double)arg1;
- (void).cxx_destruct;
@end

