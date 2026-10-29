@interface WCFinderProfileMJTempCell : UICollectionViewCell
{
    WCFinderProfileMJTempModel * _tempObj; // +0x8
    UIImageView * _coverView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
}
+ (double)displayHeightForContentVM:(id)arg1 width:(double)arg2 descFont:(id)arg3;
+ (double)imageDisplayScaleWithWidth:(double)arg1 height:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)doLayout;
- (void)setTempObj:(id)arg1;
- (id)tempObj;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
