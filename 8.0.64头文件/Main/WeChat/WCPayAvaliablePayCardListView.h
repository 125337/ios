@interface WCPayAvaliablePayCardListView : MMUIView <ILinkEventExt, MMWebViewDelegate, CAAnimationDelegate>
{
    WCPayBindCardInfo * selectedPayCardInfo; // +0x8
    NSArray * m_arrBindCard; // +0x10
    NSMutableArray * m_arrButtonArray; // +0x18
    UIView * m_backgroundView; // +0x20
    WCPayControlData * m_data; // +0x28
    id <WCPayAvaliablePayCardListViewDelegate> m_delegate; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)showAnimation;
- (void)OnCompleteButtonDone:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)onCancelButtonDone;
- (void)OnSelectedCard:(id)arg1;
- (void)OnSelectedNewCard:(id)arg1;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void)didMoveToWindow;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)webViewReturn:(id)arg1;
- (void).cxx_destruct;
@end
