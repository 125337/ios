@interface EmoticonCustomBoardPageWrap : EmoticonBoardPageWrap
{
    BOOL _showCustomEntry; // +0x38
    BOOL _showGameEmoticon; // +0x39
    BOOL _showCameraEntry; // +0x3a
}
- (BOOL)showCustomEntry;
- (void)setShowCustomEntry:(BOOL)arg1;
- (BOOL)showGameEmoticon;
- (void)setShowGameEmoticon:(BOOL)arg1;
- (BOOL)showCameraEntry;
- (void)setShowCameraEntry:(BOOL)arg1;
@end
