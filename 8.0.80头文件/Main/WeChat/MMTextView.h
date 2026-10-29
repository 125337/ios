@interface MMTextView : MMUITextView <UITextPasteDelegate, UIGestureRecognizerDelegate, UIEditMenuInteractionDelegate>
{
    NSString * placeholder; // +0x8
    BOOL _shouldDrawPlaceholder; // +0x10
    id <textViewDelegate> m_delegate; // +0x18
    double _fForceY; // +0x20
    UIResponder * _overrideNextResponder; // +0x28
    BOOL _externalKeyboardAttatched; // +0x30
    BOOL _hasShowMenu; // +0x31
    BOOL _firstBecomeResponder; // +0x32
    long long _emojiSeq; // +0x38
    UIColor * m_textColor; // +0x40
    BOOL m_insertNumberLastTime; // +0x48
    BOOL _enablePasteMultiMedia; // +0x49
    BOOL _placeholderPinText; // +0x4a
    BOOL _placeholderMultiLine; // +0x4b
    BOOL _hideCursor; // +0x4c
    BOOL _bShowChangeLineMenu; // +0x4d
    BOOL _enableChangeLineMenu; // +0x4e
    BOOL _enableSetContentOffsetOnlyByMyself; // +0x4f
    BOOL _forceSetContentOffsetToForceY; // +0x50
    BOOL _bCenterAndAutoHidePlaceHolder; // +0x51
    BOOL _bCenterPlaceHolder; // +0x52
    BOOL _bShowEmoticon; // +0x53
    BOOL _usesRedesignLineSpacing; // +0x54
    BOOL _bDisabledChangeHeightWhenTextChange; // +0x55
    BOOL _enableListNumberCheck; // +0x56
    BOOL _forbidMenuItemShow; // +0x57
    BOOL _enableCursorDetect; // +0x58
    BOOL _isMovingCursor; // +0x59
    BOOL _needHidePlaceHolder; // +0x5a
    BOOL _dictationProtecting; // +0x5b
    BOOL _fixAccessibilitySelectedRangeFlag; // +0x5c
    BOOL _pasteFromExternalApp; // +0x5d
    BOOL _keyboardVisible; // +0x5e
    BOOL _keyboardPopupWhenMenuShown; // +0x5f
    BOOL _keyboardVisibleAtTouchBegin; // +0x60
    BOOL _touchBeganFired; // +0x61
    BOOL _hasTextWhenMenuShown; // +0x62
    BOOL _lastGestureWasLongPress; // +0x63
    BOOL _menuReshownBySelect; // +0x64
    int _chatScene; // +0x68
    int _inputScene; // +0x6c
    unsigned int _menuType; // +0x70
    UIColor * _placeHolderColor; // +0x78
    UIImage * _placeholderImage; // +0x80
    NSAttributedString * _attributedPlaceholder; // +0x88
    double _textViewOriginHeight; // +0x90
    id /* block */ _customCaretRectBlock; // +0x98
    id /* block */ _customDefaultTextAttributesBlock; // +0xa0
    NSString * _chatUserName; // +0xa8
    NSMutableSet * _allMenuTypes; // +0xb0
    NSArray * _arrExtMenuItem; // +0xb8
    double _centerPlaceHolderOffsetX; // +0xc0
    unsigned long long _textMenuReportType; // +0xc8
    UIFont * _placeholderFont; // +0xd0
    double _customLongPressGestureWidth; // +0xd8
    double _placeHolderHeight; // +0xe0
    MMTextPlaceholderView * _placeholderTransitionFromView; // +0xe8
    MMTextPlaceholderView * _placeholderTransitionToView; // +0xf0
    UIPanGestureRecognizer * _cursorMovingRecognizer; // +0xf8
    UILongPressGestureRecognizer * _longPressGesture; // +0x100
    long long _lastPasteType; // +0x108
    unsigned long long _lastPasteTextLength; // +0x110
    long long _menuTriggerType; // +0x118
    UILongPressGestureRecognizer * _menuTriggerDetectGesture; // +0x120
    _NSRange _selectedRangeBeforeMoved; // +0x128
    CGPoint _lastLongPressLocation; // +0x138
    UIEdgeInsets _touchInsets; // +0x148
    UIEdgeInsets _fixedContentInset; // +0x168
}
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentSize:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupMenuTriggerDetectGesture;
- (void)onMenuTriggerDetectGesture:(id)arg1;
- (void)willPresentEditMenuWithAnimator:(id)arg1;
- (void)willDismissEditMenuWithAnimator:(id)arg1;
- (void)setSize:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)fallbackToTextKit1;
- (void)setBShowEmoticon:(BOOL)arg1;
- (void)setCustomLongPressGestureWidth:(double)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)fixTextViewGestureRecognizer;
- (void)onTap:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (CGRect)placeholderFramePinnedToText;
- (void)_drawPlaceholder:(id)arg1;
- (void)_drawAttributePlaceholder:(id)arg1;
- (void)_updateShouldDrawPlaceholder;
- (BOOL)shouldShowPlaceholder;
- (void)_textChanged:(id)arg1;
- (void)dictationRecordingDidEnd;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)normalizedAttributedTextByEncodingEmoticons:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;
- (void)setCenterPlaceHolderOffsetX:(double)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setArrExtMenuItem:(id)arg1;
- (void)updateCurrentMenuItems;
- (void)updateCurrentMenuTypes;
- (void)updateMenuTypes:(SEL)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)isExtenalKeyboardAttatched;
- (id)nextResponder;
- (unsigned long long)getMenuTypeWithAction:(SEL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onMenuWillHide:(id)arg1;
- (void)onMenuDidShow:(id)arg1;
- (void)postTextChangeNotification;
- (id)text;
- (id)accessibilityValue;
- (void)cutTextWithLimitLength:(unsigned int)arg1;
- (void)cutAttributeTextWithLimitLength:(unsigned int)arg1;
- (_NSRange)getPlainTextSelectRange;
- (id)getPlainTextWithRange:(_NSRange)arg1;
- (id)generateEncodeEmojitionStringWithContent:(id)arg1;
- (void)encodeEmojitionWithAttributeString:(id)arg1;
- (id)generateWXEmojitionEncodeStringWithTag:(id)arg1 image:(id)arg2;
- (void)setTextColor:(id)arg1;
- (id)defaultTextAttributes;
- (BOOL)isPasteBoardContainMultiMedia:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copyWithReport:(BOOL)arg1;
- (void)copy:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)captureTextFromCamera:(id)arg1;
- (void)callSuperWithAction:(SEL)arg1 sender:(id)arg2;
- (void)_transliterateChinese:(id)arg1;
- (void)_accessibilitySpeak:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (CGRect)caretRectForPosition:(id)arg1;
- (void)changeLine;
- (void)fixNotifyKeyboard;
- (void)onWillPastedText:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)textPasteConfigurationSupporting:(id)arg1 performPasteOfAttributedString:(id)arg2 toRange:(id)arg3;
- (void)setHideCursor:(BOOL)arg1;
- (void)onWrap;
- (void)onSend:(id)arg1;
- (id)keyCommands;
- (void)reportMenuClick;
- (void)reportMenuAppear;
- (void)tryAppend:(id)arg1 targetMenuType:(unsigned long long)arg2 targetString:(id)arg3;
- (void)setSelectedRange:(_NSRange)arg1;
- (void)insertText:(id)arg1;
- (id)getInsertTextWithListNumberCheck:(id)arg1;
- (BOOL)isLine:(id)arg1 onlyContainListNumber:(id)arg2;
- (void)setPlaceholder:(id)arg1 animated:(BOOL)arg2;
- (void)setAttributedPlaceholder:(id)arg1 animated:(BOOL)arg2;
- (void)_placeholderDidSet:(id)arg1 attributedPlaceholder:(id)arg2 animated:(BOOL)arg3;
- (void)_animatePlaceholder:(id)arg1 attributedPlaceholder:(id)arg2;
- (id)_createdPlaceholderTransitionView;
- (void)_drawPlaceholder:(id)arg1 attributedPlaceholder:(id)arg2;
- (void)_setPlaceholder:(id)arg1 attributedPlaceholder:(id)arg2;
- (BOOL)accessibilityActivate;
- (void)tryFixAccessibilitySelectedRange;
- (void)fixAccessibilitySelectedRange;
- (void)setEnableCursorDetect:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)cursorMovingRecognized:(id)arg1;
- (void)beginFloatingCursorAtPoint:(CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(CGPoint)arg1;
- (void)endFloatingCursor;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)placeholder;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (double)fForceY;
- (void)setFForceY:(double)arg1;
- (id)overrideNextResponder;
- (void)setOverrideNextResponder:(id)arg1;
- (int)chatScene;
- (void)setChatScene:(int)arg1;
- (id)placeHolderColor;
- (void)setPlaceHolderColor:(id)arg1;
- (BOOL)enablePasteMultiMedia;
- (void)setEnablePasteMultiMedia:(BOOL)arg1;
- (id)placeholderImage;
- (void)setPlaceholderImage:(id)arg1;
- (BOOL)placeholderPinText;
- (void)setPlaceholderPinText:(BOOL)arg1;
- (BOOL)placeholderMultiLine;
- (void)setPlaceholderMultiLine:(BOOL)arg1;
- (id)attributedPlaceholder;
- (double)textViewOriginHeight;
- (void)setTextViewOriginHeight:(double)arg1;
- (BOOL)hideCursor;
- (id /* block */)customCaretRectBlock;
- (void)setCustomCaretRectBlock:(id /* block */)arg1;
- (id /* block */)customDefaultTextAttributesBlock;
- (void)setCustomDefaultTextAttributesBlock:(id /* block */)arg1;
- (int)inputScene;
- (void)setInputScene:(int)arg1;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (BOOL)bShowChangeLineMenu;
- (void)setBShowChangeLineMenu:(BOOL)arg1;
- (BOOL)enableChangeLineMenu;
- (void)setEnableChangeLineMenu:(BOOL)arg1;
- (unsigned int)menuType;
- (void)setMenuType:(unsigned int)arg1;
- (BOOL)enableSetContentOffsetOnlyByMyself;
- (void)setEnableSetContentOffsetOnlyByMyself:(BOOL)arg1;
- (BOOL)forceSetContentOffsetToForceY;
- (void)setForceSetContentOffsetToForceY:(BOOL)arg1;
- (id)allMenuTypes;
- (void)setAllMenuTypes:(id)arg1;
- (id)arrExtMenuItem;
- (BOOL)bCenterAndAutoHidePlaceHolder;
- (void)setBCenterAndAutoHidePlaceHolder:(BOOL)arg1;
- (BOOL)bCenterPlaceHolder;
- (void)setBCenterPlaceHolder:(BOOL)arg1;
- (double)centerPlaceHolderOffsetX;
- (BOOL)bShowEmoticon;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (BOOL)usesRedesignLineSpacing;
- (void)setUsesRedesignLineSpacing:(BOOL)arg1;
- (unsigned long long)textMenuReportType;
- (void)setTextMenuReportType:(unsigned long long)arg1;
- (BOOL)bDisabledChangeHeightWhenTextChange;
- (void)setBDisabledChangeHeightWhenTextChange:(BOOL)arg1;
- (BOOL)enableListNumberCheck;
- (void)setEnableListNumberCheck:(BOOL)arg1;
- (id)placeholderFont;
- (UIEdgeInsets)fixedContentInset;
- (void)setFixedContentInset:(UIEdgeInsets)arg1;
- (BOOL)forbidMenuItemShow;
- (void)setForbidMenuItemShow:(BOOL)arg1;
- (BOOL)enableCursorDetect;
- (BOOL)isMovingCursor;
- (void)setIsMovingCursor:(BOOL)arg1;
- (double)customLongPressGestureWidth;
- (double)placeHolderHeight;
- (void)setPlaceHolderHeight:(double)arg1;
- (BOOL)needHidePlaceHolder;
- (void)setNeedHidePlaceHolder:(BOOL)arg1;
- (BOOL)dictationProtecting;
- (void)setDictationProtecting:(BOOL)arg1;
- (BOOL)fixAccessibilitySelectedRangeFlag;
- (void)setFixAccessibilitySelectedRangeFlag:(BOOL)arg1;
- (id)placeholderTransitionFromView;
- (void)setPlaceholderTransitionFromView:(id)arg1;
- (id)placeholderTransitionToView;
- (void)setPlaceholderTransitionToView:(id)arg1;
- (_NSRange)selectedRangeBeforeMoved;
- (void)setSelectedRangeBeforeMoved:(_NSRange)arg1;
- (id)cursorMovingRecognizer;
- (void)setCursorMovingRecognizer:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (long long)lastPasteType;
- (void)setLastPasteType:(long long)arg1;
- (unsigned long long)lastPasteTextLength;
- (void)setLastPasteTextLength:(unsigned long long)arg1;
- (BOOL)pasteFromExternalApp;
- (void)setPasteFromExternalApp:(BOOL)arg1;
- (BOOL)keyboardVisible;
- (void)setKeyboardVisible:(BOOL)arg1;
- (BOOL)keyboardPopupWhenMenuShown;
- (void)setKeyboardPopupWhenMenuShown:(BOOL)arg1;
- (BOOL)keyboardVisibleAtTouchBegin;
- (void)setKeyboardVisibleAtTouchBegin:(BOOL)arg1;
- (BOOL)touchBeganFired;
- (void)setTouchBeganFired:(BOOL)arg1;
- (BOOL)hasTextWhenMenuShown;
- (void)setHasTextWhenMenuShown:(BOOL)arg1;
- (long long)menuTriggerType;
- (void)setMenuTriggerType:(long long)arg1;
- (id)menuTriggerDetectGesture;
- (void)setMenuTriggerDetectGesture:(id)arg1;
- (BOOL)lastGestureWasLongPress;
- (void)setLastGestureWasLongPress:(BOOL)arg1;
- (CGPoint)lastLongPressLocation;
- (void)setLastLongPressLocation:(CGPoint)arg1;
- (BOOL)menuReshownBySelect;
- (void)setMenuReshownBySelect:(BOOL)arg1;
- (void).cxx_destruct;
@end
