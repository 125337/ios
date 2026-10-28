@interface WCDeviceAccountMgr : MMUserService <MMServiceProtocol>
{
    WCDeviceAccountWCDB * m_devAccountDB; // +0x8
}
- (void)onServiceInit;
- (id)getAllDeviceInfos;
- (BOOL)hasBoundDevice:(id)arg1;
- (unsigned int)getBoundDeviceCount:(id)arg1;
- (id)getAllDeviceInfosForUser:(id)arg1;
- (id)getDeviceInfoForUser:(id)arg1 AndDeviceId:(id)arg2;
- (id)getDeviceInfoForDeviceType:(id)arg1 AndDeviceId:(id)arg2;
- (id)getDeviceInfoForMd5Str:(id)arg1;
- (id)getDeviceInfoForDID:(long long)arg1;
- (id)getM7Device;
- (BOOL)setDeviceInfo:(id)arg1;
- (void)delDeviceAccountForUser:(id)arg1;
- (void)delDeviceInfoForUser:(id)arg1 AndDeviceId:(id)arg2;
- (void)delDeviceInfoForDeviceType:(id)arg1 AndDeviceId:(id)arg2;
- (id)getAirKissDataForKey:(id)arg1;
- (BOOL)setAirKissData:(id)arg1 ForKey:(id)arg2;
- (void).cxx_destruct;
@end
