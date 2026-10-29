@interface WXMASViewConstraint : WXMASConstraint <NSCopying>
{
    BOOL _hasLayoutRelation; // +0x8
    BOOL _useAnimator; // +0x9
    float _layoutPriority; // +0xc
    WXMASViewAttribute * _firstViewAttribute; // +0x10
    WXMASViewAttribute * _secondViewAttribute; // +0x18
    UIView * _installedView; // +0x20
    WXMASLayoutConstraint * _layoutConstraint; // +0x28
    long long _layoutRelation; // +0x30
    double _layoutMultiplier; // +0x38
    double _layoutConstant; // +0x40
    id _mas_key; // +0x48
}
+ (id)installedConstraintsForView:(id)arg1;
- (id)initWithFirstViewAttribute:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setLayoutConstant:(double)arg1;
- (void)setLayoutRelation:(long long)arg1;
- (BOOL)supportsActiveProperty;
- (BOOL)isActive;
- (BOOL)hasBeenInstalled;
- (void)setSecondViewAttribute:(id)arg1;
- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)priority;
- (id /* block */)equalToWithRelation;
- (id)with;
- (id)and;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id /* block */)key;
- (void)setInsets:(UIEdgeInsets)arg1;
- (void)setInset:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setSizeOffset:(CGSize)arg1;
- (void)setCenterOffset:(CGPoint)arg1;
- (void)activate;
- (void)deactivate;
- (void)install;
- (id)layoutConstraintSimilarTo:(id)arg1;
- (void)uninstall;
- (id)firstViewAttribute;
- (id)secondViewAttribute;
- (id)installedView;
- (void)setInstalledView:(id)arg1;
- (id)layoutConstraint;
- (void)setLayoutConstraint:(id)arg1;
- (long long)layoutRelation;
- (float)layoutPriority;
- (void)setLayoutPriority:(float)arg1;
- (double)layoutMultiplier;
- (void)setLayoutMultiplier:(double)arg1;
- (double)layoutConstant;
- (BOOL)hasLayoutRelation;
- (void)setHasLayoutRelation:(BOOL)arg1;
- (id)mas_key;
- (void)setMas_key:(id)arg1;
- (BOOL)useAnimator;
- (void)setUseAnimator:(BOOL)arg1;
- (void).cxx_destruct;
@end

