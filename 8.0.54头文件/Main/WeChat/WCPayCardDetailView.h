@interface WCPayCardDetailView : UIButton <WCPayLogicMgrExt>
{
    WCPayBindCardInfo * m_info; // +0x8
    UILabel * bankTypeLabel; // +0x10
    BOOL needUpdateResource; // +0x18
    UIImageView * backView; // +0x20
    UIImageView * waterMaskView; // +0x28
    WCPayBankLogoView * logoView; // +0x30
    UIView * bottomArea; // +0x38
    id <WCPayCardDetailViewDelegate> _delegate; // +0x40
    WCPayNetImageResource * _m_waterMaskImage; // +0x48
    WCPayNetImageResource * _m_backgroundImage; // +0x50
    WCPayNetImageResource * _m_bankLogoImage; // +0x58
    UIView * _bankNoView; // +0x60
    WCPayBadgeView * _m_invalidView; // +0x68
    UIButton * _coverBtn; // +0x70
}
- (id)getBackGroundImage:(id)arg1;
- (void)GetAboutAllImage;
- (void)SaveAndShowWaterMaskImage:(id)arg1;
- (void)updateWaterMaskImage:(id)arg1;
- (void)layoutLogoView:(id)arg1;
- (void)SaveAndShowBackGroundImage:(id)arg1;
- (void)updateBackgroundImage:(id)arg1;
- (void)SaveAndShowBankLogoImage:(id)arg1;
- (void)updateLogoImage:(id)arg1;
- (void)OnSuccessGetBankPackage:(id)arg1;
- (void)OnSuccessGetBankResources:(id)arg1;
- (void)OnGetBankPackage:(id)arg1 Error:(id)arg2;
- (void)OnGetBankResources:(id)arg1 Error:(id)arg2;
- (void)initViewWithBindCardInfo:(id)arg1 Data:(id)arg2;
- (void)coverBtnClick;
- (BOOL)isShowECardMangeArea;
- (id)initWithBindCardInfo:(id)arg1 Data:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)CancelPerformGetData;
- (id)getInfo;
- (void)OnGetBankResourcesNotification:(id)arg1;
- (double)waterMaskHeight;
- (double)cardBackHeight;
- (BOOL)needUpdateResource;
- (void)setNeedUpdateResource:(BOOL)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (id)waterMaskView;
- (void)setWaterMaskView:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)bottomArea;
- (void)setBottomArea:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_waterMaskImage;
- (void)setM_waterMaskImage:(id)arg1;
- (id)m_backgroundImage;
- (void)setM_backgroundImage:(id)arg1;
- (id)m_bankLogoImage;
- (void)setM_bankLogoImage:(id)arg1;
- (id)bankNoView;
- (void)setBankNoView:(id)arg1;
- (id)m_invalidView;
- (void)setM_invalidView:(id)arg1;
- (id)coverBtn;
- (void)setCoverBtn:(id)arg1;
- (void).cxx_destruct;
@end

