@interface WCBackgroundQueueMgr : MMRootService <MMServiceProtocol>
{
    BOOL _memoryExceeded; // +0x8
    BOOL _isEnabled; // +0x9
    BOOL _suspendByUserScene; // +0xa
    BOOL _suspendByPerfWarning; // +0xb
    BOOL _diskScanEnabled; // +0xc
    BOOL _ftsIndexEnabled; // +0xd
    BOOL _karaEnabled; // +0xe
    NSMutableSet * _backgroundDispatchQueues; // +0x10
    NSMutableSet * _suspendedDispatchQueues; // +0x18
    NSMutableSet * _backgroundOperationQueue; // +0x20
    NSObject<OS_dispatch_queue> * _mgrQueue; // +0x28
    unsigned long long _userType; // +0x30
    long long _thermalState; // +0x38
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)registerDispatchQueue:(id)arg1;
- (void)unregisterDispatchQueue:(id)arg1;
- (void)registerOperationQueue:(id)arg1;
- (void)unregisterOperationQueue:(id)arg1;
- (BOOL)isAllowedLabel:(const char *)arg1;
- (void)reevaluate;
- (void)pauseBackgroundWork;
- (void)recoverBackgroundWork;
- (void)addUserType:(unsigned long long)arg1;
- (void)removeUserType:(unsigned long long)arg1;
- (void)onMatrixPerfWarning:(id)arg1;
- (id)backgroundDispatchQueues;
- (void)setBackgroundDispatchQueues:(id)arg1;
- (id)suspendedDispatchQueues;
- (void)setSuspendedDispatchQueues:(id)arg1;
- (id)backgroundOperationQueue;
- (void)setBackgroundOperationQueue:(id)arg1;
- (id)mgrQueue;
- (void)setMgrQueue:(id)arg1;
- (unsigned long long)userType;
- (void)setUserType:(unsigned long long)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (BOOL)memoryExceeded;
- (void)setMemoryExceeded:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (BOOL)suspendByUserScene;
- (void)setSuspendByUserScene:(BOOL)arg1;
- (BOOL)suspendByPerfWarning;
- (void)setSuspendByPerfWarning:(BOOL)arg1;
- (BOOL)diskScanEnabled;
- (void)setDiskScanEnabled:(BOOL)arg1;
- (BOOL)ftsIndexEnabled;
- (void)setFtsIndexEnabled:(BOOL)arg1;
- (BOOL)karaEnabled;
- (void)setKaraEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

