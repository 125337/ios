@interface WCAudioSessionLogic : MMUserService <MMServiceProtocol, WCAudioSessionDelegate>
- (void)startLogic;
- (BOOL)BlockChangeCategoryToNotPlayAndRecordWithBlockType:(unsigned long long)arg1;
- (BOOL)BlockChangeCategoryToAmbientWithBlockType:(unsigned long long)arg1;
- (BOOL)BlockChangeCategoryToSoloAmbientWithBlockType:(unsigned long long)arg1;
- (BOOL)BlockDeactivateSession;
- (BOOL)BlockDeactivateSpeaker;
- (BOOL)BlockActivateSpeaker;
- (BOOL)BlockChangeCategroyPlaybackOptionsWithBlockType:(unsigned long long)arg1 options:(unsigned long long)arg2 mode:(id)arg3;
- (BOOL)BlockChangeCategroyPlayAndRecordOptionsWithBlockType:(unsigned long long)arg1 options:(unsigned long long)arg2 mode:(id)arg3;
@end
