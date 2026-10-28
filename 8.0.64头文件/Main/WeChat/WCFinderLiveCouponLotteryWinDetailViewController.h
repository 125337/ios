@interface WCFinderLiveCouponLotteryWinDetailViewController : MMCPUIViewController <MMUIViewControllerDelegate, WCAddressEntranceControlLogicDelegate, ILinkEventExt, MMWebViewDelegate>
{
    BOOL _hasRefreshData; // +0x70
    BOOL _isInLive; // +0x71
    unsigned int _lotteryType; // +0x74
    UIScrollView * _mainScrollView; // +0x78
    UIView * _contentView; // +0x80
    MMFinderLiveTaskId * _taskId; // +0x88
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x90
    UIView * _lotteryIconView; // +0x98
    UIImageView * _lotteryIconImg; // +0xa0
    MMUILabel * _nameLabel; // +0xa8
    MMUILabel * _lotteryTitleLabel; // +0xb0
    MMUILabel * _lotteryPrizeLabel; // +0xb8
    MMUIButton * _lotteryActionButton; // +0xc0
    UIView * _sepelateLine; // +0xc8
    MMUILabel * _lotteryPrizeTitleLabel; // +0xd0
    MMUILabel * _lotteryPrizeContentLabel; // +0xd8
    MMUILabel * _lotteryAttendTitleLabel; // +0xe0
    MMUILabel * _lotteryAttendContentLabel; // +0xe8
    MMUILabel * _lotteryWinCountTitleLabel; // +0xf0
    MMUILabel * _lotteryWinCountContentLabel; // +0xf8
    MMUILabel * _lotteryWinTimeTitleLabel; // +0x100
    MMUILabel * _lotteryWinTimeContentLabel; // +0x108
    MMUILabel * _timeOutLabel; // +0x110
    unsigned long long _scene; // +0x118
    NSString * _anchorNickName; // +0x120
    UIImageView * _topLuckyBagImageView; // +0x128
    UIImageView * _bottomLuckyBagImageView; // +0x130
    UIImageView * _leftLotteryImageView; // +0x138
    UIImageView * _rightLotteryImageView; // +0x140
    UIImageView * _lotteryPrizeImageView; // +0x148
    MMUILabel * _liveSpecifiedLabel; // +0x150
    WCAddressBaseAddress * _addressInfo; // +0x158
    unsigned long long _objectId; // +0x160
    unsigned long long _liveId; // +0x168
    MMFinderLiveLotteryGetPrizeMethodView * _getPrizeMethodView; // +0x170
    RichTextView * _agreementText; // +0x178
    NSString * _lotteryId; // +0x180
    MMFinderLiveTaskId * _liveTaskId; // +0x188
    MilestoneLotteryCouponRecordInfo * _couponRecordInfo; // +0x190
    MilestoneLotteryRedpacketInfo * _redpacketRecordInfo; // +0x198
    MilestoneLotteryInfo * _milestoneRecordInfo; // +0x1a0
}
- (id)initWithLiveTaskId:(id)arg1 lotteryInfo:(id)arg2 scene:(unsigned long long)arg3 anchorNickName:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 lotteryId:(id)arg7 lotteryType:(unsigned int)arg8 couponRecordInfo:(id)arg9 refreshData:(BOOL)arg10 isInLive:(BOOL)arg11;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (long long)overrideUserInterfaceStyle;
- (id)liveTask;
- (void)viewDidLoad;
- (void)updateNav;
- (void)viewDidLayoutSubviews;
- (void)updateData;
- (BOOL)shouldShowActionButton;
- (void)updateCouponData;
- (void)updateRedpacketData;
- (void)updateGenericMilestoneData;
- (void)updateImageWithHeadURLString:(id)arg1 size:(CGSize)arg2;
- (void)layoutUI;
- (void)layoutMainScrollView;
- (void)layoutContentView;
- (void)layoutLotteryIcon;
- (void)layoutTimeOutLabel;
- (void)layoutGetPrizeMethodView;
- (void)layoutAgreementText;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)layoutNameLabel;
- (void)layoutTitleLabel;
- (void)layoutPrizeLabel;
- (void)layoutLotteryPrizeImageViewIfNeeded;
- (void)layoutLiveSpecifiedLabel;
- (void)createLotteryPrizeImageViewIfNeeded;
- (void)layoutLotteryImageView;
- (void)rotateView:(id)arg1 angle:(double)arg2;
- (void)layoutActionButton;
- (void)configActionButtonForMilestonGoodsLottery;
- (BOOL)isPrizeMilestoneFreeGift;
- (BOOL)isPrizeMilestoneMiniApp;
- (BOOL)isPrizeMilestoneGoods;
- (BOOL)isFinishEdit;
- (BOOL)isShowTimeOutLabel;
- (BOOL)isExpired;
- (void)layoutSeparateLine;
- (void)layoutLotteryPrizeTitleLabel;
- (void)layoutLotteryPrizeContentLabel;
- (void)layoutLotteryAttendTitleLabel;
- (void)layoutLotteryAttendContentLabel;
- (void)layoutLotteryWinCountTitleLabel;
- (void)layoutLotteryWinCountContentLabel;
- (void)layoutLotteryWinTimeTitleLabel;
- (void)layoutLotteryWinTimeContentLabel;
- (void)onBackButtonClicked:(id)arg1;
- (void)handleActionButtonClick:(id)arg1;
- (void)handleRedpacketActionButtonClick;
- (void)handleCouponActionButtonClick;
- (void)refreshData;
- (void)openWeAppForShopProduct2:(id)arg1;
- (void)openWeAppForShopProduct:(unsigned long long)arg1 sceneName:(id)arg2 sceneNote:(id)arg3 appId:(id)arg4 fullBuyPath:(id)arg5 productExtData:(id)arg6 productPathCookies:(id)arg7 showNavigationBar:(BOOL)arg8 closeBlock:(id /* block */)arg9;
- (void)onShowMyAddress;
- (void)didSelectAddress:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)handelMsgEdit:(id)arg1 type:(int)arg2;
- (void)gotoChatViewVCWithContact:(id)arg1;
- (id)audienceLogReporter;
- (id)mainScrollView;
- (void)setMainScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)lotteryIconView;
- (void)setLotteryIconView:(id)arg1;
- (id)lotteryIconImg;
- (void)setLotteryIconImg:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)lotteryTitleLabel;
- (void)setLotteryTitleLabel:(id)arg1;
- (id)lotteryPrizeLabel;
- (void)setLotteryPrizeLabel:(id)arg1;
- (id)lotteryActionButton;
- (void)setLotteryActionButton:(id)arg1;
- (id)sepelateLine;
- (void)setSepelateLine:(id)arg1;
- (id)lotteryPrizeTitleLabel;
- (void)setLotteryPrizeTitleLabel:(id)arg1;
- (id)lotteryPrizeContentLabel;
- (void)setLotteryPrizeContentLabel:(id)arg1;
- (id)lotteryAttendTitleLabel;
- (void)setLotteryAttendTitleLabel:(id)arg1;
- (id)lotteryAttendContentLabel;
- (void)setLotteryAttendContentLabel:(id)arg1;
- (id)lotteryWinCountTitleLabel;
- (void)setLotteryWinCountTitleLabel:(id)arg1;
- (id)lotteryWinCountContentLabel;
- (void)setLotteryWinCountContentLabel:(id)arg1;
- (id)lotteryWinTimeTitleLabel;
- (void)setLotteryWinTimeTitleLabel:(id)arg1;
- (id)lotteryWinTimeContentLabel;
- (void)setLotteryWinTimeContentLabel:(id)arg1;
- (id)timeOutLabel;
- (void)setTimeOutLabel:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)anchorNickName;
- (void)setAnchorNickName:(id)arg1;
- (id)topLuckyBagImageView;
- (void)setTopLuckyBagImageView:(id)arg1;
- (id)bottomLuckyBagImageView;
- (void)setBottomLuckyBagImageView:(id)arg1;
- (id)leftLotteryImageView;
- (void)setLeftLotteryImageView:(id)arg1;
- (id)rightLotteryImageView;
- (void)setRightLotteryImageView:(id)arg1;
- (id)lotteryPrizeImageView;
- (void)setLotteryPrizeImageView:(id)arg1;
- (id)liveSpecifiedLabel;
- (void)setLiveSpecifiedLabel:(id)arg1;
- (id)addressInfo;
- (void)setAddressInfo:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)getPrizeMethodView;
- (void)setGetPrizeMethodView:(id)arg1;
- (id)agreementText;
- (void)setAgreementText:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned int)lotteryType;
- (void)setLotteryType:(unsigned int)arg1;
- (id)couponRecordInfo;
- (void)setCouponRecordInfo:(id)arg1;
- (id)redpacketRecordInfo;
- (void)setRedpacketRecordInfo:(id)arg1;
- (id)milestoneRecordInfo;
- (void)setMilestoneRecordInfo:(id)arg1;
- (BOOL)hasRefreshData;
- (void)setHasRefreshData:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (void).cxx_destruct;
@end
