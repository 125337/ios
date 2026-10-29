@interface GCShareLinkCell : GCChatBaseCell
{
    UIView * _containerView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    MMWebImageView * _imageView; // +0x20
}
+ (void)onCalculatLayoutInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end

