@interface OrientationSafePageSheetContainer : MMPageSheetContainerWindowController
{
    unsigned long long _mask; // +0x78
}
- (id)initWithSupportedOrientationMask:(unsigned long long)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
@end

