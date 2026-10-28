@interface WCFinderLiveStarterSimpleCamera : MMUIButton
{
    BOOL _isLandscape; // +0x8
    BOOL _isBackCamera; // +0x9
    id /* block */ _simpleCameraClickBlock; // +0x10
    MMUIButton * _simpleCamera; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLandscape:(BOOL)arg1;
- (void)layoutUI;
- (id)simpleCamera;
- (void)simpleCameraButtonClick:(id)arg1;
- (void)setUpUI;
- (void)updateAccessibilityLabel;
- (id /* block */)simpleCameraClickBlock;
- (void)setSimpleCameraClickBlock:(id /* block */)arg1;
- (void)setSimpleCamera:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (BOOL)isBackCamera;
- (void)setIsBackCamera:(BOOL)arg1;
- (void).cxx_destruct;
@end
