@interface WCFinderHeadInfoEasyView : UIView <WCFinderHeadImageViewDelegate, WCFinderContactExt, WCFinderHeadInfoViewProtocol, WCFinderJumpInfoViewProtocol>
{
    BOOL _showCarouselFlag; // +0x8
    BOOL _enableShowFollowedLabel; // +0x9
    BOOL _thisContentVMShouldShowFollowBtn; // +0xa
    BOOL _hasJustBeenReset; // +0xb
    BOOL _isFollowBtnDisplayingForBrandContact; // +0xc
    BOOL _hideFollowBtnByCarousel; // +0xd
    BOOL _hideAuthBtnByCarousel; // +0xe
    id <WCFinderHeadInfoViewDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _avatarJumpInfo; // +0x18
    WCFinderHeadImageView * _avatarView; // +0x20
    UIView * _avatarViewCircle; // +0x28
    UILabel * _avatarTextTipsLabel; // +0x30
    WCFinderHeadContactInfoView * _nameInfoView; // +0x38
    WCFinderAuthInfoIconView * _authView; // +0x40
    UILabel * _followedLabel; // +0x48
    UILabel * _descriptionLabel; // +0x50
    MMUIButton * _followBtn; // +0x58
    MMWebImageView * _brandLogoView; // +0x60
    UIView * _gestureView; // +0x68
    NSString * _descTipsStr; // +0x70
    WCFinderContact * _contact; // +0x78
    id <WCFinderContactDisplayInfoProtocol> _displayInfo; // +0x80
    NSString * _brandLogoUrl; // +0x88
    NSMutableArray * _elementsArray; // +0x90
    NSMutableArray * _customeAccessibleElements; // +0x98
}
+ (double)defaultHeight;
- (void)updateConstraintsWithContact:(id)arg1;
- (void)updateDescriptionLabel:(id)arg1;
- (void)setShouldShowFollowTips:(BOOL)arg1;
- (void)setAvatarJumpInfo:(id)arg1;
- (void)setAvatarJumpInfo:(id)arg1 withAnimated:(BOOL)arg2;
- (id)getAvatarImage;
- (void)setShowFollowBtn:(BOOL)arg1;
- (void)updateFollowBtn:(BOOL)arg1;
- (void)setIsFollowBtnDisplayingWhenBrandContact:(BOOL)arg1;
- (BOOL)canFollowBtnShow;
- (void)resetReuseState;
- (id)userAvatarSnapshot;
- (CGRect)followBtnFrame;
- (CGRect)avatarFrame;
- (void)reloadHeaderWithContact;
- (BOOL)canShowAuthInfo;
- (void)updateAccessibility;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpFullFeedContentSummaryHeaderViewLayout;
- (id)avatarView;
- (id)genAvatarCircleWithCircleSize:(CGSize)arg1;
- (id)avatarTextTipsLabel;
- (id)authView;
- (id)followedLabel;
- (id)descriptionLabel;
- (id)followBtn;
- (id)brandLogoView;
- (id)gestureView;
- (void)beginFollowBtnAnimation;
- (void)showFollowBtnWithAnimated:(BOOL)arg1;
- (void)updateFollowedLabel;
- (BOOL)showCarouselString:(id)arg1 carouseleBlock:(id /* block */)arg2;
- (void)hideCarouselString;
- (void)updateBrandLogoImageUrl:(id)arg1;
- (void)addAvatarViewWithSize:(CGSize)arg1 leftMargin:(double)arg2;
- (void)removeDescriptionLabel;
- (void)removeFollowBtn;
- (void)removeAvatarJumpInfo;
- (void)addGestureView;
- (BOOL)hasFollowedLabel;
- (BOOL)hasDescriptionLabel;
- (BOOL)hasFollowBtn;
- (BOOL)hasBrandLogo;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)jumpInfo;
- (int)showPosition;
- (id)updateContactSceneRelatedInfo:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)clickAvatorAndName:(id)arg1;
- (void)onClickFollowBtn:(id)arg1;
- (BOOL)isEqualToMyContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)avatarJumpInfo;
- (void)setAvatarView:(id)arg1;
- (BOOL)showCarouselFlag;
- (void)setShowCarouselFlag:(BOOL)arg1;
- (id)avatarViewCircle;
- (void)setAvatarViewCircle:(id)arg1;
- (void)setAvatarTextTipsLabel:(id)arg1;
- (id)nameInfoView;
- (void)setNameInfoView:(id)arg1;
- (void)setAuthView:(id)arg1;
- (void)setFollowedLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setFollowBtn:(id)arg1;
- (void)setBrandLogoView:(id)arg1;
- (void)setGestureView:(id)arg1;
- (id)descTipsStr;
- (void)setDescTipsStr:(id)arg1;
- (BOOL)enableShowFollowedLabel;
- (void)setEnableShowFollowedLabel:(BOOL)arg1;
- (BOOL)thisContentVMShouldShowFollowBtn;
- (void)setThisContentVMShouldShowFollowBtn:(BOOL)arg1;
- (BOOL)hasJustBeenReset;
- (void)setHasJustBeenReset:(BOOL)arg1;
- (BOOL)isFollowBtnDisplayingForBrandContact;
- (void)setIsFollowBtnDisplayingForBrandContact:(BOOL)arg1;
- (BOOL)hideFollowBtnByCarousel;
- (void)setHideFollowBtnByCarousel:(BOOL)arg1;
- (BOOL)hideAuthBtnByCarousel;
- (void)setHideAuthBtnByCarousel:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)displayInfo;
- (void)setDisplayInfo:(id)arg1;
- (id)brandLogoUrl;
- (void)setBrandLogoUrl:(id)arg1;
- (id)elementsArray;
- (void)setElementsArray:(id)arg1;
- (id)customeAccessibleElements;
- (void)setCustomeAccessibleElements:(id)arg1;
- (void).cxx_destruct;
@end
