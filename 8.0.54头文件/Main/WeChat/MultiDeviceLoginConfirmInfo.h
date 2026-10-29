@interface MultiDeviceLoginConfirmInfo : NSObject
{
    BOOL _showSyncChatEntrance; // +0x8
    BOOL _syncChat; // +0x9
    BOOL _showAutoLoginEntrance; // +0xa
    BOOL _autoLogin; // +0xb
}
- (id)description;
- (BOOL)showSyncChatEntrance;
- (void)setShowSyncChatEntrance:(BOOL)arg1;
- (BOOL)syncChat;
- (void)setSyncChat:(BOOL)arg1;
- (BOOL)showAutoLoginEntrance;
- (void)setShowAutoLoginEntrance:(BOOL)arg1;
- (BOOL)autoLogin;
- (void)setAutoLogin:(BOOL)arg1;
@end

