@interface WCFinderFeedInputViewOption : NSObject
{
    BOOL _canInputEmoticon; // +0x8
    BOOL _canInputImage; // +0x9
    BOOL _disabledAvatar; // +0xa
    BOOL _disabledQuickEmotionInput; // +0xb
    BOOL _canSendEmptyText; // +0xc
    BOOL _showKeyboardIfCancelImagePicker; // +0xd
    int _viewSceneForReport; // +0x10
    long long _returnKeyType; // +0x18
    unsigned long long _maxInputChar; // +0x20
    NSString * _inputPlaceholder; // +0x28
}
- (BOOL)canInputEmoticon;
- (void)setCanInputEmoticon:(BOOL)arg1;
- (BOOL)canInputImage;
- (void)setCanInputImage:(BOOL)arg1;
- (BOOL)disabledAvatar;
- (void)setDisabledAvatar:(BOOL)arg1;
- (BOOL)disabledQuickEmotionInput;
- (void)setDisabledQuickEmotionInput:(BOOL)arg1;
- (BOOL)canSendEmptyText;
- (void)setCanSendEmptyText:(BOOL)arg1;
- (long long)returnKeyType;
- (void)setReturnKeyType:(long long)arg1;
- (unsigned long long)maxInputChar;
- (void)setMaxInputChar:(unsigned long long)arg1;
- (id)inputPlaceholder;
- (void)setInputPlaceholder:(id)arg1;
- (BOOL)showKeyboardIfCancelImagePicker;
- (void)setShowKeyboardIfCancelImagePicker:(BOOL)arg1;
- (int)viewSceneForReport;
- (void)setViewSceneForReport:(int)arg1;
- (void).cxx_destruct;
@end
