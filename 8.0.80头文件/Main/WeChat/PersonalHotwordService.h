@interface PersonalHotwordService : MMUserService <MMServiceProtocol>
{
    BOOL _acceptingInputs; // +0x8
    PersonalHotwordExptConfig * _exptConfig; // +0x10
    PersonalHotwordStore * _store; // +0x18
    NSMutableSet * _localTasks; // +0x20
    VoiceTransCorrectionTask * _correctionTask; // +0x28
    PersonalHotwordASRSnapshot * _lastASRSnapshot; // +0x30
    NSMutableArray * _correctionBuffer; // +0x38
    MMTimer * _correctionTimer; // +0x40
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)canAcceptInputs;
- (id)productionStore;
- (void)recordSentText:(id)arg1;
- (void)commitInputs:(id)arg1;
- (void)recordASRSnapshot:(id)arg1;
- (void)clearASRSnapshotForContextKey:(id)arg1;
- (void)recordSentText:(id)arg1 contextKey:(id)arg2;
- (void)recordSentText:(id)arg1 asrSnapshot:(id)arg2;
- (void)enqueueCorrectionWithSnapshot:(id)arg1 sentText:(id)arg2;
- (void)checkCorrectionBuffer:(id)arg1;
- (id)exportHotwords;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (BOOL)acceptingInputs;
- (void)setAcceptingInputs:(BOOL)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)localTasks;
- (void)setLocalTasks:(id)arg1;
- (id)correctionTask;
- (void)setCorrectionTask:(id)arg1;
- (id)lastASRSnapshot;
- (void)setLastASRSnapshot:(id)arg1;
- (id)correctionBuffer;
- (void)setCorrectionBuffer:(id)arg1;
- (id)correctionTimer;
- (void)setCorrectionTimer:(id)arg1;
- (void).cxx_destruct;
@end
