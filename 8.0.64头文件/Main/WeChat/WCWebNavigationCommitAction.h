@interface WCWebNavigationCommitAction : WCWebNavigationEventAction
- (id)targetEventSets;
- (BOOL)canPerformEventAction;
- (void)performEventAction;
@end
