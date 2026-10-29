@interface WCImageFullScreenViewContainerForHBV4 : MMUIScrollView <WCActionSheetDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCFacadeExt, WCIMageGreetingExtV4>
{
    WCMediaItem * m_mediaData; // +0x8
    WCMediaItemWrap * m_mediaDataWrap; // +0x10
    CGRect m_originImageRectInScreen; // +0x18
    CGSize m_initalContentSize; // +0x38
    UIImage * m_image; // +0x48
    BOOL m_isAnimating; // +0x50
    BOOL m_isShowing; // +0x51
    BOOL m_bIsLongPressHandled; // +0x52
    BOOL m_isImageReady; // +0x53
    BOOL m_isComeFromDownload; // +0x54
    UIImageView * m_container; // +0x58
    MMLoadingView * m_loadingView; // +0x60
    MMProgressViewEx * m_processView; // +0x68
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x70
    WCActionSheet * m_actionSheet; // +0x78
    id <WCImageFullScreenViewContainerDelegateForHBV4> m_delegate; // +0x80
    UIButton * m_countDownBtn; // +0x88
    UILabel * m_moneyLabel; // +0x90
    UILabel * m_rmbLabel; // +0x98
    UILabel * m_balanceTipLabel; // +0xa0
    UIView * m_backgroundView; // +0xa8
    UIImageView * m_blurCutoutImageView; // +0xb0
    MMWebImageView * m_adImageView; // +0xb8
    UIButton * m_greetingTipBtn; // +0xc0
    UILabel * m_noMoneytipLabel; // +0xc8
    UILabel * m_noMoneyDetailtipLabel; // +0xd0
    unsigned int m_count; // +0xd8
    MMTimer * _timer; // +0xe0
    UIView * m_blurView; // +0xe8
    UIImageView * m_adView; // +0xf0
    UIImageView * m_bannerImageView; // +0xf8
    UIImageView * m_bannerInnerBorderView; // +0x100
    UIImageView * m_logoImageView; // +0x108
    UILabel * m_sponsorSloganLabel; // +0x110
    UIImageView * m_hasMyPhotoView; // +0x118
    ZCWScrollNumView * m_numView; // +0x120
    unsigned int m_rewardMoney; // +0x128
    UILabel * m_yuanLable; // +0x130
    UIView * m_bkgView; // +0x138
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x140
}
- (id)init;
- (void)stopAllAnimation;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)setZoomScale:(double)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentSize:(CGSize)arg1;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZooming;
- (void)onSingleTap:(id)arg1;
- (void)resetRedEnvelopesInfoWhenExit;
- (void)hideHbItems;
- (void)onDoubleTap:(id)arg1;
- (void)initScrollViewHelper;
- (void)reloadView:(id)arg1;
- (void)showProcessView;
- (void)clearStatus;
- (void)setContentOffsetAndSize;
- (void)animationShowView;
- (void)initHongBaoAchievementUI;
- (void)initHongBaoUI;
- (void)showNumAnimation;
- (unsigned int)genRandomRewardMoney;
- (void)animationShowDidStop;
- (void)showHongBaoView;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowStep2_Animate;
- (BOOL)isMyPhoto;
- (void)countDown;
- (void)resetCountDownBtn;
- (void)animationShowStep2;
- (void)animationShowWithMediaItemWrap:(id)arg1;
- (void)animationShowWithMediaItem:(id)arg1;
- (void)setM_mediaData:(id)arg1;
- (void)tryDownloadImage;
- (void)animationHideWithRotate;
- (void)animationHideDidStop;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onDeviceRotate:(BOOL)arg1;
- (void)contentNeedRotateWithOrientation:(long long)arg1;
- (void)animationRotateDidStop;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)isTouchInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)PreScanQRCode;
- (void)LongPressEvents;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)resetPositionByContainerFrame;
- (void)greetingTipBtnClicked;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_mediaData;
- (id)m_mediaDataWrap;
- (void)setM_mediaDataWrap:(id)arg1;
- (CGRect)m_originImageRectInScreen;
- (void)setM_originImageRectInScreen:(CGRect)arg1;
- (CGSize)m_initalContentSize;
- (void)setM_initalContentSize:(CGSize)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_loadingView;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)m_container;
- (void)setM_container:(id)arg1;
- (void).cxx_destruct;
@end

