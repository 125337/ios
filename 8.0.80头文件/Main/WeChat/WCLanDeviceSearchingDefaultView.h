@interface WCLanDeviceSearchingDefaultView : UIView
{
    UILabel * m_searchLbl; // +0x8
    NSArray * m_tailStrs; // +0x10
    unsigned long long m_tailIndex; // +0x18
    MMTimer * m_tailTimer; // +0x20
    UIView * m_containerView; // +0x28
    UIImageView * m_searchingLogo; // +0x30
}
- (id)init;
- (void)textModifyMethod;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
