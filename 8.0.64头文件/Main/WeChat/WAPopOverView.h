@interface WAPopOverView : MMUIView
{
    BOOL _isDismissForbidAnimation; // +0x8
    BOOL _constraitByContainer; // +0x9
    MMUIViewController * _containerVC; // +0x10
    long long _containerViewOrientation; // +0x18
    UIView * _interateView; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIView * _containerView; // +0x30
    WAPopOverTaskBarView * _taskBarView; // +0x38
    WAPopOverTaskBarlogic * _logic; // +0x40
    UIView * _parentView; // +0x48
    CGSize _preferedContentSize; // +0x50
}
+ (double)getPopOverWidth;
- (id)initWithWAPopOverTaskLogic:(id)arg1;
- (void)dealloc;
- (void)showInView:(id)arg1 atPoint:(CGPoint)arg2 completion:(id /* block */)arg3;
- (double)getPopOverWidthConstriatByContainer;
- (void)dismissWithAnimation;
- (void)initContainerView;
- (void)initArrowImageView;
- (void)initInterateView;
- (void)didRotate:(id)arg1;
- (BOOL)isDismissForbidAnimation;
- (void)setIsDismissForbidAnimation:(BOOL)arg1;
- (id)containerVC;
- (void)setContainerVC:(id)arg1;
- (CGSize)preferedContentSize;
- (void)setPreferedContentSize:(CGSize)arg1;
- (BOOL)constraitByContainer;
- (void)setConstraitByContainer:(BOOL)arg1;
- (long long)containerViewOrientation;
- (void)setContainerViewOrientation:(long long)arg1;
- (id)interateView;
- (void)setInterateView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)taskBarView;
- (void)setTaskBarView:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end
