@interface MMFinderLiveTestLiveInfoConfirmSheetRowView : UIControl
{
    UILabel * _titleLabel; // +0x8
    UILabel * _detailLabel; // +0x10
    MMWebImageView * _coverThumbView; // +0x18
    UIImageView * _arrowView; // +0x20
    UIView * _separatorView; // +0x28
    MMFinderLiveTestLiveInfoConfirmItem * _item; // +0x30
    id /* block */ _onTap; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithItem:(id)arg1 showSeparator:(BOOL)arg2;
- (void)layoutSubviews;
- (void)onTapAction;
- (void)setHighlighted:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)coverThumbView;
- (void)setCoverThumbView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id /* block */)onTap;
- (void)setOnTap:(id /* block */)arg1;
- (void).cxx_destruct;
@end
