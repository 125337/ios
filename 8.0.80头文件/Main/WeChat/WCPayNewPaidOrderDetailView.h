@interface WCPayNewPaidOrderDetailView : MMUIView <WCPayPaidOrderShowInfoViewDelegate, WCPayImageMaskViewFilledDelegate, ShakeCheckerDelegate, WCPayLotteryViewDelegate, WCPayMchFavViewDelegate, WCPayCheckMchPosCgiDelegate, WCPayUnCheckMchPosCgiDelegate, WCPayPaidDetailFinderInfoViewDelegate, WCPayPaidDetailLeadTailViewDelegate>
{
    BOOL _isShaking; // +0x8
    BOOL _bCanShake; // +0x9
    BOOL _bIsMchFavViewSelected; // +0xa
    BOOL _bHasShowMchFavPopWindow; // +0xb
    BOOL _bIsMchUnCheckAfterCheck; // +0xc
    BOOL _bHasReportFinderInfoViewShow; // +0xd
    id <WCPayNewPaidOrderDetailViewDelegate> _delegate; // +0x10
    WCPayControlData * _data; // +0x18
    NSString * _selectedBrandUsername; // +0x20
    NSString * _outerBtnTitle; // +0x28
    UIScrollView * _contentView; // +0x30
    UIButton * _activityBtn; // +0x38
    WCPayWebImageView * _activityLogoImgView; // +0x40
    MMUILabel * _sloganLabel; // +0x48
    MMUILabel * _titleLabel; // +0x50
    UIButton * _doneBtn; // +0x58
    UIImageView * _selectedImageView; // +0x60
    WCPayImageMaskView * _maskImageView; // +0x68
    NSMutableArray * _emitterLayerArray; // +0x70
    WCPayWebImageView * _tinyAppActivityLogoImgView; // +0x78
    UIButton * _tinyAppActivtyBtn; // +0x80
    MMUILabel * _tinyAppActivityTitleLabel; // +0x88
    MMUILabel * _tinyAppActivityDescLabel; // +0x90
    CShakeChecker * _shakeChecker; // +0x98
    long long _numberOfShake; // +0xa0
    UIBezierPath * _prevPath; // +0xa8
    UIImageView * _wcpayIconView; // +0xb0
    UILabel * _brandLabel; // +0xb8
    UILabel * _sellerLabel; // +0xc0
    UILabel * _moneyLabel; // +0xc8
    UIView * _discountView; // +0xd0
    MMUIView * _activityInfoView; // +0xd8
    MMUIView * _tinyAppInfoView; // +0xe0
    WCPayLotteryView * _lotteryView; // +0xe8
    WCPayWebImageView * _backgroundImageView; // +0xf0
    MMUIView * _brandSubcribeView; // +0xf8
    WCPayMchFavView * _mchFavView; // +0x100
    WCPayWebImageView * _mchFavPopWindowImageView; // +0x108
    WCPayCheckMchPosCgi * _checkPosCgi; // +0x110
    WCPayUnCheckMchPosCgi * _uncheckPosCgi; // +0x118
    unsigned long long _checkMchTimestamp; // +0x120
    WCPayPaidDetailFinderInfoView * _finderInfoView; // +0x128
    WCPayPaidDetailLeadTailView * _leadTailView; // +0x130
}
- (id)initNewOrderDetailViewWithFrame:(CGRect)arg1 delegate:(id)arg2 controlData:(id)arg3;
- (void)refreshViewWithData:(id)arg1;
- (void)setupShakeOneShake;
- (void)startCheckShake;
- (void)stopCheckShake;
- (void)OnShake;
- (void)startShakeForPrice;
- (CGPoint)normalizeVector:(CGPoint)arg1;
- (void)layoutSubviews;
- (void)setupContentView;
- (double)setupHeaderContentView;
- (id)getShowInfoView;
- (double)setupCenterContentViewWithContentBottom:(double)arg1;
- (void)setupBottomContentViewWithContentBottom:(double)arg1;
- (id)getDiscountView;
- (id)getBrandSubscribeView;
- (id)getTinyAppInfoView;
- (id)getTinyAppActivityInfoView;
- (void)updateActivityInfoViewInCenterNew;
- (id)getscratchTipsImage:(CGRect)arg1;
- (void)selectBtnClick:(id)arg1;
- (void)tinyAppBtnClick;
- (void)doneBtnClick;
- (void)activityBtnClick;
- (void)refreshNativeActivityBtnTitle:(id)arg1;
- (void)refreshH5ActivityContentWithActivityUrl:(id)arg1 logoUrl:(id)arg2 mainTitle:(id)arg3 subTitle:(id)arg4 btnText:(id)arg5;
- (void)setDoneButtonTitle:(id)arg1;
- (void)tinyAppActivityBtnClick;
- (void)refreshTinyAppActivityContentWithAppName:(id)arg1 logoUrl:(id)arg2 appDesc:(id)arg3 btnText:(id)arg4;
- (id)getOrderDetail;
- (id)getActivityInfoData;
- (id)genGreenButton;
- (void)imageMaskView:(id)arg1 clearPercentDidChanged:(float)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4;
- (void)showEmitterEffectWithMinPoint:(CGPoint)arg1 maxPoint:(CGPoint)arg2;
- (void)startShowScartchAnimationWithPoint1:(CGPoint)arg1 point2:(CGPoint)arg2 birthRate:(double)arg3;
- (void)stopAllCurrentEmitterLayer;
- (id)genEmitterLayerCells:(CGPoint)arg1 endPoint:(CGPoint)arg2;
- (void)lotteryViewDidScratchOrShake:(id)arg1 drawType:(unsigned int)arg2;
- (void)lotteryViewDidFinishScratchOrShake:(id)arg1;
- (void)lotteryViewDidClickButton:(id)arg1;
- (BOOL)needShowMchFavView;
- (void)updateMchViewState:(BOOL)arg1;
- (void)onPayMchFavViewClick;
- (void)sendMchPosCheckStateRequest;
- (void)onGetCheckMchPosCgiResp:(id)arg1;
- (void)onGetUnCheckMchPosCgiResp:(id)arg1;
- (void)reportMchFavShowSucc:(BOOL)arg1;
- (void)reportMchFavClick:(BOOL)arg1;
- (void)reportMchFavCommit;
- (void)onFinderInfoViewClickWithRouteInfo:(id)arg1;
- (BOOL)needShowLeadTailView;
- (void)onLeadTailViewClickWithRouteInfo:(id)arg1;
- (void)onLeadTailViewClickWithCmdData:(id)arg1;
- (void)refreshViewAfterLeadTailViewSettled:(BOOL)arg1 resultContent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)selectedBrandUsername;
- (void)setSelectedBrandUsername:(id)arg1;
- (id)outerBtnTitle;
- (void)setOuterBtnTitle:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)activityBtn;
- (void)setActivityBtn:(id)arg1;
- (id)activityLogoImgView;
- (void)setActivityLogoImgView:(id)arg1;
- (id)sloganLabel;
- (void)setSloganLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)maskImageView;
- (void)setMaskImageView:(id)arg1;
- (id)emitterLayerArray;
- (void)setEmitterLayerArray:(id)arg1;
- (id)tinyAppActivityLogoImgView;
- (void)setTinyAppActivityLogoImgView:(id)arg1;
- (id)tinyAppActivtyBtn;
- (void)setTinyAppActivtyBtn:(id)arg1;
- (id)tinyAppActivityTitleLabel;
- (void)setTinyAppActivityTitleLabel:(id)arg1;
- (id)tinyAppActivityDescLabel;
- (void)setTinyAppActivityDescLabel:(id)arg1;
- (id)shakeChecker;
- (void)setShakeChecker:(id)arg1;
- (BOOL)isShaking;
- (void)setIsShaking:(BOOL)arg1;
- (BOOL)bCanShake;
- (void)setBCanShake:(BOOL)arg1;
- (long long)numberOfShake;
- (void)setNumberOfShake:(long long)arg1;
- (id)prevPath;
- (void)setPrevPath:(id)arg1;
- (id)wcpayIconView;
- (void)setWcpayIconView:(id)arg1;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (id)sellerLabel;
- (void)setSellerLabel:(id)arg1;
- (id)moneyLabel;
- (void)setMoneyLabel:(id)arg1;
- (id)discountView;
- (void)setDiscountView:(id)arg1;
- (id)activityInfoView;
- (void)setActivityInfoView:(id)arg1;
- (id)tinyAppInfoView;
- (void)setTinyAppInfoView:(id)arg1;
- (id)lotteryView;
- (void)setLotteryView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)brandSubcribeView;
- (void)setBrandSubcribeView:(id)arg1;
- (id)mchFavView;
- (void)setMchFavView:(id)arg1;
- (BOOL)bIsMchFavViewSelected;
- (void)setBIsMchFavViewSelected:(BOOL)arg1;
- (BOOL)bHasShowMchFavPopWindow;
- (void)setBHasShowMchFavPopWindow:(BOOL)arg1;
- (id)mchFavPopWindowImageView;
- (void)setMchFavPopWindowImageView:(id)arg1;
- (id)checkPosCgi;
- (void)setCheckPosCgi:(id)arg1;
- (id)uncheckPosCgi;
- (void)setUncheckPosCgi:(id)arg1;
- (unsigned long long)checkMchTimestamp;
- (void)setCheckMchTimestamp:(unsigned long long)arg1;
- (BOOL)bIsMchUnCheckAfterCheck;
- (void)setBIsMchUnCheckAfterCheck:(BOOL)arg1;
- (id)finderInfoView;
- (void)setFinderInfoView:(id)arg1;
- (BOOL)bHasReportFinderInfoViewShow;
- (void)setBHasReportFinderInfoViewShow:(BOOL)arg1;
- (id)leadTailView;
- (void)setLeadTailView:(id)arg1;
- (void).cxx_destruct;
@end
