@interface FTSFeatureContactCell : FTSFeatureCell
{
    CContact * _contact; // +0x30
    MMHeadImageView * _headImageView; // +0x38
    MMBrandHeadImageView * _brandHeadImageView; // +0x40
    MMImageView * _iconNamePostfix; // +0x48
    MMUILabel * _labelNamePostfix; // +0x50
    AttributeLabel * _displayNameLabel; // +0x58
    BOOL _bAsTopHit; // +0x60
    UIImageView * _maskView; // +0x68
    UIImage * m_defaultOpenimGroupIcon; // +0x70
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)prepareForReuse;
- (void)resetReusableState;
- (id)getTopHitDescrpition;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateStatus:(BOOL)arg1;
- (void)updateIconNamePostfix;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2 asTopHit:(BOOL)arg3;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
