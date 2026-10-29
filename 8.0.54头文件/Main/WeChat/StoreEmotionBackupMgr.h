@interface StoreEmotionBackupMgr : MMUserService <MMKernelExt, StoreEmotionBackupLogicObjectDelegate, MMServiceProtocol>
{
    StoreEmotionBackupLogicObject * _backupLogicObject; // +0x8
    unsigned long long _scene; // +0x10
}
- (void)dealloc;
- (id)init;
- (void)backupStoreEmotionToServerFromScene:(unsigned long long)arg1;
- (void)backupStoreEmotionToServerFromScene:(unsigned long long)arg1 needCheckFileExist:(BOOL)arg2;
- (BOOL)hasCheckFileExist;
- (BOOL)canStartCgiNow;
- (void)onAuthOK;
- (void)onPreQuit;
- (void)onStoreEmotionBackupLogicOK;
- (void)onStoreEmotionBackupLogicFailed;
- (void)onStoreEmotionBackupLogicNoneedBackup;
- (id)backupLogicObject;
- (void)setBackupLogicObject:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

