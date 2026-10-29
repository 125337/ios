@interface TingFlowPlayerConfiguration : NSObject
{
    BOOL _forceShuffleMode; // +0x8
    BOOL _shuffed; // +0x9
    BOOL _forceStratPlayMode; // +0xa
    BOOL _forceEnableBackupItemFetching; // +0xb
    BOOL _enableBackupItemFetching; // +0xc
    BOOL _savePlayModeSettings; // +0xd
    int _startPlayMode; // +0x10
}
- (BOOL)forceShuffleMode;
- (void)setForceShuffleMode:(BOOL)arg1;
- (BOOL)shuffed;
- (void)setShuffed:(BOOL)arg1;
- (BOOL)forceStratPlayMode;
- (void)setForceStratPlayMode:(BOOL)arg1;
- (int)startPlayMode;
- (void)setStartPlayMode:(int)arg1;
- (BOOL)forceEnableBackupItemFetching;
- (void)setForceEnableBackupItemFetching:(BOOL)arg1;
- (BOOL)enableBackupItemFetching;
- (void)setEnableBackupItemFetching:(BOOL)arg1;
- (BOOL)savePlayModeSettings;
- (void)setSavePlayModeSettings:(BOOL)arg1;
@end

