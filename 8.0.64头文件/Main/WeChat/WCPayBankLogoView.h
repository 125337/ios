@interface WCPayBankLogoView : UIImageView
{
    NSString * m_bankType; // +0x8
    WCPayNetImageResource * _m_bankLogoImage; // +0x10
}
- (void)initViewWithBankType:(id)arg1 Frame:(CGRect)arg2;
- (id)initWithFrame:(CGRect)arg1 WithBankType:(id)arg2;
- (void)dealloc;
- (void)UpdateImage:(id)arg1;
- (void)loadCacheImage;
- (void)OnSuccessGetBankResources:(id)arg1;
- (void)SaveAndShowBankLogoImage:(id)arg1;
- (void)OnGetBankResourcesNotification:(id)arg1;
- (id)m_bankType;
- (void)setM_bankType:(id)arg1;
- (id)m_bankLogoImage;
- (void)setM_bankLogoImage:(id)arg1;
- (void).cxx_destruct;
@end
