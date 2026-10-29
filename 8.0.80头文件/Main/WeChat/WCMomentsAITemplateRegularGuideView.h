@interface WCMomentsAITemplateRegularGuideView : MMHalfScreenGuideView
- (id)init;
- (id)attributedTextForMessage:(id)arg1 alignment:(long long)arg2;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)cancelButtonDidClick:(id)arg1;
- (void)acceptButtonDidClick:(id)arg1;
- (void)_reportRegularShowed;
- (void)_reportRegularAccepted;
- (void)_reportRegularCancelled;
- (void)_reportGuideAction:(long long)arg1;
@end
