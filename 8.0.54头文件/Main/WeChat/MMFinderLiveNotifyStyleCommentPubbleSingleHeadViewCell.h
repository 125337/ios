@interface MMFinderLiveNotifyStyleCommentPubbleSingleHeadViewCell : MMFinderLiveNotifyStyleCommentPubbleCell <CAAnimationDelegate, MMFinderLiveTrumpetSelectSheetDelegate>
{
    BOOL _isGradientOnlyOnXAxis; // +0x8
    BOOL _canLayout; // +0x9
    unsigned int _lastRank; // +0xc
    unsigned int _lastMsgSubtype; // +0x10
    unsigned long long _badgeSignCnt; // +0x18
    MMUIView * _colorBackView; // +0x20
    CAGradientLayer * _borderGradientLayer; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
    CALayer * _colorLayer; // +0x38
    MMUILabel * _invisiableSignLabel; // +0x40
    MMUIView * _invisiableSignView; // +0x48
    MMUILabel * _signLabel; // +0x50
    MMUIView * _signBackView; // +0x58
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x60
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x68
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x70
    MMFinderLiveNormalTextSignView * _buySignView; // +0x78
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x80
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x88
    MMUILabel * _glorySignLabel; // +0x90
    MMUIImageView * _glorySignView; // +0x98
    UIImageView * _arrowImageView; // +0xa0
    UIView * _shineAnimationView; // +0xa8
    UIView * _shineAnimationContainerView; // +0xb0
    NSMutableArray * _shiningStarImageViews; // +0xb8
    NSArray * _shiningConfigArray; // +0xc0
    CALayer * _borderShineLayer; // +0xc8
}
- (id)initWithCellFrame:(id)arg1;
- (void)updateBackGroundColor;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (id)signText;
- (double)maxCornerRadius;
- (void)layoutInvisiableSignLabel;
- (void)layoutMysteriousSignView;
- (void)layoutSignLabel;
- (void)layoutGlobalRankSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGlorySignView;
- (void)layoutBuySignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutFollowerSignView;
- (id)getGloryBG;
- (void)layoutCommentLabel;
- (void)layoutNickLabel;
- (void)layoutArrowImageView;
- (void)updateArrowImageViewOrigin;
- (void)updateLabelsOrigin;
- (void)updateFirstLineLabelTop:(id)arg1;
- (void)updateCommentLabelOrigin;
- (id)finderLiveTask;
- (void)clearBackgroundLayers;
- (void)setupBackgroundColor:(id)arg1 colorLayerBackgroundColor:(id)arg2 gradientFromColor:(id)arg3 toColor:(id)arg4 textColor:(id)arg5;
- (void)setupBackgroundColor:(id)arg1 colorLayerBackgroundColor:(id)arg2 gradientFromColor:(id)arg3 toColor:(id)arg4 borderGradientFromColor:(id)arg5 borderGradientToColor:(id)arg6 textColor:(id)arg7;
- (void)updateBackgroundLayers;
- (void)createGradientLayer;
- (void)createBorderGradientLayer;
- (double)getBorderGradientLineWidth;
- (CGRect)borderGradientLayerFrame;
- (void)updateBorderGradientLayerMask;
- (BOOL)shouldShowSuperfanBorder;
- (void)createColorLayer;
- (void)createColorBackView;
- (void)onTap;
- (void)willDisplay;
- (void)setupShiningStarAnimationIfNeeded;
- (void)scheduleShiningStartAnimationWithImageView:(id)arg1 config:(id)arg2 startsNow:(BOOL)arg3;
- (void)runCustomEnterAnimation;
- (void)runCustomExitAnimationWithCompletion:(id /* block */)arg1;
- (void)startGlobalRankAnimationIfNeeded;
- (BOOL)shouldRunCustomAnimation;
- (void)doScaleAnimationWithCompletion:(id /* block */)arg1;
- (void)doShineAnimation;
- (void)stopGlobalRankShineAnimation;
- (void)runBorderShineAnimationIfNeeded;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)getSelfAccessibility;
- (unsigned long long)badgeSignCnt;
- (void)setBadgeSignCnt:(unsigned long long)arg1;
- (id)colorBackView;
- (void)setColorBackView:(id)arg1;
- (id)borderGradientLayer;
- (void)setBorderGradientLayer:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)colorLayer;
- (void)setColorLayer:(id)arg1;
- (BOOL)isGradientOnlyOnXAxis;
- (void)setIsGradientOnlyOnXAxis:(BOOL)arg1;
- (id)invisiableSignLabel;
- (void)setInvisiableSignLabel:(id)arg1;
- (id)invisiableSignView;
- (void)setInvisiableSignView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (id)signBackView;
- (void)setSignBackView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)buySignView;
- (void)setBuySignView:(id)arg1;
- (id)frequentWatchSignView;
- (void)setFrequentWatchSignView:(id)arg1;
- (id)followerSignView;
- (void)setFollowerSignView:(id)arg1;
- (id)glorySignLabel;
- (void)setGlorySignLabel:(id)arg1;
- (id)glorySignView;
- (void)setGlorySignView:(id)arg1;
- (unsigned int)lastRank;
- (void)setLastRank:(unsigned int)arg1;
- (unsigned int)lastMsgSubtype;
- (void)setLastMsgSubtype:(unsigned int)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)shineAnimationView;
- (void)setShineAnimationView:(id)arg1;
- (id)shineAnimationContainerView;
- (void)setShineAnimationContainerView:(id)arg1;
- (BOOL)canLayout;
- (void)setCanLayout:(BOOL)arg1;
- (id)shiningStarImageViews;
- (void)setShiningStarImageViews:(id)arg1;
- (id)shiningConfigArray;
- (void)setShiningConfigArray:(id)arg1;
- (id)borderShineLayer;
- (void)setBorderShineLayer:(id)arg1;
- (void).cxx_destruct;
@end

