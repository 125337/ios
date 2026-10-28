@interface WCLiveStarterScrollActionSheetViewModel : NSObject
{
    MMFinderLiveTaskId * _liveTaskId; // +0x8
    WCFinderStarterLiveViewModel * _startVM; // +0x10
    MMFinderLiveModeModel * _modeModel; // +0x18
    unsigned long long _hiddenItemsFlag; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)isCommentAssistantEnable;
- (BOOL)isRecommendOptionExpose;
- (BOOL)isCommentEnable;
- (BOOL)isBigEmoticonCommentEnable;
- (BOOL)isLikeEnable;
- (BOOL)isBulletinEnable;
- (BOOL)isQuickReplyEnable;
- (BOOL)isFreeTalkEnabled;
- (BOOL)isMicEnable;
- (BOOL)isRewardEnable;
- (BOOL)isMicMuted;
- (BOOL)isPrizeEnabled;
- (BOOL)showPrizeInController;
- (BOOL)isPlayTogetherEnabled;
- (BOOL)isShoppingEnabled;
- (BOOL)isHiddenAudienceNameEnable;
- (BOOL)isHiddenAudienceName;
- (long long)currVisibilityMode;
- (BOOL)isRewardAnchorEntrenceEnable;
- (BOOL)isLikeAnchorEntrenceEnable;
- (BOOL)enableShowFansGroupEntrance;
- (BOOL)isShowTrafficEntranceEnabled;
- (BOOL)isShowEntranceForFeedbackHelpEnabled;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (BOOL)isFansGroupEnabled;
- (BOOL)isAnchorCustomizeRewardEnabled;
- (BOOL)isRecommendOptionEnabled;
- (BOOL)isRewardItemEnabled;
- (BOOL)isBGMusicItemEnabled;
- (BOOL)game_enableSettingBGMusic:(id)arg1;
- (BOOL)isCreateLiveSongsItemEnabled;
- (BOOL)game_canCreateLiveSongs:(id)arg1;
- (BOOL)isLinkItemEnabled;
- (BOOL)isShowOpPromotionCardEntranceEnable;
- (BOOL)isShowCreatorCenterEnabled;
- (BOOL)shouldHideRedPacketItem;
- (BOOL)shouldHideLinkItem;
- (BOOL)shouldHideFansGroupItem;
- (BOOL)shouldHideRewardWishItem;
- (BOOL)shouldHideRewardMusicItem;
- (id)liveTask;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)startVM;
- (void)setStartVM:(id)arg1;
- (id)modeModel;
- (void)setModeModel:(id)arg1;
- (unsigned long long)hiddenItemsFlag;
- (void)setHiddenItemsFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
