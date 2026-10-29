@interface MMFinderLiveGiftResourcesMigrationTask : WCSilentTask
{
    BOOL _completed; // +0x8
    NSRecursiveLock * _lock; // +0x10
    NSArray * _paths; // +0x18
    unsigned long long _currentIndex; // +0x20
}
- (id)init;
- (void)runLoop;
- (id)iterationPath;
- (void)gatherFiles;
- (void)migrateFile:(id)arg1;
- (void)completeMigration;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)paths;
- (void)setPaths:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
