@interface MinimizeTaskStateView : UIView <MinimizeDetailTaskListViewInterface>
{
    unsigned int _taskState; // +0x8
    id <MinimizeTaskStateViewDelegate> _m_delegate; // +0x10
    MinimizeTaskData * _taskData; // +0x18
    UILabel * _titleLabel; // +0x20
    unsigned long long _positionType; // +0x28
    UIButton * _closeBtn; // +0x30
    UIView * _entryBtn; // +0x38
    MinimizeAnimateStateBaseView * _stateView; // +0x40
    UIView * _touchArea; // +0x48
    UIEdgeInsets _edgeInset; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)isEqualToTaskKey:(id)arg1;
- (unsigned long long)getPositionType:(CGRect)arg1;
- (void)updatePositionType:(unsigned long long)arg1;
- (void)updateMask:(BOOL)arg1 Duration:(double)arg2;
- (id)getDefaultClipPath:(CGRect)arg1 positionType:(unsigned long long)arg2;
- (void)addCloseButton;
- (void)addTouchArea;
- (void)addTitleLabel;
- (void)addEntryButton;
- (void)setTaskData:(id)arg1;
- (void)setTaskState:(unsigned int)arg1;
- (void)resetAllView;
- (void)hideSubviewsWhenMaximizeBegin;
- (void)showSubviewsWhenMaximizeEnd;
- (void)updateTitle:(id)arg1;
- (double)closeBtnRightMargin;
- (double)taskIconLeftMargin;
- (void)setCloseBtnVisible:(BOOL)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)onEntryBtnClicked:(id)arg1;
- (BOOL)isSupportLongPress;
- (BOOL)shouldHighlightForLongPressWithPoint:(CGPoint)arg1;
- (void)setHighlightForLongPress:(BOOL)arg1 scale:(double)arg2;
- (void)longPressed;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)taskData;
- (unsigned int)taskState;
- (UIEdgeInsets)edgeInset;
- (void)setEdgeInset:(UIEdgeInsets)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (unsigned long long)positionType;
- (void)setPositionType:(unsigned long long)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)entryBtn;
- (void)setEntryBtn:(id)arg1;
- (id)stateView;
- (void)setStateView:(id)arg1;
- (id)touchArea;
- (void)setTouchArea:(id)arg1;
- (void).cxx_destruct;
@end

