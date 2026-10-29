@interface WCFinderUserRelationshipTag : UIView
{
    WCFinderUserRelationshipTagLabel * _leftTagLabel; // +0x8
    WCFinderUserRelationshipTagLabel * _rightTagLabel; // +0x10
    WCFinderUserRelationshipModel * _model; // +0x18
    CGSize _layoutSize; // +0x20
}
+ (void)setupLeftUserTagLabel:(id)arg1 rightUserTagLabel:(id)arg2 withModel:(id)arg3;
+ (CGSize)tagSizeWithModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)shouldShowTag;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)leftTagLabel;
- (void)setLeftTagLabel:(id)arg1;
- (id)rightTagLabel;
- (void)setRightTagLabel:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

