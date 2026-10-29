@interface iConsoleWindow : MMMainSceneWindow
{
    BOOL _haveFirstTouch; // +0x8
    BOOL _shouldLogHitTest; // +0x9
    int _logHitTestCount; // +0xc
}
+ (void)initialize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (id)createWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)becomeKeyWindow;
- (void)setRootViewController:(id)arg1;
- (BOOL)accessibilityElementsHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)lookin_shouldCaptureImage;
- (BOOL)haveFirstTouch;
- (void)setHaveFirstTouch:(BOOL)arg1;
- (BOOL)shouldLogHitTest;
- (void)setShouldLogHitTest:(BOOL)arg1;
- (int)logHitTestCount;
- (void)setLogHitTestCount:(int)arg1;
@end

