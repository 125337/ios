@interface WXMASConstraintMaker : NSObject <WXMASConstraintDelegate>
{
    BOOL _updateExisting; // +0x8
    BOOL _removeExisting; // +0x9
    UIView * _view; // +0x10
    NSMutableArray * _constraints; // +0x18
}
- (id)initWithView:(id)arg1;
- (id)install;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (id)addConstraintWithAttributes:(long long)arg1;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)left;
- (id)top;
- (id)right;
- (id)bottom;
- (id)leading;
- (id)trailing;
- (id)width;
- (id)height;
- (id)centerX;
- (id)centerY;
- (id)baseline;
- (id /* block */)attributes;
- (id)firstBaseline;
- (id)lastBaseline;
- (id)leftMargin;
- (id)rightMargin;
- (id)topMargin;
- (id)bottomMargin;
- (id)leadingMargin;
- (id)trailingMargin;
- (id)centerXWithinMargins;
- (id)centerYWithinMargins;
- (id)edges;
- (id)size;
- (id)center;
- (id /* block */)group;
- (BOOL)updateExisting;
- (void)setUpdateExisting:(BOOL)arg1;
- (BOOL)removeExisting;
- (void)setRemoveExisting:(BOOL)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)constraints;
- (void)setConstraints:(id)arg1;
- (void).cxx_destruct;
@end

