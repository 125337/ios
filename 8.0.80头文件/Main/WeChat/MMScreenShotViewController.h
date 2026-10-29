@interface MMScreenShotViewController : MMWindowViewController <MMScreenShotWindowDelegate>
{
    NSArray * _entries; // +0x80
    MMScreenShotEntryContext * _context; // +0x88
    id <MMScreenShotViewControllerDelegate> _delegate; // +0x90
    MMScreenShotForwardView * _forwardView; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)show;
- (void)restartAutoDismissTimer;
- (void)onAutoDismiss;
- (void)closeOverlay;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setBottomOffset:(double)arg1;
- (id)forwardView;
- (void)handleEntry:(id)arg1;
- (void)dispatchEntry:(id)arg1 image:(id)arg2;
- (void)fetchLastImageAtTime:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (void)fetchLastMMAssetAtTime:(unsigned long long)arg1 complete:(id /* block */)arg2 times:(int)arg3;
- (BOOL)shouldHandleTouchAtPoint:(CGPoint)arg1;
- (id)entries;
- (void)setEntries:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setForwardView:(id)arg1;
- (void).cxx_destruct;
@end
