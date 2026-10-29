@interface MMFinderLiveMilestoneLotteryDetailAttendView : MMFinderLiveMilestoneLotteryDetailSecondaryView <MMFinderLiveMilestoneLotteryViewModelExt, MMWebImageViewDelegate>
{
    BOOL _accountAlreadyFollowed; // +0x8
    id /* block */ _onAttendAction; // +0x10
    MMFinderLiveMilestoneLotteryViewModel * _vm; // +0x18
    MMFinderLiveMilestoneLotteryCouponInfo * _couponInfo; // +0x20
    NSString * _lotteryId; // +0x28
    MMUIButton * _attendButton; // +0x30
    MMUIButton * _awardDetailButton; // +0x38
    UILabel * _awardLabel; // +0x40
    MMWebImageView * _awardImageView; // +0x48
    UILabel * _titleLabel; // +0x50
    UILabel * _descLabel; // +0x58
    UILabel * _countdownLabel; // +0x60
    UIView * _followTopLineView; // +0x68
    UIView * _followBottomLineView; // +0x70
    MMWebImageView * _followAccountImageView; // +0x78
    UILabel * _followAccountNameLabel; // +0x80
    UILabel * _followAccountDescLabel; // +0x88
    MMWebImageView * _followAccountIconImageView; // +0x90
    UIButton * _accountProfileButton; // +0x98
    unsigned long long _countdownSeconds; // +0xa0
    CGSize _lastLayoutSize; // +0xa8
}
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)arg1;
- (void)onOngoingLotteryCountdown:(id)arg1 remainingSeconds:(unsigned int)arg2;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)layoutSubviews;
- (void)layoutAttendButton;
- (void)layoutCountdownLabel;
- (id)curLotteryInfo;
- (void)initUI;
- (id)backButtonColor;
- (id)makeLineView;
- (double)getAwardImageLen;
- (BOOL)isAttendTypeFollow;
- (void)reloadDescLabel;
- (void)reloadFollowAccountDescLabel;
- (void)reloadAttendButtonState;
- (void)refreshFollowStateIfNeeded;
- (void)updateCountdownLabel;
- (void)updateCountdownLabelWithAnimation:(BOOL)arg1;
- (void)onAttendButtonTapped;
- (void)onAwardDetailButtonClicked;
- (void)onTapAccountProfile;
- (void)onLoadImageOK:(id)arg1;
- (id)audienceLogReporter;
- (id /* block */)onAttendAction;
- (void)setOnAttendAction:(id /* block */)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)couponInfo;
- (void)setCouponInfo:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)attendButton;
- (void)setAttendButton:(id)arg1;
- (id)awardDetailButton;
- (void)setAwardDetailButton:(id)arg1;
- (id)awardLabel;
- (void)setAwardLabel:(id)arg1;
- (id)awardImageView;
- (void)setAwardImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)followTopLineView;
- (void)setFollowTopLineView:(id)arg1;
- (id)followBottomLineView;
- (void)setFollowBottomLineView:(id)arg1;
- (id)followAccountImageView;
- (void)setFollowAccountImageView:(id)arg1;
- (id)followAccountNameLabel;
- (void)setFollowAccountNameLabel:(id)arg1;
- (id)followAccountDescLabel;
- (void)setFollowAccountDescLabel:(id)arg1;
- (id)followAccountIconImageView;
- (void)setFollowAccountIconImageView:(id)arg1;
- (BOOL)accountAlreadyFollowed;
- (void)setAccountAlreadyFollowed:(BOOL)arg1;
- (id)accountProfileButton;
- (void)setAccountProfileButton:(id)arg1;
- (unsigned long long)countdownSeconds;
- (void)setCountdownSeconds:(unsigned long long)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

