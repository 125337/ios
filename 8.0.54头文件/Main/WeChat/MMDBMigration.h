@interface MMDBMigration : NSObject
{
    BOOL _createTableError; // +0x8
    BOOL _migrationAllFinish; // +0x9
    unsigned int _state; // +0xc
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    NSMutableSet * _brandUserNames; // +0x18
    NSArray * _userNames; // +0x20
}
- (id)init;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (id)queue;
- (id)brandUserNames;
- (void)setBrandUserNames:(id)arg1;
- (id)userNames;
- (void)setUserNames:(id)arg1;
- (BOOL)createTableError;
- (void)setCreateTableError:(BOOL)arg1;
- (BOOL)migrationAllFinish;
- (void)setMigrationAllFinish:(BOOL)arg1;
- (void).cxx_destruct;
@end

