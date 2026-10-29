@interface MinimizeDraggableTaskView : UIView <MMWebImageViewDelegate, MinimizeDetailTaskListViewInterface, MoveWithTouchAlgorithmDelegate>
{
    id <MinimizeDraggableTaskViewDelegate> _m_delegate; // +0x8
    MinimizeTaskData * _taskData; // +0x10
    UIButton * _containerView; // +0x18
    UIView * _taskIcon; // +0x20
    UIColor * _gradientBackgroundColor; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _subTitleLabel; // +0x38
    UILabel * _titleTailLabel; // +0x40
    UILabel * _subTitleTailLabel; // +0x48
    double _titleMaxWidthWithCurrentState; // +0x50
    unsigned long long _positionType; // +0x58
    UIView * _shadowLayerView; // +0x60
    UIView * _shadowSubLayerView; // +0x68
    UIButton * _closeBtn; // +0x70
    MMUIButton * _controlBtn; // +0x78
    UIView * _whiteBackgroundView; // +0x80
    NSArray * _passiveStateIconList; // +0x88
    CAShapeLayer * _outterBorderLayer; // +0x90
    CAShapeLayer * _innerBorderLayer; // +0x98
    UIEdgeInsets _edgeInset; // +0xa0
    CGRect _frameBeforeMove; // +0xc0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updatePositionType:(unsigned long long)arg1;
- (unsigned long long)getPositionType:(CGRect)arg1;
- (id)getDefaultClipPath:(CGRect)arg1 positionType:(unsigned long long)arg2;
- (void)hideSubviewsWhenMaximizeBegin;
- (void)showSubviewsWhenMaximizeEnd;
- (void)hideShadow;
- (void)showShadow;
- (void)hideBackgroundColor;
- (void)showBackgroundColor;
- (void)hideIcon;
- (void)showIcon;
- (void)updateShadow:(BOOL)arg1 Duration:(double)arg2;
- (void)updateMask:(BOOL)arg1 Duration:(double)arg2;
- (void)updateMask:(BOOL)arg1 View:(id)arg2 Duration:(double)arg3;
- (void)onBtnClicked:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setTaskData:(id)arg1;
- (void)updateTask:(id)arg1 Subtitle:(id)arg2 titleTail:(id)arg3 subTitleTail:(id)arg4;
- (void)updateUI:(id)arg1 Subtitle:(id)arg2 titleTail:(id)arg3 subTitleTail:(id)arg4;
- (double)closeBtnRightMargin;
- (double)taskIconLeftMargin;
- (void)resetAllView;
- (void)removeShadowAndAddBorder;
- (void)resetBorderLayer;
- (void)resetBorderLayerWhenTraitCollectionDidChange;
- (CGRect)calcFrame:(CGRect)arg1 withInsets:(UIEdgeInsets)arg2;
- (void)updateBorderLayer:(id)arg1 VisibleFrame:(CGRect)arg2 PositionType:(unsigned long long)arg3 BorderColor:(id)arg4 BorderWidth:(double)arg5;
- (void)onCloseBtnClicked:(id)arg1;
- (void)setCloseBtnVisible:(BOOL)arg1;
- (BOOL)isEqualToTaskKey:(id)arg1;
- (BOOL)isSupportLongPress;
- (BOOL)shouldHighlightForLongPressWithPoint:(CGPoint)arg1;
- (void)setHighlightForLongPress:(BOOL)arg1 scale:(double)arg2;
- (void)longPressed;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)taskData;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)taskIcon;
- (void)setTaskIcon:(id)arg1;
- (id)gradientBackgroundColor;
- (void)setGradientBackgroundColor:(id)arg1;
- (UIEdgeInsets)edgeInset;
- (void)setEdgeInset:(UIEdgeInsets)arg1;
- (CGRect)frameBeforeMove;
- (void)setFrameBeforeMove:(CGRect)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)titleTailLabel;
- (void)setTitleTailLabel:(id)arg1;
- (id)subTitleTailLabel;
- (void)setSubTitleTailLabel:(id)arg1;
- (double)titleMaxWidthWithCurrentState;
- (void)setTitleMaxWidthWithCurrentState:(double)arg1;
- (unsigned long long)positionType;
- (void)setPositionType:(unsigned long long)arg1;
- (id)shadowLayerView;
- (void)setShadowLayerView:(id)arg1;
- (id)shadowSubLayerView;
- (void)setShadowSubLayerView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)controlBtn;
- (void)setControlBtn:(id)arg1;
- (id)whiteBackgroundView;
- (void)setWhiteBackgroundView:(id)arg1;
- (id)passiveStateIconList;
- (void)setPassiveStateIconList:(id)arg1;
- (id)outterBorderLayer;
- (void)setOutterBorderLayer:(id)arg1;
- (id)innerBorderLayer;
- (void)setInnerBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end

