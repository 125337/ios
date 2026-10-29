@interface MMFinderLiveSongLivingAudienceTableViewCell : MMFinderLiveSongLivingManageTableViewCell
{
    WCLiveBlurButton * _giftButton; // +0x8
}
+ (id)identifier;
- (id)giftButton;
- (void)onTapGesture:(id)arg1;
- (void)layoutUI;
- (void)updateRankLabel;
- (void)updateMusicNameLabelOrigin;
- (BOOL)shouldHideHeartValueLabel;
- (void)layoutHeartValueLabel;
- (id)createRequestMemDescLabel;
- (id)createFinishButton;
- (id)createSingButton;
- (void)setGiftButton:(id)arg1;
- (void).cxx_destruct;
@end
