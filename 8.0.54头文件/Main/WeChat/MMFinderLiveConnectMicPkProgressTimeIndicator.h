@interface MMFinderLiveConnectMicPkProgressTimeIndicator : UIView
{
    unsigned int _lastDisplayedTime; // +0x8
    UIImageView * _designatedGiftIconView; // +0x10
    UIView * _containerView; // +0x18
    UIImageView * _pkLogoIcon; // +0x20
    UILabel * _progressLabel; // +0x28
    MMUIActivityIndicatorView * _calLoadingView; // +0x30
    UILabel * _calcTipLabel; // +0x38
    MMFinderLiveTaskId * _taskId; // +0x40
    unsigned long long _lastPkState; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)initViews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)updatePkStateUI:(id)arg1;
- (id)liveTask;
- (id)designatedGiftIconView;
- (void)setDesignatedGiftIconView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)pkLogoIcon;
- (void)setPkLogoIcon:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)calLoadingView;
- (void)setCalLoadingView:(id)arg1;
- (id)calcTipLabel;
- (void)setCalcTipLabel:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)lastPkState;
- (void)setLastPkState:(unsigned long long)arg1;
- (unsigned int)lastDisplayedTime;
- (void)setLastDisplayedTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

