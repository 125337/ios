@interface WCFinderProfilePaidCollectionTableCell : UITableViewCell
{
    BOOL _isLastCell; // +0x8
    WCFinderProfilePaidCollectionCellContentView * _courseContentView; // +0x10
    UIView * _bottomSeperator; // +0x18
}
+ (double)cellHeightWithPaidCollection:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWithPaidCollection:(id)arg1 isLastCell:(BOOL)arg2;
- (void)layoutSeperator;
- (id)courseContentView;
- (void)setCourseContentView:(id)arg1;
- (id)bottomSeperator;
- (void)setBottomSeperator:(id)arg1;
- (BOOL)isLastCell;
- (void)setIsLastCell:(BOOL)arg1;
- (void).cxx_destruct;
@end

