@interface RingBackSwitchCellHandler : WCTableViewCellHandler
{
    BOOL _shouldOpen; // +0x8
}
- (id)initWithCurViewController:(id)arg1;
- (id)genCellManager;
- (void)soundSwitchChanged:(id)arg1;
- (void)openRingBackSwitch;
- (BOOL)shouldOpen;
- (void)setShouldOpen:(BOOL)arg1;
@end
