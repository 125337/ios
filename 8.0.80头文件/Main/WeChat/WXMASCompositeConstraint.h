@interface WXMASCompositeConstraint : WXMASConstraint <WXMASConstraintDelegate>
{
    id _mas_key; // +0x8
    NSMutableArray * _childConstraints; // +0x10
}
- (id)initWithChildren:(id)arg1;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)priority;
- (id /* block */)equalToWithRelation;
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
- (void)uninstall;
- (id)mas_key;
- (void)setMas_key:(id)arg1;
- (id)childConstraints;
- (void)setChildConstraints:(id)arg1;
- (void).cxx_destruct;
@end
