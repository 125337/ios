@interface WCFinderHeadInfoView : UIView <WCFinderHeadImageViewDelegate, WCFinderContactExt, WCFinderJumpInfoViewProtocol, WCFinderHeadInfoViewProtocol>
{
    BOOL _enableShowFollowedLabel; // +0x8
    BOOL _thisContentVMShouldShowFollowBtn; // +0x9
    BOOL _hasJustBeenReset; // +0xa
    BOOL _isFollowBtnDisplayingForBrandContact; // +0xb
    id <WCFinderHeadInfoViewDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _avatarJumpInfo; // +0x18
    WCFinderHeadImageView * _avatarView; // +0x20
    UIView * _avatarViewCircle; // +0x28
    UILabel * _avatarTextTipsLabel; // +0x30
    RichTextView * _nameLabel; // +0x38
    WCFinderAuthInfoIconView * _authView; // +0x40
    WCFinderFollowedLabel * _followedLabel; // +0x48
    UILabel * _descriptionLabel; // +0x50
    MMUIButton * _followBtn; // +0x58
    MMWebImageView * _brandLogoView; // +0x60
    UIView * _elementContentView; // +0x68
    UIView * _gestureView; // +0x70
    WCFinderContact * _contact; // +0x78
    NSString * _brandLogoUrl; // +0x80
    NSMutableArray * _elementsArray; // +0x88
    UIView * _currentElement; // +0x90
    UIView * _preViousElement; // +0x98
    UIView * _lastElement; // +0xa0
    UIView * _benchMarkElement; // +0xa8
    NSMutableDictionary * _ele_layoutMap; // +0xb0
    NSMutableArray * _customeAccessibleElements; // +0xb8
}
+ (BOOL)useRefactorView;
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)customeAccessibleElements;
- (void)setUpFullFeedContentSummaryHeaderViewLayout;
- (void)setShowFollowBtn:(BOOL)arg1;
- (void)setShouldShowFollowTips:(BOOL)arg1;
- (void)setShowLivingView:(BOOL)arg1;
- (void)setAvatarJumpInfo:(id)arg1;
- (void)updateConstraintsWithContact:(id)arg1;
- (void)layoutSubviews;
- (void)reloadHeaderWithContact;
- (void)updateAvatarView;
- (void)updateNameLabel;
- (void)updateAuthIcon;
- (void)updateDescriptionLabel:(id)arg1;
- (void)updateFollowedLabel;
- (void)updateFollowBtn:(BOOL)arg1;
- (void)updateAccessibility;
- (BOOL)canFollowBtnShow;
- (void)resetReuseState;
- (void)adjustNewAddedElementConstrains;
- (void)adjustConstrainsWhenAddingFollowBtn;
- (void)removeElementWithView:(id)arg1;
- (void)remakeConstrainsInElementArrayWithIndex:(long long)arg1 removeIndexElement:(BOOL)arg2;
- (void)moveUpbenchMarkElementWithUpOffset:(double)arg1;
- (void)moveDownbenchMarkElement;
- (void)putFollowBtnAfterView:(id)arg1;
- (void)putFollowBtnOnTheRightSide;
- (void)putAuthIconOnSecondLine;
- (void)putNewAddedElementAtTheBeginingOfSecondLine;
- (void)putNewAddedElementToTheRightOfTheNameInSecondLine;
- (void)beginFollowBtnAnimation;
- (void)removeFollowBtn;
- (void)setFollowBtnLayoutWithLeftMargin:(double)arg1;
- (void)showFollowBtn;
- (void)setBrandLogoViewLayoutWithSize:(CGSize)arg1 leftMargin:(double)arg2;
- (void)updateBrandLogoImageUrl:(id)arg1;
- (void)removeBrandLogo;
- (void)putBrandLogoOnSecondLine;
- (void)addAvatarViewWithSize:(CGSize)arg1 leftMargin:(double)arg2;
- (void)addNameLabelWithLeftMargin:(double)arg1 UpOffset:(double)arg2 DownOffset:(double)arg3 FontSize:(long long)arg4 SmallFontSize:(long long)arg5;
- (void)setAuthIconLayoutWithSize:(CGSize)arg1 LeftMargin:(double)arg2;
- (void)setFollowedLabelLayoutWithLeftMargin:(double)arg1;
- (void)showDescriptionLabel;
- (void)removeDescriptionLabel;
- (void)addGestureView;
- (void)removeAuthIcon;
- (void)removeFollowedLabel;
- (BOOL)hasAuthView;
- (BOOL)hasFollowedLabel;
- (BOOL)hasDescriptionLabel;
- (BOOL)hasFollowBtn;
- (BOOL)hasBrandLogo;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)jumpInfo;
- (int)showPosition;
- (id)updateContactOneTimeFlag:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)clickAvatorAndName:(id)arg1;
- (void)onClickFollowBtn:(id)arg1;
- (BOOL)isNameOneLine;
- (double)lineUpOffset;
- (double)lineDownOffset;
- (BOOL)isElementInFirstLine:(id)arg1;
- (id)lastElementFirstLine;
- (id)layoutOfElement:(id)arg1;
- (void)showElement:(id)arg1;
- (void)resortElements;
- (void)reduceNameLabelFontSize;
- (void)restoreNameLabelFontSize;
- (double)getNameLabelLastLineRight;
- (double)getNameLabelLastLineCenterY;
- (void)nameLabelSizeToFit;
- (BOOL)isEqualToMyContact:(id)arg1;
- (void)moveDownBenchMarkViewIfCan;
- (id)lastElement;
- (id)benchMarkElement;
- (id)avatarView;
- (id)genAvatarCircleWithCircleSize:(CGSize)arg1;
- (id)avatarTextTipsLabel;
- (id)nameLabel;
- (id)authView;
- (id)followedLabel;
- (id)descriptionLabel;
- (id)followBtn;
- (id)brandLogoView;
- (id)elementContentView;
- (id)genGradientMaskView;
- (id)gestureView;
- (BOOL)isFollowBtnDisplayingWhenBrandContact;
- (void)setIsFollowBtnDisplayingWhenBrandContact:(BOOL)arg1;
- (id)userAvatarSnapshot;
- (CGRect)followBtnFrame;
- (CGRect)avatarFrame;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)avatarJumpInfo;
- (void)setAvatarView:(id)arg1;
- (id)avatarViewCircle;
- (void)setAvatarViewCircle:(id)arg1;
- (void)setAvatarTextTipsLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setAuthView:(id)arg1;
- (void)setFollowedLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setFollowBtn:(id)arg1;
- (void)setBrandLogoView:(id)arg1;
- (void)setElementContentView:(id)arg1;
- (void)setGestureView:(id)arg1;
- (BOOL)enableShowFollowedLabel;
- (void)setEnableShowFollowedLabel:(BOOL)arg1;
- (BOOL)thisContentVMShouldShowFollowBtn;
- (void)setThisContentVMShouldShowFollowBtn:(BOOL)arg1;
- (BOOL)hasJustBeenReset;
- (void)setHasJustBeenReset:(BOOL)arg1;
- (BOOL)isFollowBtnDisplayingForBrandContact;
- (void)setIsFollowBtnDisplayingForBrandContact:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)brandLogoUrl;
- (void)setBrandLogoUrl:(id)arg1;
- (id)elementsArray;
- (void)setElementsArray:(id)arg1;
- (id)currentElement;
- (void)setCurrentElement:(id)arg1;
- (id)preViousElement;
- (void)setPreViousElement:(id)arg1;
- (void)setLastElement:(id)arg1;
- (void)setBenchMarkElement:(id)arg1;
- (id)ele_layoutMap;
- (void)setEle_layoutMap:(id)arg1;
- (void)setCustomeAccessibleElements:(id)arg1;
- (void).cxx_destruct;
@end
