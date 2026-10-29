@interface MMFinderLiveGoodsPromotionReplayButton : MMUIButton
{
    long long _currentState; // +0x8
    id /* block */ _replayButtonDidClickedBlock; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
    UIView * _maskView; // +0x20
    UIImageView * _iconView; // +0x28
    MMUILabel * _actionTextLabel; // +0x30
    MMTimerLabel * _timerLabel; // +0x38
    MMUIView * _dotTipsView; // +0x40
    MMFinderLiveGoodsViewModel * _goodsViewModel; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)prepareForReuse;
- (void)useSubViews:(id)arg1;
- (void)updateUIWithReplayRecordState:(long long)arg1;
- (void)updateWithGoodsViewModel:(id)arg1;
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
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)actionTextLabel;
- (void)setActionTextLabel:(id)arg1;
- (id)timerLabel;
- (void)setTimerLabel:(id)arg1;
- (id)dotTipsView;
- (void)setDotTipsView:(id)arg1;
- (id)goodsViewModel;
- (void)setGoodsViewModel:(id)arg1;
- (void).cxx_destruct;
@end

