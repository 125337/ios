@interface WCXiaoweiTaskItemCell : UICollectionViewCell
{
    MMUIButton * _roundedContainer; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
    XiaoweiTaskInfo * _model; // +0x20
    id <WCXiaoweiTaskItemCellDelegate> _delegate; // +0x28
}
+ (id)LabelFont;
+ (double)WidthToFitTitle:(id)arg1;
+ (CGSize)ArrowSize;
+ (CGSize)SizeToFitModel:(id)arg1;
+ (double)CellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)updateWithModel:(id)arg1;
- (void)onTapContainer:(id)arg1;
- (void)layoutSubviews;
- (id)model;
- (void)setModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
