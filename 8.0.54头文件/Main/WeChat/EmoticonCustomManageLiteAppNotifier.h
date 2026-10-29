@interface EmoticonCustomManageLiteAppNotifier : NSObject <EmoticonBackupOperateMgrExt>
{
    MMLiteAppViewController * _currentVC; // +0x8
    NSMutableSet * _observingMd5s; // +0x10
}
- (id)init;
- (void)registerMd5:(id)arg1;
- (id)getMd5Status:(id)arg1;
- (void)notifyUpdateForMd5s:(id)arg1;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onAddBackupEmoticonFailed:(id)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(id)arg3;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (id)observingMd5s;
- (void)setObservingMd5s:(id)arg1;
- (void).cxx_destruct;
@end

