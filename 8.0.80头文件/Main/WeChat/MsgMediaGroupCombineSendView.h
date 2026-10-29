@interface MsgMediaGroupCombineSendView : UIView
{
    UIButton * _contentView; // +0x8
    id /* block */ _onSelectedChanged; // +0x10
    UIImageView * _checkBox; // +0x18
    UILabel * _textLabel; // +0x20
}
+ (int)minCount;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateSelectUI:(BOOL)arg1;
- (void)updateSelected:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)onSelectedChanged;
- (void)setOnSelectedChanged:(id /* block */)arg1;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
