@interface MinimizeTaskOuterContentView : UIView <MinimizeDetailTaskListViewInterface>
{
    id <MinimizeTaskOuterContentViewDelegate> _m_delegate; // +0x8
    MinimizeTaskData * _taskData; // +0x10
    unsigned long long _positionType; // +0x18
    UIView * _maskView; // +0x20
    UIView * _shadowLayerView; // +0x28
    UIView * _shadowSubLayerView; // +0x30
    UIButton * _highlightView; // +0x38
    UIView * _outerContentContainerView; // +0x40
    CAShapeLayer * _outterBorderLayer; // +0x48
    CAShapeLayer * _innerBorderLayer; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTaskData:(id)arg1;
- (BOOL)isEqualToTaskKey:(id)arg1;
- (void)attachOuterContentView;
- (BOOL)isOuterContentViewAttached;
- (unsigned long long)getPositionType:(CGRect)arg1;
- (void)updatePositionType:(unsigned long long)arg1;
- (void)updateOuterContentContainerView;
- (void)updateMask:(BOOL)arg1 Duration:(double)arg2;
- (void)updateShadow:(BOOL)arg1 Duration:(double)arg2;
- (id)getDefaultClipPath:(CGRect)arg1 positionType:(unsigned long long)arg2;
- (void)resetBorderLayer;
- (CGRect)calcFrame:(CGRect)arg1 withInsets:(UIEdgeInsets)arg2;
- (void)updateBorderLayer:(id)arg1 VisibleFrame:(CGRect)arg2 PositionType:(unsigned long long)arg3 BorderColor:(id)arg4 BorderWidth:(double)arg5;
- (void)setBackgroundViewHidden:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)hideSubviewsWhenMaximizeBegin;
- (void)showSubviewsWhenMaximizeEnd;
- (void)onBtnClicked:(id)arg1;
- (BOOL)isSupportLongPress;
- (void)longPressed;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)taskData;
- (unsigned long long)positionType;
- (void)setPositionType:(unsigned long long)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)shadowLayerView;
- (void)setShadowLayerView:(id)arg1;
- (id)shadowSubLayerView;
- (void)setShadowSubLayerView:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (id)outerContentContainerView;
- (void)setOuterContentContainerView:(id)arg1;
- (id)outterBorderLayer;
- (void)setOutterBorderLayer:(id)arg1;
- (id)innerBorderLayer;
- (void)setInnerBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end

