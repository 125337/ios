@interface WeDropReceiveQRRetryRequestView : WeDropReceiveQRBaseRetryView
{
    id <WeDropReceiveQRRetryRequestViewDelegate> _delegate; // +0x8
}
- (void)onRetryTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
