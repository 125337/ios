@interface WCFinderFullCollectionToolbarView : UIView <WCFinderLongPressIntervalGestureRecognizerDelegate>
{
    BOOL _hideFav; // +0x8
    BOOL _allowFav; // +0x9
    BOOL _isFav; // +0xa
    BOOL _isDisableActionExceptLikes; // +0xb
    BOOL _isCommentClose; // +0xc
    BOOL _isPrivateAccount; // +0xd
    BOOL _allowForward; // +0xe
    BOOL _hideLikeAction; // +0xf
    BOOL _disableLikeAction; // +0x10
    BOOL _disableCommentAction; // +0x11
    unsigned char _thumbHeartEduShowing; // +0x12
    int _likeFlag; // +0x14
    int _feedObjectType; // +0x18
    id <WCFinderFeedToolbarActionDelegate> _delegate; // +0x20
    WCFinderFullCollectionToolbarItemButton * _collectionBtn; // +0x28
    WCFinderFullCollectionToolbarItemButton * _shareBtn; // +0x30
    WCFinderFullCollectionToolbarItemButton * _likeBtn; // +0x38
    WCFinderFullCollectionToolbarItemButton * _commentBtn; // +0x40
    UILabel * _collectionTipsLabel; // +0x48
    unsigned long long _collectionCount; // +0x50
    unsigned long long _likeNums; // +0x58
    unsigned long long _commentNums; // +0x60
    UIView * _likeDoubleIdentityShadowView; // +0x68
    MMUILabel * _likeDoubleIdentityLabel; // +0x70
    UIView * _triangleBViewShadowView; // +0x78
    UIImageView * _triangleBView; // +0x80
    unsigned long long _forwardCount; // +0x88
    unsigned long long _wxStatusRefCount; // +0x90
    UIView * _allDisableGesView; // +0x98
    PAGView * _likeExplosionView; // +0xa0
    WCFinderFeedContentVM * _contentVM; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prefetchDynamicIcons;
- (id)collectionBtn;
- (id)likeBtn;
- (id)commentBtn;
- (id)shareBtn;
- (void)setupSubView;
- (void)updateContentVM:(id)arg1 commentClose:(BOOL)arg2 isDisableActionExceptLikes:(BOOL)arg3 likeEducateTips:(id)arg4 allowForward:(BOOL)arg5 hideFav:(BOOL)arg6 allowFav:(BOOL)arg7 hideLikeAction:(BOOL)arg8 disableLikeAction:(BOOL)arg9 disableCommentAction:(BOOL)arg10;
- (void)showDynamicEduAnimation;
- (void)showAdditionalInfo:(id)arg1 animationDuration:(double)arg2 stayDuration:(double)arg3 complection:(id /* block */)arg4;
- (BOOL)tryShowThumbHeartEduAnimation;
- (BOOL)tryShowThumbCarouselEdu;
- (BOOL)canShowThumbCarouselEdu;
- (void)updateAllDisableGesView;
- (void)updateCommentContainer:(BOOL)arg1;
- (void)updateLikeEducateTipsContainer:(id)arg1;
- (void)needsShowLikeTips:(BOOL)arg1;
- (BOOL)isShowingLikeEducateTips;
- (void)updateCollectionContainer:(BOOL)arg1 allowFav:(BOOL)arg2;
- (void)updateShareContainer:(BOOL)arg1;
- (void)updateCommentContaier;
- (void)updateContentVM:(id)arg1 hideLikeAction:(BOOL)arg2 disableLikeAction:(BOOL)arg3;
- (WCFinderDynamicIcon)likeDynamicIconLikeFlag:(int)arg1;
- (void)updateCenterAlignment;
- (void)initlikeDoubleIdentityLabel;
- (void)updateLikeEducateTipsLayout;
- (void)hiddenlikeDoubleIdentityLabel:(BOOL)arg1;
- (void)didClickLikeBtn:(id)arg1;
- (void)triggerLikeAnimation;
- (void)didClickShareBtn:(id)arg1;
- (void)didClickCommentBtn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)didClickCollectionBtn:(id)arg1;
- (void)triggerCollectionAnimation;
- (id)collectionOnImageKey;
- (id)collectionOffImageKey;
- (void)selectButtonWithAnimation:(id)arg1 selectedImage:(id)arg2 completion:(id /* block */)arg3;
- (id)whiteColorWithAlphaComponent;
- (void)tryBindDynaimcIconToItemButton:(id)arg1 color:(id)arg2 size:(CGSize)arg3 defaultIconName:(id)arg4 defaultIconColor:(id)arg5 iconKey:(id)arg6 updateBlock:(id /* block */)arg7;
- (id)createOneLikeExplosionView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionBtn:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setLikeBtn:(id)arg1;
- (void)setCommentBtn:(id)arg1;
- (id)collectionTipsLabel;
- (void)setCollectionTipsLabel:(id)arg1;
- (unsigned long long)collectionCount;
- (void)setCollectionCount:(unsigned long long)arg1;
- (BOOL)hideFav;
- (void)setHideFav:(BOOL)arg1;
- (BOOL)allowFav;
- (void)setAllowFav:(BOOL)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (int)likeFlag;
- (void)setLikeFlag:(int)arg1;
- (unsigned long long)likeNums;
- (void)setLikeNums:(unsigned long long)arg1;
- (BOOL)isDisableActionExceptLikes;
- (void)setIsDisableActionExceptLikes:(BOOL)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (int)feedObjectType;
- (void)setFeedObjectType:(int)arg1;
- (unsigned long long)commentNums;
- (void)setCommentNums:(unsigned long long)arg1;
- (id)likeDoubleIdentityShadowView;
- (void)setLikeDoubleIdentityShadowView:(id)arg1;
- (id)likeDoubleIdentityLabel;
- (void)setLikeDoubleIdentityLabel:(id)arg1;
- (id)triangleBViewShadowView;
- (void)setTriangleBViewShadowView:(id)arg1;
- (id)triangleBView;
- (void)setTriangleBView:(id)arg1;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:(BOOL)arg1;
- (BOOL)allowForward;
- (void)setAllowForward:(BOOL)arg1;
- (unsigned long long)forwardCount;
- (void)setForwardCount:(unsigned long long)arg1;
- (unsigned long long)wxStatusRefCount;
- (void)setWxStatusRefCount:(unsigned long long)arg1;
- (BOOL)hideLikeAction;
- (void)setHideLikeAction:(BOOL)arg1;
- (BOOL)disableLikeAction;
- (void)setDisableLikeAction:(BOOL)arg1;
- (BOOL)disableCommentAction;
- (void)setDisableCommentAction:(BOOL)arg1;
- (id)allDisableGesView;
- (void)setAllDisableGesView:(id)arg1;
- (unsigned char)thumbHeartEduShowing;
- (void)setThumbHeartEduShowing:(unsigned char)arg1;
- (id)likeExplosionView;
- (void)setLikeExplosionView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

