@interface WeToast : MMWindowViewController
{
    BOOL _needEndEditing; // +0x74
    BOOL _blockUserInteraction; // +0x75
    BOOL _loadingStyle; // +0x76
    BOOL _customTimeLoading; // +0x77
    BOOL _forbidAccessibilityAnnouncement; // +0x78
    BOOL _isShowing; // +0x79
    double _showDuration; // +0x80
    unsigned long long _supportedOrientationsInIphone; // +0x88
    MMToastView * _toastView; // +0x90
    MMToastParameter * _parameter; // +0x98
    id /* block */ _completionBlock; // +0xa0
    id /* block */ _transitionToNewSizeBlock; // +0xa8
    UIEdgeInsets _contentInsets; // +0xb0
}
+ (id)toast;
- (id)init;
- (void)hideWithAnimated:(int)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setBlockUserInteraction:(BOOL)arg1;
- (id /* block */)duration;
- (id /* block */)endEditing;
- (id /* block */)insets;
- (id /* block */)block;
- (id /* block */)doneText;
- (id /* block */)errorText;
- (id /* block */)text;
- (id /* block */)svgIconName;
- (id /* block */)icon;
- (id /* block */)loading;
- (id /* block */)attributedString;
- (id /* block */)customView;
- (id /* block */)completion;
- (id /* block */)transitionToNewSize;
- (id /* block */)showToast;
- (id /* block */)hideToast;
- (void)privateShowToast;
- (void)privateHideToast;
- (void)showToastWithText:(id)arg1;
- (void)showToastWithText:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)showToastWithIcon:(id)arg1 text:(id)arg2;
- (void)showToastWithIconImage:(id)arg1 text:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)showToastWithIcon:(id)arg1 text:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)showToastWithIcon:(id)arg1 iconImage:(id)arg2 text:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)showDoneToastWithText:(id)arg1;
- (void)showDoneToastWithText:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)showErrorToastWithText:(id)arg1;
- (void)showErrorToastWithText:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)showIconToastWithText:(id)arg1 success:(BOOL)arg2;
- (void)showIconToastWithText:(id)arg1 success:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)topViewControllerInMainWindow;
- (double)showDuration;
- (void)setShowDuration:(double)arg1;
- (BOOL)needEndEditing;
- (void)setNeedEndEditing:(BOOL)arg1;
- (UIEdgeInsets)contentInsets;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (BOOL)blockUserInteraction;
- (unsigned long long)supportedOrientationsInIphone;
- (void)setSupportedOrientationsInIphone:(unsigned long long)arg1;
- (BOOL)loadingStyle;
- (void)setLoadingStyle:(BOOL)arg1;
- (BOOL)customTimeLoading;
- (void)setCustomTimeLoading:(BOOL)arg1;
- (BOOL)forbidAccessibilityAnnouncement;
- (void)setForbidAccessibilityAnnouncement:(BOOL)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)transitionToNewSizeBlock;
- (void)setTransitionToNewSizeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

