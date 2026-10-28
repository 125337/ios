@interface WAPageSheet : MMObject <MMPageSheetAdapterDelegate>
{
    BOOL _forbidTapToDismiss; // +0x8
    BOOL _bSupportRotate; // +0x9
    MMPageSheetAdapter * _adapter; // +0x10
    id <WAPageSheetDelegate> _delegate; // +0x18
    UIView * _parentView; // +0x20
    WAPageSheetContentView * _contentView; // +0x28
    WAPageSheet * _retainSheet; // +0x30
    id /* block */ _showCompleteAction; // +0x38
    id /* block */ _dismissCompleteAction; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)showWithCompletion:(id /* block */)arg1;
- (void)showInView:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)pushPageSheet:(id)arg1;
- (void)layoutSubViews;
- (void)resetContentViewCornerRadius;
- (double)contentWidth;
- (double)contentHeight;
- (BOOL)isShown;
- (void)setForbidTapToDismiss:(BOOL)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)didRotate:(id)arg1;
- (double)operateButtonBottomInset;
- (id)adapter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)forbidTapToDismiss;
- (BOOL)bSupportRotate;
- (void)setBSupportRotate:(BOOL)arg1;
- (id)retainSheet;
- (void)setRetainSheet:(id)arg1;
- (id /* block */)showCompleteAction;
- (void)setShowCompleteAction:(id /* block */)arg1;
- (id /* block */)dismissCompleteAction;
- (void)setDismissCompleteAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
