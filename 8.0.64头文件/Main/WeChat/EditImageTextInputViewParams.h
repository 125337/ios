@interface EditImageTextInputViewParams : NSObject
{
    BOOL _canChangeLine; // +0x8
    BOOL _useEmotionColor; // +0x9
    BOOL _shouldShowSecondCutPromotionEntry; // +0xa
    NSString * _defaultText; // +0x10
    UIColor * _defaultColor; // +0x18
    unsigned long long _style; // +0x20
    UIColor * _confirmBtnColor; // +0x28
    long long _textViewAlignment; // +0x30
    NSArray * _styleOrders; // +0x38
    double _fontSize; // +0x40
    unsigned long long _maxNumberOfFullWidthCharactersPerLayoutLine; // +0x48
    unsigned long long _entranceType; // +0x50
    CGRect _editViewFrame; // +0x58
}
- (id)init;
- (id)defaultText;
- (void)setDefaultText:(id)arg1;
- (id)defaultColor;
- (void)setDefaultColor:(id)arg1;
- (CGRect)editViewFrame;
- (void)setEditViewFrame:(CGRect)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (id)confirmBtnColor;
- (void)setConfirmBtnColor:(id)arg1;
- (long long)textViewAlignment;
- (void)setTextViewAlignment:(long long)arg1;
- (id)styleOrders;
- (void)setStyleOrders:(id)arg1;
- (BOOL)canChangeLine;
- (void)setCanChangeLine:(BOOL)arg1;
- (BOOL)useEmotionColor;
- (void)setUseEmotionColor:(BOOL)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (unsigned long long)maxNumberOfFullWidthCharactersPerLayoutLine;
- (void)setMaxNumberOfFullWidthCharactersPerLayoutLine:(unsigned long long)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (BOOL)shouldShowSecondCutPromotionEntry;
- (void)setShouldShowSecondCutPromotionEntry:(BOOL)arg1;
- (void).cxx_destruct;
@end
