@interface SharePreConfirmViewController : MMUIViewController
{
    BOOL _willRotateToPreviousOrientation; // +0x68
    id /* block */ _didTransitionToNewSizeBlock; // +0x70
    unsigned long long _overrideOrientationMask; // +0x78
}
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (BOOL)willRotateToPreviousOrientation;
- (void)setWillRotateToPreviousOrientation:(BOOL)arg1;
- (id /* block */)didTransitionToNewSizeBlock;
- (void)setDidTransitionToNewSizeBlock:(id /* block */)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

