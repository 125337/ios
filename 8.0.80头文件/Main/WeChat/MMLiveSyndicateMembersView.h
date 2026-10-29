@interface MMLiveSyndicateMembersView : UIView
{
    NSArray * _members; // +0x8
    NSMutableArray * _memberViews; // +0x10
}
- (void)setMembers:(id)arg1;
- (void)layoutSubviews;
- (void)updateMembers;
- (double)thetaWithDimension:(double)arg1 interval:(double)arg2 spacing:(double)arg3;
- (CGPath *)createTrailingOutlineWithDimension:(double)arg1;
- (CGPath *)createOutlineWithDimension:(double)arg1 interval:(double)arg2 spacing:(double)arg3 theta:(double)arg4;
- (id)createMaskLayerWithPath:(CGPath *)arg1;
- (id)members;
- (id)memberViews;
- (void)setMemberViews:(id)arg1;
- (void).cxx_destruct;
@end
