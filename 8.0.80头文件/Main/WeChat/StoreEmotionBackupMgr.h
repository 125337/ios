@interface StoreEmotionBackupMgr : MMUserService <MMKernelExt, StoreEmotionBackupLogicObjectDelegate, MMServiceProtocol>
{
    int _scene; // +0x8
    StoreEmotionBackupLogicObject * _backupLogicObject; // +0x10
}
- (void)dealloc;
- (id)init;
- (void)backupStoreEmotionToServerFromScene:(int)arg1;
- (void)backupStoreEmotionToServerFromScene:(int)arg1 needCheckFileExist:(BOOL)arg2;
- (BOOL)hasCheckFileExist;
- (BOOL)canStartCgiNow;
- (void)onAuthOK;
- (void)onPreQuit;
- (void)onStoreEmotionBackupLogicOK;
- (void)onStoreEmotionBackupLogicFailed;
- (void)onStoreEmotionBackupLogicNoneedBackup;
- (id)backupLogicObject;
- (void)setBackupLogicObject:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
