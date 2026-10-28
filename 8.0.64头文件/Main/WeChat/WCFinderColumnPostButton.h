@interface WCFinderColumnPostButton : MMUIButton
{
    UIImageView * _leftIconView; // +0x8
    UILabel * _btnLabel; // +0x10
    UIImageView * _rightIconView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithText:(id)arg1;
- (void)sizeToFit;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id)btnLabel;
- (void)setBtnLabel:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (void).cxx_destruct;
@end
