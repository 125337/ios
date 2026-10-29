@interface MMWebCanvasPopupRootViewController : MMUIViewController
{
    unsigned long long _orientationMask; // +0x70
}
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (unsigned long long)orientationMask;
- (void)setOrientationMask:(unsigned long long)arg1;
@end
