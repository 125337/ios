@interface MMLiveKtvReplayDownloadLoadingView : UIView
{
    UIView * _containerView; // +0x8
    UIView * _circleContainerView; // +0x10
    MMLiveCircleProgressView * _progressView; // +0x18
    UIImageView * _completedIconView; // +0x20
    UILabel * _statusLabel; // +0x28
    long long _totalCount; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateProgressWithCurrent:(long long)arg1 total:(long long)arg2;
- (void)showCompletedState;
- (void)resetState;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)circleContainerView;
- (void)setCircleContainerView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)completedIconView;
- (void)setCompletedIconView:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (void).cxx_destruct;
@end
