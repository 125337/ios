@interface WCPayPaidOrderShowInfoView : UIView
{
    NSArray * _m_showArray; // +0x8
    id <WCPayPaidOrderShowInfoViewDelegate> _m_delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateDelegate:(id)arg1;
- (void)updateWithShowInfo:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)m_showArray;
- (void)setM_showArray:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
