@interface WAMiniToolMenuListItemView : MMScrollActionSheetItemView
{
    MMUIButton * _contentButton; // +0x8
    UIImageView * _iconView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    UIView * _separatorLine; // +0x20
}
- (id)initWithItem:(id)arg1 width:(double)arg2 topPadding:(double)arg3 bottomPadding:(double)arg4 showBottomSeparator:(BOOL)arg5;
- (void)reloadData;
- (void)updateForRowWidth:(double)arg1;
- (void)onContentButtonTaped;
- (id)contentButton;
- (void)setContentButton:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
