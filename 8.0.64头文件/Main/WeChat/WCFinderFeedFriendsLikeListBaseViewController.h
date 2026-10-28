@interface WCFinderFeedFriendsLikeListBaseViewController : MMUIHalfScreenViewController
{
    BOOL _showBackgroundMask; // +0x70
    UINavigationController * _navVC; // +0x78
    id <WCFinderFeedFriendsLikeListViewControllerDelegate> _friendsLikeListDelegate; // +0x80
    id /* block */ _beforePushVCBlock; // +0x88
    id /* block */ _afterPopVCBlock; // +0x90
}
- (void)addHighlightUsernames:(id)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)friendsLikeListDelegate;
- (void)setFriendsLikeListDelegate:(id)arg1;
- (id /* block */)beforePushVCBlock;
- (void)setBeforePushVCBlock:(id /* block */)arg1;
- (id /* block */)afterPopVCBlock;
- (void)setAfterPopVCBlock:(id /* block */)arg1;
- (BOOL)showBackgroundMask;
- (void)setShowBackgroundMask:(BOOL)arg1;
- (void).cxx_destruct;
@end
