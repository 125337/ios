@interface WCFinderHighEntropyFriendLikeView : UIView <WCFinderFriendLikeToolbarViewDelegate, WCFinderFeedContentVMExt>
{
    id <WCFinderHighEntropyFriendLikeViewDelegate> _delegate; // +0x8
    UIView<WCFinderFriendLikeToolbarViewProtocol><MMFinderFriendLikeShootingAnimationTargetProtocol> * _friendLikeToolbarView; // +0x10
    WCFinderFeedContentVM * _currentContentVM; // +0x18
}
+ (id)highEntropyLikesLayoutConfigWithContentVM:(id)arg1;
+ (BOOL)shouldUseContentVMFriendLikeIcon:(id)arg1;
+ (BOOL)shouldShowSelfInsertedLikeWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
+ (BOOL)hasFriendLikeDisplayWithContentVM:(id)arg1;
+ (BOOL)hasCurrentUserOnlyLikeWithContentVM:(id)arg1;
+ (BOOL)shouldHideCurrentUserOnlyLikeWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
+ (unsigned long long)resolvedDisplayFlagWithContentVM:(id)arg1;
+ (double)viewHeightWithContentVM:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)friendLikeToolbarView;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)configureWithContentVM:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onClickWeChatFriendDetail:(id)arg1;
- (void)notifyFriendLikeToolbarClickWithContentVM:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (long long)supportedInterfaceStyle;
- (void)refreshFriendLikeViewWithContentVM:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataUpdateByUserAction:(id)arg2 likeFlag:(int)arg3;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFriendLikeToolbarView:(id)arg1;
- (id)currentContentVM;
- (void)setCurrentContentVM:(id)arg1;
- (void).cxx_destruct;
@end
