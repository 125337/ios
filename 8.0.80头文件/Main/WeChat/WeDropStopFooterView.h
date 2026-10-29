@interface WeDropStopFooterView : WeDropBaseFooterView
{
    id <WeDropStopFooterDelegate> _delegate; // +0x8
    UIButton * _stopBtn; // +0x10
}
- (void)initSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)stopBtn;
- (void)setStopBtn:(id)arg1;
- (void).cxx_destruct;
@end
