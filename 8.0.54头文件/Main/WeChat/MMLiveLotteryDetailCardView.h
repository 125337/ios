@interface MMLiveLotteryDetailCardView : UIView <ILinkEventExt, MMUIViewControllerDelegate, WCAddressEntranceControlLogicDelegate>
{
    BOOL _isAudience; // +0x8
    BOOL _inWinnersDetailView; // +0x9
    BOOL _hasRefreshedWinnersListView; // +0xa
    id <MMLiveLotteryDetailCardViewDelegate> _actionDelegate; // +0x10
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x18
    MMFinderLiveLotteryDisplayLogic * _lotteryDisplayLogic; // +0x20
    MMFinderLiveTaskId * _liveTaskId; // +0x28
    unsigned long long _remainingTime; // +0x30
    NSString * _currentHeadImageUrl; // +0x38
    WCAddressBaseAddress * _addressInfo; // +0x40
    UIImage * _defaultBackgroundImage; // +0x48
    UIImage * _winnerBackgroundImage; // +0x50
    MMUIButton * _closeButton; // +0x58
    UIView * _cardView; // +0x60
    UIImageView * _lotteryInfoView; // +0x68
    UIImageView * _winnersDetailView; // +0x70
    MMLiveLotteryWinnerRecordListView * _winnersListView; // +0x78
    UILabel * _titleLabel; // +0x80
    RichTextView * _agreementText; // +0x88
    UILabel * _noParticipateResultTitle; // +0x90
    MMUIButton * _redTipButton; // +0x98
    MMLiveLotteryDetailCardGiftView * _giftView; // +0xa0
    UILabel * _prizeLabel; // +0xa8
    MMUIButton * _participateButton; // +0xb0
    UILabel * _remainingTimeLabel; // +0xb8
    UILabel * _participateCountLabel; // +0xc0
    MMUIButton * _fillWinInformationButton; // +0xc8
    MMUILabel * _timeOutLabel; // +0xd0
    MMHeadImageView * _winnerAvatarView; // +0xd8
    UILabel * _winnerNameLabel; // +0xe0
    UIImageView * _leftLotteryImageView; // +0xe8
    UIImageView * _rightLotteryImageView; // +0xf0
    MMUIButton * _winTitleButton; // +0xf8
    UILabel * _loseTitle; // +0x100
    UIView * _resultTipView; // +0x108
    UILabel * _resultTipLabel; // +0x110
    UIImageView * _resultTipArrow; // +0x118
    MMLiveLotteryCardGoodsView * _goodsView; // +0x120
    UIImageView * _gameTeamUpImageView; // +0x128
    UILabel * _anchorTimeTipLabel; // +0x130
    UILabel * _anchorParticipateCountLabel; // +0x138
    MMUILabel * _anchorWinnerCountLabel; // +0x140
    MMUIButton * _anchorCancelButton; // +0x148
    UILabel * _winnersDetailTitleLabel; // +0x150
    UILabel * _winnersDetailParticipateCountLabel; // +0x158
    UILabel * _winnersDetailResultTipLabel; // +0x160
    MMUIButton * _winnersDetailBackButton; // +0x168
    double _cardViewWidthPortrait; // +0x170
    double _cardViewWidthLandScape; // +0x178
    double _cardViewHeightPortrait; // +0x180
    double _cardViewHeightLandScape; // +0x188
}
+ (long long)transferAliasRoleTypeFromPersonalMsgScene:(unsigned int)arg1;
- (double)cardViewWidth;
- (double)cardViewHeight;
- (double)cardViewWidthIpad;
- (double)cardViewHeightIpad;
- (double)cardViewWidthPortrait;
- (double)cardViewWidthLandScape;
- (double)cardViewHeightPortrait;
- (double)cardViewHeightLandScape;
- (double)liveAdaptedValue:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 andLiveTaskId:(id)arg2;
- (void)addGestureRecognizers;
- (void)updateViews;
- (void)resetParticipateButtonNormalState;
- (void)resetParticipateButtonUnableState;
- (void)updateParticipateButtonTitle;
- (void)updateViewsFrame;
- (void)refreshWinnersListView;
- (void)layoutWinnersListView;
- (void)layoutWinnerResultTipLabel;
- (void)updateTitleLabelText;
- (void)updatePrizeLabelText;
- (void)updateGoodsView;
- (void)updateGameTeamUpImageView;
- (void)updateGiftView;
- (void)updateDefaultBackgroundImage;
- (void)updateAgreementText;
- (void)updateTitleLabelFrame;
- (void)updateGoodsViewFrame;
- (void)updateGameTeamUpImageViewFrame;
- (void)updatePackageGiftFrame;
- (BOOL)isShowGoodsView;
- (BOOL)isShowGameTeamUp;
- (BOOL)isShowPackageGift;
- (void)updatePrizeLabelFrame;
- (void)updateTimeLabelText;
- (void)updateTimeLabelAndParticipateCountLabelFrame;
- (void)updateLotteryInfo:(id)arg1;
- (void)updateRemainingTime:(unsigned long long)arg1;
- (void)showCardView;
- (void)_internalShowCardView;
- (void)onCardViewTap;
- (void)closeView;
- (void)closeViewWithEndState:(unsigned long long)arg1;
- (void)_internalCloseWithEndState:(unsigned long long)arg1;
- (void)onTapParticipateButton;
- (void)onTapAnchorCancelButton;
- (void)onTapWinnersDetailBackButton;
- (void)changeToWinnersDetailView;
- (void)setInWinnersDetailView:(BOOL)arg1;
- (id)getWinnerDisplayName;
- (id)getWinnerHeadImageUrl;
- (id)liveTask;
- (BOOL)isFollowState;
- (BOOL)hasJoinedFansClub;
- (double)getParticipateButtonWidth;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkHighlighted:(BOOL)arg1 url:(id)arg2 frame:(CGRect)arg3;
- (BOOL)isLotteryRichTextView:(id)arg1;
- (BOOL)isFinishEdit;
- (BOOL)isFinishOrder;
- (BOOL)isShowTimeOutLabel;
- (BOOL)isShowFillButton;
- (void)handleActionButtonClick:(id)arg1;
- (void)handlPackageGiftClick;
- (void)handleClaimMethodFreeGameTeamUp;
- (void)handleClaimMethodFreeOrder:(unsigned long long)arg1;
- (void)handelMsgEdit:(id)arg1 type:(int)arg2;
- (void)onShowMyAddress;
- (void)didSelectAddress:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)updateInformationButtonTitle;
- (void)updateAnchorWinnerLabelTitle;
- (id)getActionButtonChangeText:(id)arg1 color:(id)arg2 font:(id)arg3 isFinishOrder:(BOOL)arg4;
- (id)getRemainingTimeAttributedString;
- (void)gotoChatViewVCWithContact:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)lotteryDisplayLogic;
- (void)setLotteryDisplayLogic:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (BOOL)inWinnersDetailView;
- (unsigned long long)remainingTime;
- (void)setRemainingTime:(unsigned long long)arg1;
- (BOOL)hasRefreshedWinnersListView;
- (void)setHasRefreshedWinnersListView:(BOOL)arg1;
- (id)currentHeadImageUrl;
- (void)setCurrentHeadImageUrl:(id)arg1;
- (id)addressInfo;
- (void)setAddressInfo:(id)arg1;
- (id)defaultBackgroundImage;
- (void)setDefaultBackgroundImage:(id)arg1;
- (id)winnerBackgroundImage;
- (void)setWinnerBackgroundImage:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)lotteryInfoView;
- (void)setLotteryInfoView:(id)arg1;
- (id)winnersDetailView;
- (void)setWinnersDetailView:(id)arg1;
- (id)winnersListView;
- (void)setWinnersListView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)agreementText;
- (void)setAgreementText:(id)arg1;
- (id)noParticipateResultTitle;
- (void)setNoParticipateResultTitle:(id)arg1;
- (id)redTipButton;
- (void)setRedTipButton:(id)arg1;
- (id)giftView;
- (void)setGiftView:(id)arg1;
- (id)prizeLabel;
- (void)setPrizeLabel:(id)arg1;
- (id)participateButton;
- (void)setParticipateButton:(id)arg1;
- (id)remainingTimeLabel;
- (void)setRemainingTimeLabel:(id)arg1;
- (id)participateCountLabel;
- (void)setParticipateCountLabel:(id)arg1;
- (id)fillWinInformationButton;
- (void)setFillWinInformationButton:(id)arg1;
- (id)timeOutLabel;
- (void)setTimeOutLabel:(id)arg1;
- (id)winnerAvatarView;
- (void)setWinnerAvatarView:(id)arg1;
- (id)winnerNameLabel;
- (void)setWinnerNameLabel:(id)arg1;
- (id)leftLotteryImageView;
- (void)setLeftLotteryImageView:(id)arg1;
- (id)rightLotteryImageView;
- (void)setRightLotteryImageView:(id)arg1;
- (id)winTitleButton;
- (void)setWinTitleButton:(id)arg1;
- (id)loseTitle;
- (void)setLoseTitle:(id)arg1;
- (id)resultTipView;
- (void)setResultTipView:(id)arg1;
- (id)resultTipLabel;
- (void)setResultTipLabel:(id)arg1;
- (id)resultTipArrow;
- (void)setResultTipArrow:(id)arg1;
- (id)goodsView;
- (void)setGoodsView:(id)arg1;
- (id)gameTeamUpImageView;
- (void)setGameTeamUpImageView:(id)arg1;
- (id)anchorTimeTipLabel;
- (void)setAnchorTimeTipLabel:(id)arg1;
- (id)anchorParticipateCountLabel;
- (void)setAnchorParticipateCountLabel:(id)arg1;
- (id)anchorWinnerCountLabel;
- (void)setAnchorWinnerCountLabel:(id)arg1;
- (id)anchorCancelButton;
- (void)setAnchorCancelButton:(id)arg1;
- (id)winnersDetailTitleLabel;
- (void)setWinnersDetailTitleLabel:(id)arg1;
- (id)winnersDetailParticipateCountLabel;
- (void)setWinnersDetailParticipateCountLabel:(id)arg1;
- (id)winnersDetailResultTipLabel;
- (void)setWinnersDetailResultTipLabel:(id)arg1;
- (id)winnersDetailBackButton;
- (void)setWinnersDetailBackButton:(id)arg1;
- (void)setCardViewWidthPortrait:(double)arg1;
- (void)setCardViewWidthLandScape:(double)arg1;
- (void)setCardViewHeightPortrait:(double)arg1;
- (void)setCardViewHeightLandScape:(double)arg1;
- (void).cxx_destruct;
@end

