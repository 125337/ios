@interface WCAdSocialLikeView : MMUIView <IWCAdSocialLikeLogicExt, CAAnimationDelegate, PAGViewListener, WCAdSocialLikeCheerPlayerViewDelegate>
{
    BOOL _bTimelineScene; // +0x8
    BOOL _isLikeIconAnimating; // +0x9
    BOOL _isLikeButtonTransformAnimating; // +0xa
    WCDataItem * _dataItem; // +0x10
    id <WCAdSocialLikeViewDelegate> _delegate; // +0x18
    WCAdSocialLikeCheerPlayerView * _adSocialLikeCheerPlayerView; // +0x20
    WCAdSocialLikeInfo * _adSocialLikeInfo; // +0x28
    double _inlineRemainWidth; // +0x30
    double _blockRemainWidth; // +0x38
    MMUIView * _likeContainer; // +0x40
    MMUIButton * _likeButton; // +0x48
    MMUIButton * _commentButton; // +0x50
    UIView * _dividerView; // +0x58
    WCAdContinuousLikeButtonView * _continuousLikeButtonView; // +0x60
    long long _viewDisplayType; // +0x68
}
+ (long long)fetchDisplayType:(id)arg1 inlineRemainWidth:(double)arg2;
+ (double)calcSocialLikeViewHeight:(id)arg1;
+ (id)fetchLikeTitle:(id)arg1;
+ (id)fetchCancelLikeTitle:(id)arg1;
+ (id)fetchCurrentLikeTitle:(id)arg1 isSelfLiked:(BOOL)arg2;
+ (id)fetchCommentTitle:(id)arg1;
+ (double)calcLikeTitleMaxWidth:(id)arg1;
+ (double)calcCurrentLikeTitleWidth:(id)arg1 isSelfLiked:(BOOL)arg2;
+ (double)calcCommentTitleWidth:(id)arg1;
+ (double)calcMinWidthInline:(id)arg1;
+ (double)uiButtonPaddingVertical:(id)arg1;
+ (double)uiButtonLikeIconMaxSize:(id)arg1;
+ (double)uiButtonCommentIconSize:(id)arg1;
+ (double)uiDividerWidth:(id)arg1;
- (id)initWithSocialLikeInfo:(id)arg1 dataItem:(id)arg2 bTimelineScene:(BOOL)arg3 inlineRemainWidth:(double)arg4 blockRemainWidth:(double)arg5;
- (void)dealloc;
- (long long)displayType;
- (void)initView;
- (void)initLikeContainer;
- (void)initViewInline;
- (id)createButtonInline:(id)arg1 paddingScale:(double)arg2 iconView:(id)arg3 iconSize:(double)arg4;
- (id)createDividerView;
- (void)initViewBlock;
- (id)createButtonBlock:(id)arg1 buttonWidth:(double)arg2 contentScale:(double)arg3 iconView:(id)arg4 iconSize:(double)arg5;
- (id)createBasicButtonWithTitle:(id)arg1;
- (void)updateLikeIconImage:(id)arg1;
- (id)fetchLikeIconView;
- (void)initContinuousLikeButton;
- (id)createContinuousLikeButtonView:(BOOL)arg1;
- (void)onLikeButtonClick;
- (void)onCommentButtonClick;
- (void)displayLikeIconAnimation;
- (void)playCheerPAG;
- (void)playAttractingAnimation;
- (void)tryToRestoreAttractingIconAnimation;
- (void)playAttractingIconAnimation:(BOOL)arg1;
- (void)playLikeButtonTransformAnimation;
- (id)createButtonLikeIcon;
- (void)onSocialLikeAttractingAnimationEnd;
- (void)onSocialLikeAttractingIconAnimationEnd;
- (void)onSocialLikeAttractingAnimationCancel;
- (void)onContinuousLikeStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeState:(int)arg3;
- (void)onFireworkCheerRealLike:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)onFireworkCheerCommentAnimationStarted:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)onMainMediaPlayStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isPlaying:(BOOL)arg3;
- (id)socialLikeLogic;
- (id)fetchContinuousLikeReportInfo;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onAnimationUpdate:(id)arg1;
- (BOOL)isFireworkCheerStyle;
- (void)updateFireworkCheerLikeButton;
- (void)tryToPlayFireworkCheerIconPag;
- (void)tryToStopFireworkCheerIconPag;
- (void)realStopFireworkCheerIconPag;
- (void)startFireworkCheerLikeButtonAnimation;
- (id)createFireworkCheerIconPag;
- (void)playFireworkCheerAttracting;
- (void)onFireworkCheerLikeButtonClick;
- (void)doFireworkCheerRealLike;
- (id)fetchFireworkCheerReportInfo;
- (BOOL)isPatStyle;
- (void)onPatLikeButtonSingleClick;
- (void)onPatLikeButtonDoubleClick;
- (void)patToggleLike;
- (void)patPlayFullScreenAnimation;
- (id)createPatButtonLikeIcon;
- (id)createPatButtonLikeIconPag;
- (id)fetchCurrentPatLikeIconPagView;
- (void)tryToPlayPatIconPag;
- (void)tryToStopPatIconPag;
- (void)realStopPatIconPag;
- (void)registerPatButtonGesture;
- (void)reportPatLikeButtonClick:(int)arg1;
- (double)uiButtonLikeIconSize;
- (id)uiButtonDefaultBgImage;
- (double)uiButtonRadius;
- (id)uiButtonContainerBgColor;
- (id)uiDividerColor;
- (SEL)uiButtonLikeClickSelector;
- (id)uiButtonCommentIconImage;
- (void)registerButtonGesture;
- (void)traitCollectionDidChange:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adSocialLikeCheerPlayerView;
- (void)setAdSocialLikeCheerPlayerView:(id)arg1;
- (id)adSocialLikeInfo;
- (void)setAdSocialLikeInfo:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (double)inlineRemainWidth;
- (void)setInlineRemainWidth:(double)arg1;
- (double)blockRemainWidth;
- (void)setBlockRemainWidth:(double)arg1;
- (id)likeContainer;
- (void)setLikeContainer:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)commentButton;
- (void)setCommentButton:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)continuousLikeButtonView;
- (void)setContinuousLikeButtonView:(id)arg1;
- (BOOL)isLikeIconAnimating;
- (void)setIsLikeIconAnimating:(BOOL)arg1;
- (BOOL)isLikeButtonTransformAnimating;
- (void)setIsLikeButtonTransformAnimating:(BOOL)arg1;
- (long long)viewDisplayType;
- (void)setViewDisplayType:(long long)arg1;
- (void).cxx_destruct;
@end
