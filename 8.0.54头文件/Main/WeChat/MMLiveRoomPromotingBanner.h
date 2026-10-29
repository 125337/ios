@interface MMLiveRoomPromotingBanner : UIView
{
    id /* block */ _promotingStateLabelClickedBlock; // +0x8
    id /* block */ _promotingStateLabelTimeoutBlock; // +0x10
    double _maxWidth; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMUILabel * _promotingStateLabel; // +0x28
    PAGView * _animationView; // +0x30
    UIImageView * _doneIconView; // +0x38
    MMFinderLiveSyncPromotionInfo * _promotionInfo; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
    unsigned long long _lastPromotingState; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateSyncPromotionInfo:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)sizeToFits;
- (id)finderLiveTask;
- (unsigned long long)promotingState:(id)arg1;
- (void)onPromotingStateLabelClicked;
- (void)onStopPromoting;
- (id /* block */)promotingStateLabelClickedBlock;
- (void)setPromotingStateLabelClickedBlock:(id /* block */)arg1;
- (id /* block */)promotingStateLabelTimeoutBlock;
- (void)setPromotingStateLabelTimeoutBlock:(id /* block */)arg1;
- (double)maxWidth;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)promotingStateLabel;
- (void)setPromotingStateLabel:(id)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (id)doneIconView;
- (void)setDoneIconView:(id)arg1;
- (id)promotionInfo;
- (void)setPromotionInfo:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (unsigned long long)lastPromotingState;
- (void)setLastPromotingState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

