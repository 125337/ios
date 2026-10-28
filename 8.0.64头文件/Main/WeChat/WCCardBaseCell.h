@interface WCCardBaseCell : MMTableViewCell
{
    UIView * _highlightView; // +0x8
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setNeedHighlightBkgView:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (void).cxx_destruct;
@end
