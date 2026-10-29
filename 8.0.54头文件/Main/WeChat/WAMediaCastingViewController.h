@interface WAMediaCastingViewController : MMUIViewController
{
    unsigned long long _orientationMask; // +0x68
}
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)orientationMask;
- (void)setOrientationMask:(unsigned long long)arg1;
@end

