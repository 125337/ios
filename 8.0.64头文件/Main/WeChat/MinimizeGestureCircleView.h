@interface MinimizeGestureCircleView : UIView
{
    BOOL _selected; // +0x8
    BOOL _forVoiceMsg; // +0x9
    UILabel * _minimizeLabel; // +0x10
    UIImageView * _minimizeIconView; // +0x18
    UIView * _currentMaskView; // +0x20
    MinimizeGesBlurCircleView * _blurEffectView; // +0x28
    UIImageView * _cannotMinimizeIconView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initBlurEffectView;
- (void)initMinimizeLabel;
- (void)initMinimizeIconView;
- (void)initSelectedMaskView;
- (void)initCannotMinimizeView;
- (void)layoutSubviews;
- (void)changeToCanAddTaskState:(BOOL)arg1 forVoiceMsg:(BOOL)arg2;
- (void)changeToSelectedState;
- (void)resertNormalState;
- (double)circleIconSize;
- (double)circleSelectIconSize;
- (double)circleRadius;
- (double)circleHightlightedRadius;
- (double)circleContentBottomMargin;
- (double)circleContentRightMargin;
- (id)circleTitle;
- (id)normalCircleIconImage;
- (id)selectedCircleIconImage;
- (id)cannotAddNormalCircleIconImage;
- (id)cannotAddSelectedCircleIconImage;
- (double)canTouchRadius;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)forVoiceMsg;
- (void)setForVoiceMsg:(BOOL)arg1;
- (id)minimizeLabel;
- (void)setMinimizeLabel:(id)arg1;
- (id)minimizeIconView;
- (void)setMinimizeIconView:(id)arg1;
- (id)currentMaskView;
- (void)setCurrentMaskView:(id)arg1;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg1;
- (id)cannotMinimizeIconView;
- (void)setCannotMinimizeIconView:(id)arg1;
- (void).cxx_destruct;
@end
