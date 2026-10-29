@interface EnterpriseSearchContactCell : MMTableViewCell
{
    MMHeadImageView * _headImageView; // +0x8
    AttributeLabel * _displayNameLabel; // +0x10
    AttributeLabel * _detailLabel; // +0x18
    UIView * _separatorBottomView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateEnterpriseSearchCellWithData:(id)arg1 isLastCell:(BOOL)arg2;
- (void).cxx_destruct;
@end

