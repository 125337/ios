@interface OrientationSafePageSheetContainer : MMPageSheetContainerWindowController
{
    unsigned long long _mask; // +0x80
}
- (id)initWithSupportedOrientationMask:(unsigned long long)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
@end
