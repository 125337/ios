@interface WCPayRemarkPageSheetConfig : NSObject
{
    BOOL _showRightButton; // +0x8
    unsigned int _maxInputLength; // +0xc
    unsigned int _maxInputLengthForDiaplay; // +0x10
    NSString * _title; // +0x18
    NSString * _placeHolder; // +0x20
    NSString * _currentContent; // +0x28
    double _textViewMaxHeight; // +0x30
    UIImage * _rightButtonImage; // +0x38
    NSString * _rightButtonTitle; // +0x40
    long long _bottomType; // +0x48
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (unsigned int)maxInputLength;
- (void)setMaxInputLength:(unsigned int)arg1;
- (id)currentContent;
- (void)setCurrentContent:(id)arg1;
- (double)textViewMaxHeight;
- (void)setTextViewMaxHeight:(double)arg1;
- (BOOL)showRightButton;
- (void)setShowRightButton:(BOOL)arg1;
- (id)rightButtonImage;
- (void)setRightButtonImage:(id)arg1;
- (id)rightButtonTitle;
- (void)setRightButtonTitle:(id)arg1;
- (long long)bottomType;
- (void)setBottomType:(long long)arg1;
- (unsigned int)maxInputLengthForDiaplay;
- (void)setMaxInputLengthForDiaplay:(unsigned int)arg1;
- (void).cxx_destruct;
@end

