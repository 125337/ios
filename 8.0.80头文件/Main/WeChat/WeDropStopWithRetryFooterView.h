@interface WeDropStopWithRetryFooterView : WeDropStopFooterView
{
    NSString * _retryTitle; // +0x8
    UIButton * _retryBtn; // +0x10
}
- (void)initSubviews;
- (void)setRetryTitle:(id)arg1;
- (void)onRetry;
- (id)retryTitle;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (void).cxx_destruct;
@end
