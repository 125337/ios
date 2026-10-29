@interface MJComposingCreationCanonicalJSONReplacement : NSObject
{
    BOOL _finished; // +0x8
    BOOL _targetExisted; // +0x9
    NSString * _canonicalJSONPath; // +0x10
    NSString * _backupPath; // +0x18
}
- (id)initWithCanonicalJSONPath:(id)arg1 backupPath:(id)arg2 targetExisted:(BOOL)arg3;
- (void)dealloc;
- (BOOL)commitWithError:(id *)arg1;
- (BOOL)rollbackWithError:(id *)arg1;
- (id)canonicalJSONPath;
- (void)setCanonicalJSONPath:(id)arg1;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (id)backupPath;
- (void)setBackupPath:(id)arg1;
- (BOOL)targetExisted;
- (void)setTargetExisted:(BOOL)arg1;
- (void).cxx_destruct;
@end
