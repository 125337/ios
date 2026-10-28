@interface MMGrowTextViewWithExtrasConfig : NSObject
{
    BOOL _doNotNeedClearButton; // +0x8
    BOOL _enableSetContentOffsetOnlyByMyself; // +0x9
    UIFont * _font; // +0x10
    double _originHeight; // +0x18
    long long _warningThreshold; // +0x20
    double _textMaxShowLine; // +0x28
    long long _maxLength; // +0x30
    NSString * _placeHolder; // +0x38
    long long _canNotOutOfLengthBounds; // +0x40
}
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
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (long long)canNotOutOfLengthBounds;
- (void)setCanNotOutOfLengthBounds:(long long)arg1;
- (BOOL)enableSetContentOffsetOnlyByMyself;
- (void)setEnableSetContentOffsetOnlyByMyself:(BOOL)arg1;
- (void).cxx_destruct;
@end
