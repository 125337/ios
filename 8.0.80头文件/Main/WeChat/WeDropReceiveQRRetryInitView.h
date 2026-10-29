@interface WeDropReceiveQRRetryInitView : WeDropReceiveQRBaseRetryView
{
    id <WeDropReceiveQRRetryInitViewDelegate> _delegate; // +0x8
}
- (void)onRetryTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
