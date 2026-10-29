@interface WCLiveStarterScrollActionSheetViewModel : NSObject
{
    MMFinderLiveTaskId * _liveTaskId; // +0x8
    unsigned long long _hiddenItemsFlag; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)isCommentAssistantEnable;
- (BOOL)isRecommendOptionExpose;
- (BOOL)isCommentEnable;
- (BOOL)isLikeEnable;
- (BOOL)isBulletinEnable;
- (BOOL)isQuickReplyEnable;
- (BOOL)isFreeTalkEnabled;
- (BOOL)isMicEnable;
- (BOOL)isRewardEnable;
- (BOOL)isMicMuted;
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
- (BOOL)isLinkItemEnabled;
- (BOOL)isShowOpPromotionCardEntranceEnable;
- (BOOL)isShowCreatorCenterEnabled;
- (BOOL)shouldHideRedPacketItem;
- (BOOL)shouldHideLinkItem;
- (BOOL)shouldHideFansGroupItem;
- (BOOL)shouldHideRewardWishItem;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned long long)hiddenItemsFlag;
- (void)setHiddenItemsFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

