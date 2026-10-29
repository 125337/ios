@interface MMFinderLiveGiftResourceMigrationService : MMUserService <MMServiceProtocol>
{
    BOOL _useNewGiftResourcesManagement; // +0x8
    BOOL _migrationStarted; // +0x9
}
- (void)onServiceInit;
- (void)startResourcesMigration;
- (BOOL)useNewGiftResourcesManagement;
- (void)setUseNewGiftResourcesManagement:(BOOL)arg1;
- (BOOL)migrationStarted;
- (void)setMigrationStarted:(BOOL)arg1;
@end
