@interface WAAppStateChangedContextInfoBluetoothInfo : MMObject
{
    BOOL _canKeepAliveByBluetooth; // +0x8
    BOOL _isBluetoothBackgroundEnabled; // +0x9
    BOOL _isBluetoothSharedResourceBeenRecoverd; // +0xa
    BOOL _hasBluetoothConnection; // +0xb
}
- (id)description;
- (BOOL)canKeepAliveByBluetooth;
- (void)setCanKeepAliveByBluetooth:(BOOL)arg1;
- (BOOL)isBluetoothBackgroundEnabled;
- (void)setIsBluetoothBackgroundEnabled:(BOOL)arg1;
- (BOOL)isBluetoothSharedResourceBeenRecoverd;
- (void)setIsBluetoothSharedResourceBeenRecoverd:(BOOL)arg1;
- (BOOL)hasBluetoothConnection;
- (void)setHasBluetoothConnection:(BOOL)arg1;
@end
