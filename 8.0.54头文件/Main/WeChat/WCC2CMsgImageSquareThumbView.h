@interface WCC2CMsgImageSquareThumbView : MsgImageSquareThumbView <WCFinderShareCustomTransitionProtocol>
{
    id <WCC2CMsgImageSquareThumbViewDelegate> _m_delegate; // +0x30
}
- (void)doShareAnimation;
- (BOOL)canBecomeFirstResponder;
- (void)deleteAction:(id)arg1;
- (void)showMsgLocation:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

