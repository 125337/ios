@interface MMUILongPressImageView : MMUIImageView <MMUIFastTapGestureRecognizerDelegate>
{
    BOOL _enableHighlighted; // +0x8
    BOOL _showsTouchWhenHighlighted; // +0x9
    BOOL _wxHighlighted; // +0xa
    BOOL _wxHighlightedImageDirtyMark; // +0xb
    id <LongPressImageViewDelegate> _delegate; // +0x10
    unsigned long long _supportedActions; // +0x18
    NSString * _contextString; // +0x20
    MMUIFastTapGestureRecognizer * _singleTapGesture; // +0x28
    MMUIFastTapGestureRecognizer * _doubleTapGesture; // +0x30
    UILongPressGestureRecognizer * _longPressGesture; // +0x38
    UIImageView * _wxHighlightedImageView; // +0x40
}
+ (void)initialize;
- (id)initWithImage:(id)arg1;
- (id)init;
- (void)initGestures;
- (void)setImage:(id)arg1;
- (void)setEnableHighlighted:(BOOL)arg1;
- (void)setWxHighlighted:(BOOL)arg1;
- (void)setSupportedActions:(unsigned long long)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)setContextString:(id)arg1;
- (void)cancelAllGestures;
- (id)wxHighlightedImageView;
- (void)tapGestureRecognizerBegan:(id)arg1 tapCount:(unsigned long long)arg2;
- (void)tapGestureRecognizerFinished:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)getContextString;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)supportedActions;
- (BOOL)enableHighlighted;
- (BOOL)showsTouchWhenHighlighted;
- (void)setShowsTouchWhenHighlighted:(BOOL)arg1;
- (BOOL)isWxHighlighted;
- (id)contextString;
- (id)singleTapGesture;
- (void)setSingleTapGesture:(id)arg1;
- (id)doubleTapGesture;
- (void)setDoubleTapGesture:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (void)setWxHighlightedImageView:(id)arg1;
- (BOOL)wxHighlightedImageDirtyMark;
- (void)setWxHighlightedImageDirtyMark:(BOOL)arg1;
- (void).cxx_destruct;
@end

