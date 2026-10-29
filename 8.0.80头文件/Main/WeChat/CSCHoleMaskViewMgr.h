@interface CSCHoleMaskViewMgr : NSObject
{
    UIButton * _leftMaskView; // +0x8
    UIButton * _topMaskView; // +0x10
    UIButton * _rightMaskView; // +0x18
    UIButton * _bottomMaskView; // +0x20
    id /* block */ _clickBlock; // +0x28
}
- (id)initWithSuperview:(id)arg1 andHoleFrame:(CGRect)arg2 andClickBlock:(id /* block */)arg3;
- (void)setMaskViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupMaskViewsWithSuperview:(id)arg1 andHoleFrame:(CGRect)arg2;
- (void)onClickMaskView;
- (void)dealloc;
- (id)leftMaskView;
- (void)setLeftMaskView:(id)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)rightMaskView;
- (void)setRightMaskView:(id)arg1;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
