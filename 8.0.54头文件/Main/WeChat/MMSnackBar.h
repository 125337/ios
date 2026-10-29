@interface MMSnackBar : NSObject
{
    MMSnackBarConfig * _config; // +0x8
    id /* block */ _actionHandlerBlock; // +0x10
    id /* block */ _willAppearHandlerBlock; // +0x18
    UIViewController * _currentViewController; // +0x20
    NSOperation * _afterHideOperation; // +0x28
}
+ (id)snackBar;
- (id)init;
- (id /* block */)iconName;
- (id /* block */)titleStr;
- (id /* block */)attrTitle;
- (id /* block */)loading;
- (id /* block */)block;
- (id /* block */)actionIconName;
- (id /* block */)actionTitle;
- (id /* block */)actionAttrTitle;
- (id /* block */)voiceOverHint;
- (id /* block */)voiceOverLabel;
- (id /* block */)bottomOffset;
- (id /* block */)currentVC;
- (id /* block */)actionHandler;
- (id /* block */)willAppearHandler;
- (id /* block */)showSnackBar;
- (id /* block */)updateSnackBar;
- (id /* block */)hideSnackBar;
- (void)privateShowSnackBar;
- (void)privateUpdateSnackBar;
- (void)privateHideSnackBar:(id /* block */)arg1;
- (void)setInteractionEnabled;
- (void)setInteractionBlocked;
- (id)getCurrentTopViewController;
- (id)displayingSnackBarVC;
- (id /* block */)cleanSnackBar;
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)actionHandlerBlock;
- (void)setActionHandlerBlock:(id /* block */)arg1;
- (id /* block */)willAppearHandlerBlock;
- (void)setWillAppearHandlerBlock:(id /* block */)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)afterHideOperation;
- (void)setAfterHideOperation:(id)arg1;
- (void).cxx_destruct;
@end

