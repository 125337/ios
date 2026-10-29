@interface MJShootTemplateSearchStateView : MMUIView
{
    id <MJShootTemplateSearchStateViewDelegate> _delegate; // +0x8
    long long _currentState; // +0x10
    MMUIActivityIndicatorView * _activityIndicator; // +0x18
    UIView * _loadingView; // +0x20
    UILabel * _emptyView; // +0x28
    UIImageView * _retryIcon; // +0x30
    UILabel * _retryLabel; // +0x38
    UIView * _errorView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)updateState:(long long)arg1;
- (void)updateState:(long long)arg1 animated:(BOOL)arg2;
- (void)showLoading;
- (void)showEmpty;
- (void)showError;
- (void)retryButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)retryIcon;
- (void)setRetryIcon:(id)arg1;
- (id)retryLabel;
- (void)setRetryLabel:(id)arg1;
- (id)errorView;
- (void)setErrorView:(id)arg1;
- (void).cxx_destruct;
@end
