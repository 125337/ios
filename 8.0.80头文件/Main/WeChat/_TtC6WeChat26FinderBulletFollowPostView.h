@interface _TtC6WeChat26FinderBulletFollowPostView : UIView
{
     data; // +0x8
     delegate; // +0x98
     exposureStart; // +0x0
     exposureEndPlayProcessTimeMs; // +0x0
     style; // +0x0
     interactiveView; // +0x0
     pressGesture; // +0x0
     pressProgressLink; // +0x0
     pressProgressStartTime; // +0x0
     isTouchInProgress; // +0x0
     actualFakeBulletCount; // +0x0
     totalFakeBulletCount; // +0x0
     animationStartPoint; // +0x0
     animationBulletCenter; // +0x0
     isEnterAnimating; // +0x0
     finalInteractionRect; // +0x0
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)updateFinalInteractionRect:(CGRect)arg1;
- (BOOL)containsProtectedPoint:(CGPoint)arg1;
- (void)handlePressGesture:(id)arg1;
- (void)stepPressProgress;
- (void).cxx_destruct;
@end
