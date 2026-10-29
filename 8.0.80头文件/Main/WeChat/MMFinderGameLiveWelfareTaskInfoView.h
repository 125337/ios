@interface MMFinderGameLiveWelfareTaskInfoView : UIView
{
    id /* block */ _changeStateCompletion; // +0x8
    id /* block */ _contentSizeDidChangeCallback; // +0x10
    MMFinderGameLiveWelfareInfoViewModel * _viewModel; // +0x18
    MMFinderGameLiveWelfareTaskCollectionView * _taskListView; // +0x20
    LOTAnimationView * _pagPacketView; // +0x28
    MMWebImageView * _customWebImageView; // +0x30
    unsigned long long _currentStatus; // +0x38
    NSString * _lastLuckBagWelfareId; // +0x40
    UILabel * _tipLabel; // +0x48
}
- (id)init;
- (void)setupUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPagPacketView;
- (void)updateGameLiveWelfareTaskInfoViewShowStatus:(unsigned long long)arg1;
- (void)updateHiddenStatus:(BOOL)arg1;
- (void)startCarouselTaskAnimated:(BOOL)arg1;
- (void)updateData;
- (void)showLuckBagReceived;
- (void)finishLuckBagReceiveAnimation;
- (void)onClickWelfareTaskInfoView:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)reportClickGameWelfare:(BOOL)arg1 status:(unsigned long long)arg2;
- (int)getCurrentUITypeForDataReport;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)taskListView;
- (id)pagPacketView;
- (id)tipLabel;
- (id)customWebImageView;
- (id /* block */)changeStateCompletion;
- (void)setChangeStateCompletion:(id /* block */)arg1;
- (id /* block */)contentSizeDidChangeCallback;
- (void)setContentSizeDidChangeCallback:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setTaskListView:(id)arg1;
- (void)setPagPacketView:(id)arg1;
- (void)setCustomWebImageView:(id)arg1;
- (unsigned long long)currentStatus;
- (void)setCurrentStatus:(unsigned long long)arg1;
- (id)lastLuckBagWelfareId;
- (void)setLastLuckBagWelfareId:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
