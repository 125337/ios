@interface MJComposingMusicClipView : UIView
{
    MJComposingMusicClipViewModel * _viewModel; // +0x8
    id <MJComposingMusicClipViewDelegate> _delegate; // +0x10
    long long _state; // +0x18
    double _playProgress; // +0x20
    UIView * _grabBarView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _startLabel; // +0x38
    UILabel * _startTimeLabel; // +0x40
    UILabel * _durationLabel; // +0x48
    UILabel * _durationTimeLabel; // +0x50
    UIStackView * _startStack; // +0x58
    UIStackView * _durationStack; // +0x60
    UIStackView * _timeContainer; // +0x68
    MJComposingMusicClipWaveformView * _waveformView; // +0x70
    UIView * _editingBorderView; // +0x78
    UIView * _selectionTopLine; // +0x80
    UIView * _selectionBottomLine; // +0x88
    UIView * _leftHandle; // +0x90
    UIView * _rightHandle; // +0x98
    UIView * _leftHandleGrip; // +0xa0
    UIView * _rightHandleGrip; // +0xa8
    long long _dragTarget; // +0xb0
    double _selectionLeftAtDragStart; // +0xb8
    double _selectionRightAtDragStart; // +0xc0
    double _selectionLeft; // +0xc8
    double _selectionRight; // +0xd0
    double _lastWaveformWidth; // +0xd8
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)setState:(long long)arg1;
- (void)setPlayProgress:(double)arg1;
- (void)p_setupUI;
- (double)p_minClipWidthForWaveformWidth:(double)arg1;
- (void)p_normalizeSelectionForWaveformWidth:(double)arg1;
- (void)p_initSelectionIfNeeded;
- (void)p_layoutSelection;
- (void)p_handlePan:(id)arg1;
- (long long)p_dragTargetForPoint:(CGPoint)arg1;
- (CGRect)p_expandedTouchRectForHandleFrame:(CGRect)arg1;
- (void)p_applyDrag:(double)arg1;
- (void)p_updateTimeLabels;
- (void)p_currentTrimStart:(struct *)arg1 duration:(struct *)arg2 endTime:(struct *)arg3;
- (id)p_formatTime:(struct)arg1;
- (void)p_updateStateUI;
- (void)p_notifyDelegateStart;
- (void)p_notifyDelegateChange;
- (void)p_notifyDelegateFinish;
- (id)p_makeCaptionLabelWithText:(id)arg1;
- (id)p_makeTimeLabelWithText:(id)arg1;
- (id)p_makeSelectionRail;
- (id)p_makeHandleRoundedOnLeft:(BOOL)arg1;
- (id)p_makeHandleGrip;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (double)playProgress;
- (id)grabBarView;
- (void)setGrabBarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)startLabel;
- (void)setStartLabel:(id)arg1;
- (id)startTimeLabel;
- (void)setStartTimeLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)durationTimeLabel;
- (void)setDurationTimeLabel:(id)arg1;
- (id)startStack;
- (void)setStartStack:(id)arg1;
- (id)durationStack;
- (void)setDurationStack:(id)arg1;
- (id)timeContainer;
- (void)setTimeContainer:(id)arg1;
- (id)waveformView;
- (void)setWaveformView:(id)arg1;
- (id)editingBorderView;
- (void)setEditingBorderView:(id)arg1;
- (id)selectionTopLine;
- (void)setSelectionTopLine:(id)arg1;
- (id)selectionBottomLine;
- (void)setSelectionBottomLine:(id)arg1;
- (id)leftHandle;
- (void)setLeftHandle:(id)arg1;
- (id)rightHandle;
- (void)setRightHandle:(id)arg1;
- (id)leftHandleGrip;
- (void)setLeftHandleGrip:(id)arg1;
- (id)rightHandleGrip;
- (void)setRightHandleGrip:(id)arg1;
- (long long)dragTarget;
- (void)setDragTarget:(long long)arg1;
- (double)selectionLeftAtDragStart;
- (void)setSelectionLeftAtDragStart:(double)arg1;
- (double)selectionRightAtDragStart;
- (void)setSelectionRightAtDragStart:(double)arg1;
- (double)selectionLeft;
- (void)setSelectionLeft:(double)arg1;
- (double)selectionRight;
- (void)setSelectionRight:(double)arg1;
- (double)lastWaveformWidth;
- (void)setLastWaveformWidth:(double)arg1;
- (void).cxx_destruct;
@end
