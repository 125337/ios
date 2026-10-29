@interface GCImageCardNativeCell : GCChatBaseCell
{
    UIView * _containerView; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    MMUILabel * _descLabel; // +0x18
    UIImageView * _playIcon; // +0x20
}
+ (void)onCalculatLayoutInfo:(id)arg1;
+ (CGSize)innerContentSizeForImageCard:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)playIcon;
- (void)setPlayIcon:(id)arg1;
- (void).cxx_destruct;
@end

