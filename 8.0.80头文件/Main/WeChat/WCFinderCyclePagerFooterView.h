@interface WCFinderCyclePagerFooterView : UICollectionReusableView
{
    unsigned long long _type; // +0x8
    UILabel * _label; // +0x10
    UIImageView * _iconImageView; // +0x18
    WCFinderAnimationLoadingView * _loadingView; // +0x20
}
- (void)updateType:(unsigned long long)arg1;
- (id)label;
- (id)iconImageView;
- (id)loadingView;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
