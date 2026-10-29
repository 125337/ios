@interface MMCellLikeCollectionViewCell : UICollectionViewCell <MMCellTapGestureRecognizerActionDelegate>
{
    NSString * _title; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
    UIStackView * _stackView; // +0x20
    id /* block */ _tapHandler; // +0x28
    MMCellTapGestureRecognizer * _tapGesture; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)setTitle:(id)arg1;
- (void)setTapHandler:(id /* block */)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)tapGesture;
- (void)onTap:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (id /* block */)tapHandler;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

