@interface MMLiveRewardGiftNotificationView : MMUIView <MMFinderLiveGiftResourceMgrExt, PAGRenderStatisticsExt>
{
    BOOL _isUseRfxPagView; // +0x8
    BOOL _isMultiRecipentMode; // +0x9
    MMFinderLiveGiftNotificationItem * _giftNotificationItem; // +0x10
    unsigned long long _slot; // +0x18
    unsigned long long _layoutMode; // +0x20
    id /* block */ _didTapBlock; // +0x28
    id /* block */ _didGitfCountUpdatedCallback; // +0x30
    UIImageView * _giftImageView; // +0x38
    PAGView * _giftAnimationView; // +0x40
    RfxPagView * _giftAnimationRfxView; // +0x48
    unsigned long long _currentGiftCount; // +0x50
    MMFinderLiveNotifyGiftNotificationView * _subNotificationView; // +0x58
    UIView * _gradientBackgroundView; // +0x60
    CAGradientLayer * _gradientLayer; // +0x68
    CAGradientLayer * _gradientLayerForOtherAnchor; // +0x70
    MMUILabel * _nicknameLabel; // +0x78
    MMUILabel * _descriptionLabel; // +0x80
    MMUILabel * _giftCountLabel; // +0x88
    MMUILabel * _giftCountScrollNumPrefixLabel; // +0x90
    MMLiveScrollNumView * _giftCountScrollNumLabel; // +0x98
    unsigned long long _growingGiftCount; // +0xa0
    unsigned long long _growingStep; // +0xa8
    unsigned long long _lastShowGiftCount; // +0xb0
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0xb8
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0xc0
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0xc8
    MMFinderLivePkTaskedBonusGiftNotificationIndicatorView * _taskedBonusIndicatorView; // +0xd0
    NSNumberFormatter * _taskedBonusMultiplierFormatter; // +0xd8
    NSString * _viewId; // +0xe0
}
- (id)initWithFrame:(CGRect)arg1 isMultiRecipentMode:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInLineBreakMode;
- (void)layoutInRegularMode;
- (void)layoutInCompactMode;
- (void)layoutTaskedBounusIndicatorView;
- (void)updateLabelFont;
- (BOOL)updateBackgroundGradientColorForTeamPkIfNeed;
- (void)updateWithNotificationItem:(id)arg1;
- (void)internalUpdateGitfCount:(unsigned long long)arg1;
- (void)updateGitfCountScrollNum:(unsigned long long)arg1;
- (void)updateFromGitfCount:(unsigned long long)arg1 toGitfCount:(unsigned long long)arg2 extraValueItems:(id)arg3;
- (void)showExtraGiftValue:(unsigned long long)arg1;
- (void)startCountLabelDance;
- (void)createGiftAnimationPagView;
- (void)loadAndPlayGiftAnimationWithPAGFile:(id)arg1;
- (void)createGiftAnimationRfxPagView;
- (void)loadAndPlayGiftAnimationWithRfxPagFile:(id)arg1;
- (void)playGiftAnimation;
- (void)stopGiftAnimation;
- (void)countLabelDanceAnimation:(double)arg1;
- (BOOL)needDisplayGlobalRank;
- (BOOL)needDisplayMysterious;
- (id)getMysteriousBadge;
- (BOOL)needDisplayRoleBadge;
- (id)getRoleBadge;
- (BOOL)needEstimateWidth;
- (BOOL)needDisplayFansGroupRank;
- (long long)getGlobalRankSignUIStyle;
- (long long)getFansGroupUIStyle;
- (long long)getGiftNotificationUIStyle;
- (id)giftCountLabelFont;
- (void)setLayoutMode:(unsigned long long)arg1;
- (BOOL)useStandardLayout;
- (id)finderLiveTask;
- (id)currGiftAnimatingView;
- (id)viewId;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onPagPerfTargetViewStateChange:(BOOL)arg1 perfMode:(long long)arg2 statistics:(id)arg3;
- (void)tryStopGiftAnimationForPagPerfState;
- (void)stopGiftAnimationRfxView;
- (void)stopGiftAnimationView;
- (BOOL)checkIsUnablePlayGiftAnimationForPagPerfState;
- (BOOL)checkIsUnablePlayGiftAnimationForNewCustomizePowerLimit;
- (id)giftNotificationItem;
- (void)setGiftNotificationItem:(id)arg1;
- (unsigned long long)slot;
- (void)setSlot:(unsigned long long)arg1;
- (unsigned long long)layoutMode;
- (id /* block */)didTapBlock;
- (void)setDidTapBlock:(id /* block */)arg1;
- (id /* block */)didGitfCountUpdatedCallback;
- (void)setDidGitfCountUpdatedCallback:(id /* block */)arg1;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
- (BOOL)isUseRfxPagView;
- (void)setIsUseRfxPagView:(BOOL)arg1;
- (id)giftAnimationView;
- (void)setGiftAnimationView:(id)arg1;
- (id)giftAnimationRfxView;
- (void)setGiftAnimationRfxView:(id)arg1;
- (unsigned long long)currentGiftCount;
- (void)setCurrentGiftCount:(unsigned long long)arg1;
- (id)subNotificationView;
- (void)setSubNotificationView:(id)arg1;
- (id)gradientBackgroundView;
- (void)setGradientBackgroundView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)gradientLayerForOtherAnchor;
- (void)setGradientLayerForOtherAnchor:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)giftCountLabel;
- (void)setGiftCountLabel:(id)arg1;
- (id)giftCountScrollNumPrefixLabel;
- (void)setGiftCountScrollNumPrefixLabel:(id)arg1;
- (id)giftCountScrollNumLabel;
- (void)setGiftCountScrollNumLabel:(id)arg1;
- (unsigned long long)growingGiftCount;
- (void)setGrowingGiftCount:(unsigned long long)arg1;
- (unsigned long long)growingStep;
- (void)setGrowingStep:(unsigned long long)arg1;
- (unsigned long long)lastShowGiftCount;
- (void)setLastShowGiftCount:(unsigned long long)arg1;
- (BOOL)isMultiRecipentMode;
- (void)setIsMultiRecipentMode:(BOOL)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)roleSignView;
- (void)setRoleSignView:(id)arg1;
- (id)taskedBonusIndicatorView;
- (void)setTaskedBonusIndicatorView:(id)arg1;
- (id)taskedBonusMultiplierFormatter;
- (void)setTaskedBonusMultiplierFormatter:(id)arg1;
- (void)setViewId:(id)arg1;
- (void).cxx_destruct;
@end
