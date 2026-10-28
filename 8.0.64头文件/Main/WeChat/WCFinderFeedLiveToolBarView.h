@interface WCFinderFeedLiveToolBarView : UIView
{
    BOOL _allowForward; // +0x8
    BOOL _hideLikeAction; // +0x9
    BOOL _disableLikeAction; // +0xa
    id <WCFinderFeedToolbarActionDelegate> _delegate; // +0x10
    WCFinderFeedLiveToolBarItemButton * _shareBtn; // +0x18
    WCFinderFeedLiveToolBarItemButton * _likeBtn; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
}
+ (double)defaultWidthWithContentVM:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateContentVM:(id)arg1;
- (id)shareBtn;
- (id)likeBtn;
- (void)setupSubView;
- (void)updateAllowForward:(BOOL)arg1;
- (void)updateShareContainer:(BOOL)arg1;
- (void)updateContentVM:(id)arg1 hideLikeAction:(BOOL)arg2 disableLikeAction:(BOOL)arg3;
- (WCFinderDynamicIcon)likeDynamicIconLikeFlag:(int)arg1;
- (void)layoutUI;
- (void)didClickShareBtn:(id)arg1;
- (void)didClickLikeBtn:(id)arg1;
- (void)triggerLikeAnimation;
- (void)selectButtonWithAnimation:(id)arg1 selectedImage:(id)arg2 completion:(id /* block */)arg3;
- (void)layoutSubviews;
- (id)whiteColorWithAlphaComponent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setLikeBtn:(id)arg1;
- (BOOL)allowForward;
- (void)setAllowForward:(BOOL)arg1;
- (BOOL)hideLikeAction;
- (void)setHideLikeAction:(BOOL)arg1;
- (BOOL)disableLikeAction;
- (void)setDisableLikeAction:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
