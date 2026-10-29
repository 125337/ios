@interface MFPushBannerLogic : MMObject <BannerToastExt, IHeadImageExt, MMKernelExt>
{
    MFBannerBtn * m_bannerBtn; // +0x8
    id <MFPushBannerDelegate> _delegate; // +0x10
}
- (id)init;
- (void)createBannerBtn;
- (void)initBindPhoneBtn;
- (void)initUploadContactBtn;
- (void)initAddBookPermissonBtn;
- (void)initSetHeadBtn;
- (void)initOpenStickerShopBtn;
- (void)initOpenGameBtn;
- (void)initOpenMassSendBtn;
- (void)initOpenMomentBtn;
- (void)initRecommandSurroundingBtn;
- (void)showBannerBtn:(int)arg1;
- (void)bindPhone:(id)arg1;
- (void)openPermission:(id)arg1;
- (void)uploadContact:(id)arg1;
- (void)checkSurroundingPeople:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)jumpToStickerShop:(id)arg1;
- (void)jumpToGame:(id)arg1;
- (void)jumpToMoment:(id)arg1;
- (void)openMassSend:(id)arg1;
- (void)updatePushBanner;
- (void)onHeadImageChange:(id)arg1;
- (void)onBannerUpdate;
- (void)onReceiveNewFriendRecommandMsg:(id)arg1;
- (void)onReceiveSecurityBannerMsg:(id)arg1;
- (void)onInitOK;
- (id)bannerBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
