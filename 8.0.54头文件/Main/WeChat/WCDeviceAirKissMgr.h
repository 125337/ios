@interface WCDeviceAirKissMgr : MMUserService <MMServiceProtocol>
{
    BOOL m_isStarted; // +0x8
}
- (void)onServiceInit;
- (BOOL)startAirKiss:(id)arg1 Password:(id)arg2 Key:(id)arg3 ProcInt:(int)arg4 DataInt:(int)arg5;
- (void)stopAirKiss;
- (id)getWifiPassword:(id)arg1;
- (id)getAESKey:(id)arg1;
- (id)getTableKey:(id)arg1;
- (BOOL)setWifi:(id)arg1 Password:(id)arg2;
@end

