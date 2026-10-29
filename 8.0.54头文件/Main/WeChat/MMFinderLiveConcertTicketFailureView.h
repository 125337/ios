@interface MMFinderLiveConcertTicketFailureView : UIView
{
    id /* block */ _retryBlock; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIButton * _retryButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 retryBlock:(id /* block */)arg2;
- (void)layoutSubviews;
- (void)onRetryButtonTapped;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (void).cxx_destruct;
@end

