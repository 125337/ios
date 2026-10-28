@interface MMLiveRewardGainRecordsBar : MMLiveBaseComponentView
{
    id /* block */ _giftRecordsButtonClickedBlock; // +0x8
    NSString * _rewardWecoinCntTitle; // +0x10
    MMUIButton * _giftRecordsButton; // +0x18
    UIImageView * _avatarIcon; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateRewardWecoinCnt:(unsigned long long)arg1;
- (void)sizeToFits;
- (void)onGiftRecordsButtonClicked;
- (id /* block */)giftRecordsButtonClickedBlock;
- (void)setGiftRecordsButtonClickedBlock:(id /* block */)arg1;
- (id)rewardWecoinCntTitle;
- (void)setRewardWecoinCntTitle:(id)arg1;
- (id)giftRecordsButton;
- (void)setGiftRecordsButton:(id)arg1;
- (id)avatarIcon;
- (void)setAvatarIcon:(id)arg1;
- (void).cxx_destruct;
@end
