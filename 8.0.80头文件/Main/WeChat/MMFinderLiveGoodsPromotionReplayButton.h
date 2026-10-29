@interface MMFinderLiveGoodsPromotionReplayButton : MMUIButton
{
    long long _currentState; // +0x8
    id /* block */ _replayButtonDidClickedBlock; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
    UIImageView * _iconView; // +0x20
    MMUILabel * _actionTextLabel; // +0x28
    MMTimerLabel * _timerLabel; // +0x30
    MMUIView * _dotTipsView; // +0x38
    FinderWindowProductInfo_ProductReplayInfo * _replayInfo; // +0x40
    MMFinderLiveTaskId * _taskID; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)prepareForReuse;
- (void)useSubViews:(id)arg1;
- (void)updateUIWithReplayRecordState:(long long)arg1;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)updateWithReplayInfo:(id)arg1 taskID:(id)arg2;
- (void)startTimer;
- (void)stopTimer;
- (void)updateTimeLabel:(unsigned int)arg1;
- (void)onTapInside:(id)arg1;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (id /* block */)replayButtonDidClickedBlock;
- (void)setReplayButtonDidClickedBlock:(id /* block */)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)actionTextLabel;
- (void)setActionTextLabel:(id)arg1;
- (id)timerLabel;
- (void)setTimerLabel:(id)arg1;
- (id)dotTipsView;
- (void)setDotTipsView:(id)arg1;
- (id)replayInfo;
- (void)setReplayInfo:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end
