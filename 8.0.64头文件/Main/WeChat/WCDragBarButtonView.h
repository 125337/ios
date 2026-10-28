@interface WCDragBarButtonView : UIButton
{
    long long _option; // +0x8
    UIButton * _iconView; // +0x10
    UILabel * _textLabel; // +0x18
    NSString * _title; // +0x20
    NSString * _selectedTitle; // +0x28
}
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 title:(id)arg3 selectedTitle:(id)arg4 bgColor:(id)arg5 selectedBGColor:(id)arg6;
- (void)layoutSubviews;
- (double)dynamicFontSize;
- (void)setSelected:(BOOL)arg1;
- (long long)option;
- (void)setOption:(long long)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)selectedTitle;
- (void)setSelectedTitle:(id)arg1;
- (void).cxx_destruct;
@end
