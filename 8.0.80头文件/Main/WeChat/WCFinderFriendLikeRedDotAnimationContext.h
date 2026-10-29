@interface WCFinderFriendLikeRedDotAnimationContext : NSObject
{
    BOOL _animationStarted; // +0x8
    BOOL _hasDeferredRefresh; // +0x9
    BOOL _deferredRefreshAllParts; // +0xa
    BOOL _deferredReloadIfMiss; // +0xb
    NSString * _feedTid; // +0x10
    UIView * _avatarSnapshotView; // +0x18
    NSArray * _avatarViews; // +0x20
    NSArray * _avatarAlphas; // +0x28
    NSArray * _avatarTransforms; // +0x30
    NSArray * _textViews; // +0x38
    NSArray * _textAlphas; // +0x40
    NSArray * _textTransforms; // +0x48
    NSMutableArray * _animators; // +0x50
    unsigned long long _deferredChangedParts; // +0x58
    WCFinderFeedContentVM * _deferredContentVM; // +0x60
}
- (id)init;
- (id)feedTid;
- (void)setFeedTid:(id)arg1;
- (id)avatarSnapshotView;
- (void)setAvatarSnapshotView:(id)arg1;
- (id)avatarViews;
- (void)setAvatarViews:(id)arg1;
- (id)avatarAlphas;
- (void)setAvatarAlphas:(id)arg1;
- (id)avatarTransforms;
- (void)setAvatarTransforms:(id)arg1;
- (id)textViews;
- (void)setTextViews:(id)arg1;
- (id)textAlphas;
- (void)setTextAlphas:(id)arg1;
- (id)textTransforms;
- (void)setTextTransforms:(id)arg1;
- (id)animators;
- (void)setAnimators:(id)arg1;
- (BOOL)animationStarted;
- (void)setAnimationStarted:(BOOL)arg1;
- (BOOL)hasDeferredRefresh;
- (void)setHasDeferredRefresh:(BOOL)arg1;
- (BOOL)deferredRefreshAllParts;
- (void)setDeferredRefreshAllParts:(BOOL)arg1;
- (unsigned long long)deferredChangedParts;
- (void)setDeferredChangedParts:(unsigned long long)arg1;
- (BOOL)deferredReloadIfMiss;
- (void)setDeferredReloadIfMiss:(BOOL)arg1;
- (id)deferredContentVM;
- (void)setDeferredContentVM:(id)arg1;
- (void).cxx_destruct;
@end
