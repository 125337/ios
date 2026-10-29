@interface MMScreenShotEntry : NSObject
{
    BOOL _requiresScreenshot; // +0x8
    BOOL _preservesVisibilityWhenSpaceIsInsufficient; // +0x9
    NSString * _identifier; // +0x10
    NSString * _title; // +0x18
    NSString * _iconName; // +0x20
    double _autoDismissDelay; // +0x28
    id /* block */ _shouldShow; // +0x30
    id /* block */ _onAppear; // +0x38
    id /* block */ _onClick; // +0x40
    id /* block */ _handle; // +0x48
    CGSize _iconSize; // +0x50
}
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (BOOL)requiresScreenshot;
- (void)setRequiresScreenshot:(BOOL)arg1;
- (double)autoDismissDelay;
- (void)setAutoDismissDelay:(double)arg1;
- (BOOL)preservesVisibilityWhenSpaceIsInsufficient;
- (void)setPreservesVisibilityWhenSpaceIsInsufficient:(BOOL)arg1;
- (id /* block */)shouldShow;
- (void)setShouldShow:(id /* block */)arg1;
- (id /* block */)onAppear;
- (void)setOnAppear:(id /* block */)arg1;
- (id /* block */)onClick;
- (void)setOnClick:(id /* block */)arg1;
- (id /* block */)handle;
- (void)setHandle:(id /* block */)arg1;
- (void).cxx_destruct;
@end
