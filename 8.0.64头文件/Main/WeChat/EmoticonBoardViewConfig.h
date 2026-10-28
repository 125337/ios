@interface EmoticonBoardViewConfig : NSObject
{
    BOOL _showSearchEmoji; // +0x8
    BOOL _showQQEmoji; // +0x9
    BOOL _showCustomEmoticon; // +0xa
    BOOL _showCameraEmoticon; // +0xb
    BOOL _showStoreEmoticon; // +0xc
    BOOL _showGameEmoticon; // +0xd
    BOOL _showAddCustomEmoticon; // +0xe
    BOOL _showAddCameraEmoticon; // +0xf
    BOOL _showQQEmojiSendButton; // +0x10
    unsigned long long _currentConfigCases; // +0x18
}
- (id)init;
- (void)quickConfigureTab;
- (void)quickConfigureTabWithCases:(unsigned long long)arg1;
- (void)setShowSearchEmoji:(BOOL)arg1;
- (void)setShowQQEmoji:(BOOL)arg1;
- (void)setShowCustomEmoticon:(BOOL)arg1;
- (void)setShowCameraEmoticon:(BOOL)arg1;
- (void)setShowStoreEmoticon:(BOOL)arg1;
- (BOOL)showSearchEmoji;
- (BOOL)showQQEmoji;
- (BOOL)showCustomEmoticon;
- (BOOL)showCameraEmoticon;
- (BOOL)showStoreEmoticon;
- (BOOL)showGameEmoticon;
- (void)setShowGameEmoticon:(BOOL)arg1;
- (BOOL)showAddCustomEmoticon;
- (void)setShowAddCustomEmoticon:(BOOL)arg1;
- (BOOL)showAddCameraEmoticon;
- (void)setShowAddCameraEmoticon:(BOOL)arg1;
- (unsigned long long)currentConfigCases;
- (void)setCurrentConfigCases:(unsigned long long)arg1;
- (BOOL)showQQEmojiSendButton;
- (void)setShowQQEmojiSendButton:(BOOL)arg1;
@end
