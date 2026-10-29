@interface UIViewController (WCSplitTransition) <WCSplitBaseTransitionDelegate>
- (void)setupSplitDetailTransition:(id)arg1;
- (id)splitDetailTransition;
- (void)setupSplitOverDetailTransition:(id)arg1;
- (id)splitOverDetailTransition;
- (BOOL)isWCSplitTransitionViewController;
- (void)onTransitionDidDismissed:(id)arg1;
@end

