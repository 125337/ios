@interface MMLiveQcPollPageSheetCollectionViewCell : UICollectionViewCell
{
    MMLiveQcPollResponseOption * _option; // +0x8
    UIView * _containerView; // +0x10
    UILabel * _label; // +0x18
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setOption:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)option;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
