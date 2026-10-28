@interface FTSFeatureCell : MMTableViewCell
{
    FTSFeatureItem * _featureItem; // +0x8
    SearchMatchTip * _matchTip; // +0x10
    MMBrandHeadImageView * _thumbImageView; // +0x18
    AttributeLabel * _titleLabel; // +0x20
    AttributeLabel * _detailLabel; // +0x28
    BOOL _bAsTopHit; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateStatus:(BOOL)arg1;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2 asTopHit:(BOOL)arg3;
- (void)layoutSubviews;
- (id)getTopHitDescrpition;
- (id)featureItem;
- (void).cxx_destruct;
@end
