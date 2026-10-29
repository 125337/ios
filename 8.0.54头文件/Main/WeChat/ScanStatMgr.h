@interface ScanStatMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    unsigned int _networkType; // +0x8
    NSString * _UUID; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)statClickEvent:(unsigned int)arg1 productId:(id)arg2 statId:(id)arg3 type:(unsigned int)arg4 value:(id)arg5 actionListCount:(unsigned int)arg6 showType:(unsigned int)arg7;
- (BOOL)uploadScanReport:(unsigned int)arg1 withLogExt:(id)arg2 productId:(id)arg3 statId:(id)arg4 type:(unsigned int)arg5 value:(id)arg6 count:(unsigned int)arg7 showType:(unsigned int)arg8;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (void).cxx_destruct;
@end

