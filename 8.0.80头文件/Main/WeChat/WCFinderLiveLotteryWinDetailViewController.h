@interface WCFinderLiveLotteryWinDetailViewController : MMCPUIViewController <MMUIViewControllerDelegate, WCAddressEntranceControlLogicDelegate, ILinkEventExt>
{
    int _fromScene; // +0x70
    unsigned long long _sourceType; // +0x78
    UIScrollView * _mainScrollView; // +0x80
    UIView * _contentView; // +0x88
    MMFinderLiveTaskId * _taskId; // +0x90
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x98
    MilestoneLotteryInfo * _milestoneLotteryInfo; // +0xa0
    UIView * _lotteryIconView; // +0xa8
    UIImageView * _lotteryIconImg; // +0xb0
    MMUILabel * _nameLabel; // +0xb8
    MMUILabel * _lotteryTitleLabel; // +0xc0
    MMUILabel * _lotteryPrizeLabel; // +0xc8
    MMUIButton * _lotteryActionButton; // +0xd0
    UIView * _sepelateLine; // +0xd8
    MMUILabel * _lotteryPrizeTitleLabel; // +0xe0
    MMUILabel * _lotteryPrizeContentLabel; // +0xe8
    MMUILabel * _lotteryAttendTitleLabel; // +0xf0
    MMUILabel * _lotteryAttendContentLabel; // +0xf8
    MMUILabel * _lotteryWinCountTitleLabel; // +0x100
    MMUILabel * _lotteryWinCountContentLabel; // +0x108
    MMUILabel * _lotteryWinTimeTitleLabel; // +0x110
    MMUILabel * _lotteryWinTimeContentLabel; // +0x118
    MMUILabel * _timeOutLabel; // +0x120
    unsigned long long _scene; // +0x128
    NSString * _anchorNickName; // +0x130
    UIImageView * _topLuckyBagImageView; // +0x138
    UIImageView * _bottomLuckyBagImageView; // +0x140
    UIImageView * _leftLotteryImageView; // +0x148
    UIImageView * _rightLotteryImageView; // +0x150
    WCAddressBaseAddress * _addressInfo; // +0x158
    unsigned long long _objectId; // +0x160
    unsigned long long _liveId; // +0x168
    MMFinderLiveLotteryGetPrizeMethodView * _getPrizeMethodView; // +0x170
    RichTextView * _agreementText; // +0x178
    WCFinderContact * _anchorContact; // +0x180
    MMLiveLotteryDetailCardGiftView * _giftView; // +0x188
    PrizeRecord * _prizeRecord; // +0x190
}
+ (long long)transferAliasRoleTypeFromPersonalMsgScene:(unsigned int)arg1;
- (id)initWithLiveTaskId:(id)arg1 prizeRecord:(id)arg2 scene:(unsigned long long)arg3 anchorNickName:(id)arg4 anchorContact:(id)arg5 objectId:(unsigned long long)arg6 liveId:(unsigned long long)arg7;
- (id)initWithLiveTaskId:(id)arg1 lotteryInfo:(id)arg2 milestoneLotteryInfo:(id)arg3 scene:(unsigned long long)arg4 anchorNickName:(id)arg5 anchorContact:(id)arg6 objectId:(unsigned long long)arg7 liveId:(unsigned long long)arg8;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)updateNav;
- (void)viewDidLayoutSubviews;
- (void)updateData;
- (void)updateImageWithHeadURLString:(id)arg1 size:(CGSize)arg2;
- (id)liveTask;
- (id)innerGetLotteryAttendTypeStr;
- (void)layoutUI;
- (void)layoutMainScrollView;
- (void)layoutContentView;
- (void)layoutLotteryIcon;
- (void)layoutTimeOutLabel;
- (void)layoutPackageGiftView;
- (void)layoutGetPrizeMethodView;
- (void)layoutAgreementText;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)layoutNameLabel;
- (void)layoutTitleLabel;
- (void)layoutPrizeLabel;
- (void)layoutLotteryImageView;
- (void)rotateView:(id)arg1 angle:(double)arg2;
- (void)layoutActionButton;
- (void)configActionButtonForMilestonGoodsLottery;
- (void)configActionButtonForNormalLottery;
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
- (void)freeOrderUpdateLotteryInfo;
- (void)onShowMyAddress;
- (void)didSelectAddress:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)handelMsgEdit:(id)arg1 type:(int)arg2;
- (void)gotoChatViewVCWithContact:(id)arg1;
- (void)refreshData;
- (BOOL)isMilestoneGoodsLottery;
- (BOOL)isFinishOrder;
- (id)getActionButtonChangeText:(id)arg1 font:(id)arg2;
- (void)reportLotteryDetail:(BOOL)arg1;
- (BOOL)isShowPackageGift;
- (BOOL)isShowGameTeamUp;
- (id)audienceLogReporter;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (id)mainScrollView;
- (void)setMainScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)milestoneLotteryInfo;
- (void)setMilestoneLotteryInfo:(id)arg1;
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
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)giftView;
- (void)setGiftView:(id)arg1;
- (id)prizeRecord;
- (void)setPrizeRecord:(id)arg1;
- (void).cxx_destruct;
@end
