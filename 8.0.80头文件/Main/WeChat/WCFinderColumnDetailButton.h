@interface WCFinderColumnDetailButton : MMUIButton
{
    UILabel * _btnLabel; // +0x8
    UIImageView * _rightIconView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithText:(id)arg1;
- (void)sizeToFit;
- (id)btnLabel;
- (void)setBtnLabel:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (void).cxx_destruct;
@end
