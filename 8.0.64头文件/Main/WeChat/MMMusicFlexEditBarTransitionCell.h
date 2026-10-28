@interface MMMusicFlexEditBarTransitionCell : MMUIView
{
    id <MMMusicFlexEditBarTransitionCellDelegate> _delegate; // +0x8
    unsigned long long _preIndex; // +0x10
    unsigned long long _nextIndex; // +0x18
    UIView * _transitionImgContainerView; // +0x20
    UIImageView * _transitionImgView; // +0x28
    UIImage * _transitionImgForModify; // +0x30
    UIImage * _transitionImgForNotModify; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)internalInit;
- (void)updateWithPreIndex:(unsigned long long)arg1 nextIndex:(unsigned long long)arg2 isModify:(BOOL)arg3;
- (void)setTransitionIconHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onTapGes:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)preIndex;
- (void)setPreIndex:(unsigned long long)arg1;
- (unsigned long long)nextIndex;
- (void)setNextIndex:(unsigned long long)arg1;
- (id)transitionImgContainerView;
- (void)setTransitionImgContainerView:(id)arg1;
- (id)transitionImgView;
- (void)setTransitionImgView:(id)arg1;
- (id)transitionImgForModify;
- (void)setTransitionImgForModify:(id)arg1;
- (id)transitionImgForNotModify;
- (void)setTransitionImgForNotModify:(id)arg1;
- (void).cxx_destruct;
@end
