@interface MMCrashProtectedMgr : MMRootService <MMServiceProtocol>
{
    BOOL m_isDebuging; // +0x8
    BOOL m_stopRemovingUnsedCPKey; // +0x9
    BOOL m_isInBackground; // +0xa
    BOOL m_isLastTimeCrashedBySpecialCharacter; // +0xb
    NSMutableArray * m_currRunloopsCPKeys; // +0x10
    NSMutableDictionary * m_currIncreaseCPKeys; // +0x18
    NSMutableDictionary * m_chatRoomCrashCountDict; // +0x20
    NSRecursiveLock * m_lock; // +0x28
}
+ (BOOL)isMemoryMappedKVValid;
+ (BOOL)isCrashBySpecialCharacter;
+ (void)clearFlag;
- (void)onSingalCrash:(__siginfo *)arg1;
- (id)init;
- (BOOL)isLastTimeCrashedBySpecialCharacter;
- (id)hasCrashMemoryMappedKV;
- (id)mayCrashMemoryMappedKV;
- (id)reportedCPKeyMemoryMappedKV;
- (void)checkDataValid;
- (void)checkMayCrashAndMarkAsHasCrash;
- (void)checkHasCrashAndDoReportJob;
- (BOOL)isUnsafeWithKey:(id)arg1;
- (BOOL)isChatRoomUnsafe:(id)arg1;
- (void)increaseCrashCountWithKey:(id)arg1;
- (void)decreaseCrashCountWithKey:(id)arg1;
- (void)clearCrashCountWithKey:(id)arg1;
- (void)decreaseCurrIncreaseCPKeysWithout:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onExit;
- (void)doCleaningJob;
- (void)stopCleaning;
- (void)removeInfoWithKey:(id)arg1 threadId:(unsigned long long)arg2;
- (id)lastCPKey:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

