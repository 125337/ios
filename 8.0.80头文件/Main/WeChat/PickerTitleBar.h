@interface PickerTitleBar : MMUIView
{
    BOOL _isTitleInCenter; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUIView * _bottomLine; // +0x18
}
- (id)init;
- (void)setText:(id)arg1;
- (void)createViews;
- (void)layoutSubviews;
- (id)titleLabel;
- (id)bottomLine;
- (BOOL)isTitleInCenter;
- (void)setIsTitleInCenter:(BOOL)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
