@interface GCRoleInfoView : UIView
{
    UILabel * _roleTextLabel; // +0x8
    MMWebImageView * _roleIcon; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configWithCellModel:(id)arg1;
- (id)roleTextLabel;
- (void)setRoleTextLabel:(id)arg1;
- (id)roleIcon;
- (void)setRoleIcon:(id)arg1;
- (void).cxx_destruct;
@end
