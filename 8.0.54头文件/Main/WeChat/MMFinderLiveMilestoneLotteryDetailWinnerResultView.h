@interface MMFinderLiveMilestoneLotteryDetailWinnerResultView : MMFinderLiveMilestoneLotteryDetailContentResultView <MMFinderLiveMilestoneLotteryViewModelExt, MMWebImageViewDelegate>
{
    BOOL _forceHideReceiveButton; // +0x8
    BOOL _shouldPlayPrizeGiftAnimation; // +0x9
    MMFinderLiveMilestoneLotteryViewModel * _vm; // +0x10
    NSString * _lotteryId; // +0x18
    FinderLiveMilestoneLotteryInfo * _lotteryInfo; // +0x20
    MMHeadImageView * _winnerAvatarView; // +0x28
    UILabel * _winnerNameLabel; // +0x30
    UILabel * _winTipLabel; // +0x38
    UILabel * _prizeNameLabel; // +0x40
    UIImageView * _prizeLeftDecorationImageView; // +0x48
    UIImageView * _prizeRightDecorationImageView; // +0x50
    UILabel * _prizeDescLabel; // +0x58
    MMUIButton * _receivePrizeBtn; // +0x60
    UILabel * _receivePrizeLabel; // +0x68
    MMWebImageView * _prizeImageView; // +0x70
    UILabel * _lostTitleLabel; // +0x78
    MMWebImageView * _lostEncourageImageView; // +0x80
    MMUIButton * _voteResultBtn; // +0x88
    RichTextView * _supplementLabel; // +0x90
}
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;
- (void)dealloc;
- (void)didAppear;
- (void)layoutSubviews;
- (void)initUI;
- (id)backButtonColor;
- (void)layoutUI;
- (void)layoutWinnerAvatarView;
- (void)layoutWinnerNameLabel;
- (void)layoutWinnerAvatarAndNameInSameLine;
- (void)layoutWinTipLabel;
- (void)layoutPrizeNameLabel;
- (void)layoutPrizeImageView;
- (void)layoutPrizeDecorationImageViews;
- (id)buildDecorationImageView;
- (double)bottomForBottomComponent;
- (void)layoutSupplementLabel;
- (void)layoutVoteResultBtn;
- (void)layoutReceivePrizeBtn;
- (void)layoutReceivePrizeLabel;
- (void)layoutPrizeDescLabel;
- (void)layoutLostTitleLabel;
- (void)layoutLostEncouragementImageView;
- (void)updateLotteryInfo:(id)arg1 equalCompare:(BOOL)arg2;
- (void)setForceHideReceiveButton:(BOOL)arg1;
- (BOOL)shouldHideReceiveButton;
- (void)playPrizeGiftAnimationIfNeeded;
- (void)onWinnerCouponInfoUpdated:(id)arg1 prevInfo:(id)arg2 lotteryId:(id)arg3;
- (void)onWinnerRedPacketStatusUpdated:(id)arg1;
- (id)getUserHeadImageUrl;
- (id)getUserDisplayName;
- (id)couponInfo;
- (id)prizeDesc;
- (BOOL)didWin;
- (BOOL)didParicipate;
- (BOOL)currentLostInfoHasEncouragement;
- (BOOL)isPrizeImageStyle;
- (BOOL)isPrizeGift;
- (BOOL)isPrizeMiniApp;
- (void)refreshData;
- (void)reloadReceivePrizeButton;
- (void)reportVoteButtonExpose;
- (void)reportReceivePrizeBtnExpose;
- (void)reportReceivePrizeBtnTapped;
- (id)getVoteResultReportCustomDict;
- (void)onReceivePrizeBtnTapped;
- (void)onVoteResultBtnTapped;
- (void)onLotteryCardWillCloseByCloseButton;
- (BOOL)forceHideReceiveButton;
- (BOOL)shouldPlayPrizeGiftAnimation;
- (void)setShouldPlayPrizeGiftAnimation:(BOOL)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)winnerAvatarView;
- (void)setWinnerAvatarView:(id)arg1;
- (id)winnerNameLabel;
- (void)setWinnerNameLabel:(id)arg1;
- (id)winTipLabel;
- (void)setWinTipLabel:(id)arg1;
- (id)prizeNameLabel;
- (void)setPrizeNameLabel:(id)arg1;
- (id)prizeLeftDecorationImageView;
- (void)setPrizeLeftDecorationImageView:(id)arg1;
- (id)prizeRightDecorationImageView;
- (void)setPrizeRightDecorationImageView:(id)arg1;
- (id)prizeDescLabel;
- (void)setPrizeDescLabel:(id)arg1;
- (id)receivePrizeBtn;
- (void)setReceivePrizeBtn:(id)arg1;
- (id)receivePrizeLabel;
- (void)setReceivePrizeLabel:(id)arg1;
- (id)prizeImageView;
- (void)setPrizeImageView:(id)arg1;
- (id)lostTitleLabel;
- (void)setLostTitleLabel:(id)arg1;
- (id)lostEncourageImageView;
- (void)setLostEncourageImageView:(id)arg1;
- (id)voteResultBtn;
- (void)setVoteResultBtn:(id)arg1;
- (id)supplementLabel;
- (void)setSupplementLabel:(id)arg1;
- (void).cxx_destruct;
@end

