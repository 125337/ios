@interface ZCWScrollDigitView : UIView
{
    double _oneDigitHeight; // +0x8
    unsigned long long _digit; // +0x10
    UIView * backgroundView; // +0x18
    UILabel * label; // +0x20
    unsigned long long digit; // +0x28
    UIFont * digitFont; // +0x30
}
- (void)setDigitAndCommit:(unsigned long long)arg1;
- (void)setDigit:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)setDigitFromLast:(unsigned long long)arg1;
- (void)setDigitFast:(unsigned long long)arg1;
- (void)setRandomScrollDigit:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (void)commitChange;
- (void)didConfigFinish;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (unsigned long long)digit;
- (id)digitFont;
- (void)setDigitFont:(id)arg1;
- (unsigned long long)_digit;
- (void)set_digit:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
