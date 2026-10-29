@interface MMAssetPickerSlider : MMUIView
{
    BOOL _isActive; // +0x8
    BOOL _isThumbViewDragging; // +0x9
    BOOL _isAssetPickerDragging; // +0xa
    BOOL _isThumbViewAnimating; // +0xb
    BOOL _isHiddenSliderTopMask; // +0xc
    double _value; // +0x10
    id <MMAssetPickerSliderDelegate> _delegate; // +0x18
    double _beginDragValue; // +0x20
    MMAssetPickerSliderThumbView * _thumbView; // +0x28
    MMUILabel * _timeLabel; // +0x30
    CAGradientLayer * _backgroundLayer; // +0x38
    NSDate * _lastDate; // +0x40
    UIEdgeInsets _thumbViewEdgeInset; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 thumbViewEdgeInset:(UIEdgeInsets)arg2;
- (id)initWithFrame:(CGRect)arg1 thumbViewEdgeInset:(UIEdgeInsets)arg2 hiddenSliderTopMask:(BOOL)arg3;
- (void)updateThumbViewEdgeInset:(UIEdgeInsets)arg1;
- (void)onAssetPickerDidScroll:(id)arg1;
- (void)onAssetPickerWillBeginDragging:(id)arg1;
- (void)onAssetPickerDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateTimeLabelText:(id)arg1;
- (void)initView;
- (void)initThumbView;
- (CGRect)thumbViewFrame:(BOOL)arg1 value:(double)arg2;
- (void)initTimeLabel;
- (void)initBackgroundLayer;
- (double)maxThumbViewMoveDistanceWithThumbViewSize:(CGSize)arg1;
- (void)performThumbViewActiveAnimationWithCompletion:(id /* block */)arg1;
- (void)performThumbViewNormalAnimationWithCompletion:(id /* block */)arg1;
- (void)performThumbViewShowAnimation;
- (void)performThumbViewHiddenAnimation;
- (void)performTimeLabelShowAnimation;
- (void)performTimeLabelHiddenAnimation;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)setValue:(double)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)onThumbViewDragging:(id)arg1;
- (void)onActiveDurationTimeUp;
- (void)layoutSubviews;
- (void)updateThumbViewFrame;
- (void)updateTimeLabelFrame;
- (double)value;
- (BOOL)isActive;
- (BOOL)isThumbViewDragging;
- (void)setIsThumbViewDragging:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)beginDragValue;
- (void)setBeginDragValue:(double)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (UIEdgeInsets)thumbViewEdgeInset;
- (void)setThumbViewEdgeInset:(UIEdgeInsets)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (BOOL)isAssetPickerDragging;
- (void)setIsAssetPickerDragging:(BOOL)arg1;
- (id)lastDate;
- (void)setLastDate:(id)arg1;
- (BOOL)isThumbViewAnimating;
- (void)setIsThumbViewAnimating:(BOOL)arg1;
- (BOOL)isHiddenSliderTopMask;
- (void)setIsHiddenSliderTopMask:(BOOL)arg1;
- (void).cxx_destruct;
@end

