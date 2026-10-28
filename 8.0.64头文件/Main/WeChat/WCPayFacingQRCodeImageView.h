@interface WCPayFacingQRCodeImageView : UIView <WCActionSheetDelegate>
{
    id <WCPayFacingQRCodeImageViewDelegate> m_delegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)LongPressEvents;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
