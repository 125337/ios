@interface MMMusicMVPostingStateView : UIView
{
    unsigned long long _state; // +0x8
    id /* block */ _onTappedRetry; // +0x10
    MMUIActivityIndicatorView * _postingIndicator; // +0x18
    UILabel * _tooltipLabel; // +0x20
    UIImageView * _failedImageView; // +0x28
    UIImageView * _retryImageView; // +0x30
    UILabel * _retryLabel; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)refreshSubviews;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)handleTapGesture;
- (id)postingIndicator;
- (id)tooltipLabel;
- (id)failedImageView;
- (id)retryImageView;
- (id)retryLabel;
- (unsigned long long)state;
- (id /* block */)onTappedRetry;
- (void)setOnTappedRetry:(id /* block */)arg1;
- (void)setPostingIndicator:(id)arg1;
- (void)setTooltipLabel:(id)arg1;
- (void)setFailedImageView:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (void)setRetryLabel:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
