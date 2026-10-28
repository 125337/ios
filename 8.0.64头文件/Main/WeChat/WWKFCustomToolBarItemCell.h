@interface WWKFCustomToolBarItemCell : UICollectionViewCell
{
    MMUIButton * _roundedContainer; // +0x8
    MMWebImageView * _headView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    NSString * _lastImageUrl; // +0x20
    COpenIMCustomToolBarItem * _model; // +0x28
    id <WWKFCustomToolBarItemCellDelegate> _delegate; // +0x30
}
+ (id)LabelFont;
+ (double)WidthToFitTitle:(id)arg1;
+ (CGSize)SizeToFitModel:(id)arg1;
+ (double)CellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initViews;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)onTapContainer:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
