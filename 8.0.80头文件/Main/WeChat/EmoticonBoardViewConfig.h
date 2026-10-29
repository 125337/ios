@interface EmoticonBoardViewConfig : NSObject
{
    BOOL _showSearchEmoji; // +0x8
    BOOL _showRecommendEmoji; // +0x9
    BOOL _showQQEmoji; // +0xa
    BOOL _showCustomEmoticon; // +0xb
    BOOL _showCameraEmoticon; // +0xc
    BOOL _showStoreEmoticon; // +0xd
    BOOL _showGameEmoticon; // +0xe
    BOOL _showAddCustomEmoticon; // +0xf
    BOOL _showAddCameraEmoticon; // +0x10
    BOOL _showQQEmojiSendButton; // +0x11
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
- (BOOL)showRecommendEmoji;
- (void)setShowRecommendEmoji:(BOOL)arg1;
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
