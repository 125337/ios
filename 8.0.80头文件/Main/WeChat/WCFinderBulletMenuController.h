@interface WCFinderBulletMenuController : NSObject <MMMenuControllerExt>
{
    BOOL _isLandscape; // +0x8
    BOOL _menuActionSelected; // +0x9
    int _scene; // +0xc
    id /* block */ _onResumePlayback; // +0x10
    id /* block */ _onReply; // +0x18
    id /* block */ _onMore; // +0x20
    _TtC6WeChat23FinderBulletCoordinator * _bulletCoordinator; // +0x28
    UIView * _hostView; // +0x30
}
- (id)initWithCoordinator:(id)arg1 hostView:(id)arg2;
- (void)dealloc;
- (id)contentVM;
- (void)showMenuAtRect:(CGRect)arg1 isLocal:(BOOL)arg2 isLandscape:(BOOL)arg3 scene:(int)arg4;
- (void)showBulletMenuItems:(id)arg1 targetRect:(CGRect)arg2;
- (void)showLocalBulletDeleteMenuAtTargetRect:(CGRect)arg1;
- (void)_onDeleteLocalBulletComment:(id)arg1;
- (void)setupMenuController:(id)arg1 menuItems:(id)arg2 targetRect:(CGRect)arg3;
- (void)onMoreBulletComment:(id)arg1;
- (void)_onLikeBulletComment;
- (void)_onReplyBulletComment:(id)arg1;
- (void)_onDislikeBulletComment:(id)arg1;
- (void)_reportBulletPopUpMenuTapEventWithCommentInfo:(id)arg1 action:(unsigned long long)arg2;
- (void)onMenuItemSelected:(id)arg1 index:(long long)arg2;
- (void)onMenuControllerWillHide;
- (void)clearFocus;
- (void)hideMenuIfNeeded;
- (id /* block */)onResumePlayback;
- (void)setOnResumePlayback:(id /* block */)arg1;
- (id /* block */)onReply;
- (void)setOnReply:(id /* block */)arg1;
- (id /* block */)onMore;
- (void)setOnMore:(id /* block */)arg1;
- (id)bulletCoordinator;
- (void)setBulletCoordinator:(id)arg1;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)menuActionSelected;
- (void)setMenuActionSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
