@interface WCMomentsTemplateRegularGuideView : MMHalfScreenGuideView
- (id)init;
- (id)attributedTextForMessage:(id)arg1 alignment:(long long)arg2;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)cancelButtonDidClick:(id)arg1;
- (void)acceptButtonDidClick:(id)arg1;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)_onRegularAccepted;
- (void)_onRegularCancelled;
@end

