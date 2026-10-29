@interface WAAuthorizeUserIdPhoneCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    UILabel * _titleLabel; // +0x8
    UILabel * _detailLabel; // +0x10
    UIImageView * _markView; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)setMark:(BOOL)arg1;
- (void)setWXPhone:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)markView;
- (void)setMarkView:(id)arg1;
- (void).cxx_destruct;
@end
