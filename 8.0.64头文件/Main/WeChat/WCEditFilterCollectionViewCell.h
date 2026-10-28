@interface WCEditFilterCollectionViewCell : UICollectionViewCell
{
    UIImage * _filterImage; // +0x8
    NSString * _filterName; // +0x10
    UIImageView * _filterImageView; // +0x18
    UIView * _maskView; // +0x20
    UIImageView * _toolView; // +0x28
    UILabel * _filterNameLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)filterImageView;
- (id)maskView;
- (id)toolView;
- (id)filterNameLabel;
- (void)setFilterImage:(id)arg1;
- (void)setFilterName:(id)arg1;
- (void)showMaskView:(BOOL)arg1 toolView:(BOOL)arg2;
- (id)filterImage;
- (id)filterName;
- (void)setFilterImageView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setToolView:(id)arg1;
- (void)setFilterNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
