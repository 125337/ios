@interface VoiceMessageEnhancementSessionState : NSObject
{
    BOOL _snackBarShown; // +0x8
    BOOL _temporaryEnhancementEnabled; // +0x9
    BOOL _systemMessageShown; // +0xa
}
- (BOOL)snackBarShown;
- (void)setSnackBarShown:(BOOL)arg1;
- (BOOL)temporaryEnhancementEnabled;
- (void)setTemporaryEnhancementEnabled:(BOOL)arg1;
- (BOOL)systemMessageShown;
- (void)setSystemMessageShown:(BOOL)arg1;
@end
