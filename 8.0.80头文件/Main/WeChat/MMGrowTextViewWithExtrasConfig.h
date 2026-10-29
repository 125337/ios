@interface MMGrowTextViewWithExtrasConfig : NSObject
{
    BOOL _doNotNeedClearButton; // +0x8
    BOOL _enableSetContentOffsetOnlyByMyself; // +0x9
    BOOL _enableDictation; // +0xa
    BOOL _dictationIconOnlyShowWhenFocused; // +0xb
    BOOL _dictationIconHideAfterKeyboardInput; // +0xc
    BOOL _enableExternalDictationIconLayout; // +0xd
    int _dictationCgiScene; // +0x10
    int _dictationUIScene; // +0x14
    UIFont * _font; // +0x18
    double _originHeight; // +0x20
    long long _warningThreshold; // +0x28
    double _textMaxShowLine; // +0x30
    long long _maxLength; // +0x38
    double _bottomMargin; // +0x40
    NSString * _placeHolder; // +0x48
    long long _canNotOutOfLengthBounds; // +0x50
    double _cleanButtonLeftMargin; // +0x58
    double _cleanButtonRightMargin; // +0x60
    unsigned long long _microphoneAuthScene; // +0x68
}
- (id)init;
- (id)font;
- (void)setFont:(id)arg1;
- (double)originHeight;
- (void)setOriginHeight:(double)arg1;
- (long long)warningThreshold;
- (void)setWarningThreshold:(long long)arg1;
- (double)textMaxShowLine;
- (void)setTextMaxShowLine:(double)arg1;
- (long long)maxLength;
- (void)setMaxLength:(long long)arg1;
- (BOOL)doNotNeedClearButton;
- (void)setDoNotNeedClearButton:(BOOL)arg1;
- (double)bottomMargin;
- (void)setBottomMargin:(double)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (long long)canNotOutOfLengthBounds;
- (void)setCanNotOutOfLengthBounds:(long long)arg1;
- (BOOL)enableSetContentOffsetOnlyByMyself;
- (void)setEnableSetContentOffsetOnlyByMyself:(BOOL)arg1;
- (double)cleanButtonLeftMargin;
- (void)setCleanButtonLeftMargin:(double)arg1;
- (double)cleanButtonRightMargin;
- (void)setCleanButtonRightMargin:(double)arg1;
- (BOOL)enableDictation;
- (void)setEnableDictation:(BOOL)arg1;
- (int)dictationCgiScene;
- (void)setDictationCgiScene:(int)arg1;
- (int)dictationUIScene;
- (void)setDictationUIScene:(int)arg1;
- (unsigned long long)microphoneAuthScene;
- (void)setMicrophoneAuthScene:(unsigned long long)arg1;
- (BOOL)dictationIconOnlyShowWhenFocused;
- (void)setDictationIconOnlyShowWhenFocused:(BOOL)arg1;
- (BOOL)dictationIconHideAfterKeyboardInput;
- (void)setDictationIconHideAfterKeyboardInput:(BOOL)arg1;
- (BOOL)enableExternalDictationIconLayout;
- (void)setEnableExternalDictationIconLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
