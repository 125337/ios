@interface WCFinderProfilePaidCollectionCollectionCell : UICollectionViewCell
{
    WCFinderProfilePaidCollectionCellContentView * _courseContentView; // +0x8
}
+ (double)cellHeightWithPaidCollection:(id)arg1 width:(double)arg2;
+ (double)inlineSeperatorLeftInset;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWithPaidCollectin:(id)arg1;
- (id)courseContentView;
- (void)setCourseContentView:(id)arg1;
- (void).cxx_destruct;
@end
