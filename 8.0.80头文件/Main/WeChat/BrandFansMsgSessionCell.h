@interface BrandFansMsgSessionCell : MMBaseSessionTableViewCell
{
    BrandFansMsgSessionCellViewModel * _viewModel; // +0x48
}
+ (id)reuseIdentifier;
- (id)createMsgLabel;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
@end
