@interface CBTAsstPagingBoundaryView : UIView
{
    UIActivityIndicatorView * _spinner; // +0x8
    UILabel * _statusLabel; // +0x10
    UIButton * _retryButton; // +0x18
    unsigned long long _state; // +0x20
    unsigned long long _loadingGeneration; // +0x28
    id /* block */ _onRetry; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateState:(unsigned long long)arg1;
- (void)didRetry;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)spinner;
- (void)setSpinner:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)loadingGeneration;
- (void)setLoadingGeneration:(unsigned long long)arg1;
- (id /* block */)onRetry;
- (void)setOnRetry:(id /* block */)arg1;
- (void).cxx_destruct;
@end
