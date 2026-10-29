@interface WCKeyboardMgr : MMUserService <MMServiceProtocol>
{
    BOOL _externalKeyboardConnected; // +0x8
    BOOL _receiveNotification; // +0x9
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isExternalKeyboardConnected;
- (void)externalKeyboardConnect:(id)arg1;
- (void)externalKeyboardDisconnect:(id)arg1;
- (BOOL)externalKeyboardConnected;
- (void)setExternalKeyboardConnected:(BOOL)arg1;
- (BOOL)receiveNotification;
- (void)setReceiveNotification:(BOOL)arg1;
@end

