@interface FTSFloatingVoiceInputViewConfig : NSObject
{
    BOOL _enableHalfPage; // +0x8
    BOOL _enableKeyboard; // +0x9
    BOOL _enableH5HalfScreenInput; // +0xa
    unsigned long long _modalType; // +0x10
    NSString * _title; // +0x18
    double _bottomSpace; // +0x20
    unsigned long long _colorType; // +0x28
    double _keyboardHeight; // +0x30
}
- (BOOL)enableHalfPage;
- (void)setEnableHalfPage:(BOOL)arg1;
- (unsigned long long)modalType;
- (void)setModalType:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)bottomSpace;
- (void)setBottomSpace:(double)arg1;
- (BOOL)enableKeyboard;
- (void)setEnableKeyboard:(BOOL)arg1;
- (unsigned long long)colorType;
- (void)setColorType:(unsigned long long)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)enableH5HalfScreenInput;
- (void)setEnableH5HalfScreenInput:(BOOL)arg1;
- (void).cxx_destruct;
@end
