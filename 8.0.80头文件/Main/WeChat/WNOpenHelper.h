@interface WNOpenHelper : MMObject
+ (id)getViewControllerFromParameter:(id)arg1;
+ (BOOL)openFlutterWeNoteEditorUI;
+ (void)pushWeNoteViewControllerWithTransitionCompletion:(id)arg1 parameter:(id)arg2;
+ (void)openWeNoteViewController:(id)arg1;
+ (void)openHalfNoteViewController:(long long)arg1 plusSessionId:(id)arg2;
+ (void)showAddNoteTipsWhenCopy:(id)arg1 vc:(id)arg2;
+ (void)showAddNoteSuccessWhenCopy:(id)arg1;
+ (void)checkAndOpenView:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3;
+ (void)checkAndCloseView:(id)arg1 animated:(BOOL)arg2;
+ (BOOL)isPushed:(id)arg1;
+ (BOOL)isPresented:(id)arg1;
@end
