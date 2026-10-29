@interface MMAuthorizeGameInfoHalfScreenTableCell : MMTableViewCell
{
    UIImageView * _selectImageView; // +0x8
    UIView * _highlightMaskView; // +0x10
    UIView * _topSeperatorLine; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSelectedImageView;
- (void)setupHighlightMask;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)selectImageView;
- (void)setSelectImageView:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)topSeperatorLine;
- (void)setTopSeperatorLine:(id)arg1;
- (void).cxx_destruct;
@end

