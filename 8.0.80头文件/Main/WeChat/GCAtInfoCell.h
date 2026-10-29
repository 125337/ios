@interface GCAtInfoCell : GCBaseCollectionViewCell
{
    UIView * _leftSeperateLineView; // +0x8
    MMHeadImageView * _headView; // +0x10
    UILabel * _nickLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    UIImageView * _selectedImgView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)leftSeperateLineView;
- (void)setLeftSeperateLineView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)nickLabel;
- (void)setNickLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)selectedImgView;
- (void)setSelectedImgView:(id)arg1;
- (void).cxx_destruct;
@end
