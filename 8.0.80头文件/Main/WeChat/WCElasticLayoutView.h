@interface WCElasticLayoutView : UIView
{
    BOOL _isExpanded; // +0x8
    BOOL _shrinkable; // +0x9
    BOOL _expandable; // +0xa
    UIView * _anchorView; // +0x10
    UIView * _followView; // +0x18
    id <WCElasticLayoutViewDelegate> _delegate; // +0x20
    CGRect _shrinkBounds; // +0x28
    CGRect _expandBounds; // +0x48
}
+ (CGRect)_getContainerFrameForAnchorView:(id)arg1 andFollowView:(id)arg2;
- (id)initWithAnchorView:(id)arg1 followView:(id)arg2;
- (void)updateShrinkBoundsByCenter:(CGPoint)arg1;
- (void)updateExpandBoundsByCenter:(CGPoint)arg1;
- (void)shrinkAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)expandAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_shrinkAndHideFollowView;
- (void)_expandAndShowFollowView;
- (id)anchorView;
- (void)setAnchorView:(id)arg1;
- (id)followView;
- (void)setFollowView:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shrinkable;
- (void)setShrinkable:(BOOL)arg1;
- (BOOL)expandable;
- (void)setExpandable:(BOOL)arg1;
- (CGRect)shrinkBounds;
- (void)setShrinkBounds:(CGRect)arg1;
- (CGRect)expandBounds;
- (void)setExpandBounds:(CGRect)arg1;
- (void).cxx_destruct;
@end
