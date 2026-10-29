@interface WCFinderSearchContactContainerReusableView : UICollectionReusableView
{
    WCFinderSearchContactReusableView * _contactView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (void).cxx_destruct;
@end
