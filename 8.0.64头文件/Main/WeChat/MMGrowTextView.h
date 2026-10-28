@interface MMGrowTextView : MMUIView <MMDictationLogicIconDelegate, MMDictationLogicObserver, UITextFieldDelegate, UITextViewDelegate, UIScrollViewDelegate, textViewDelegate>
{
    id <MMGrowTextViewDelegate> m_delegate; // +0x8
    UIImageView * _backgroundView; // +0x10
    CGSize textViewMaxSize; // +0x18
    double _textViewMinHeight; // +0x28
    double _textViewOriginHeight; // +0x30
    UIEdgeInsets backgroundImageInsets; // +0x38
    MMTextView * _textView; // +0x58
    BOOL enabled; // +0x60
    _NSRange _selectedRange; // +0x68
    NSString * _extensionKey; // +0x78
    double _fKeyboardAnimationDuration; // +0x80
    long long _iKeyboardAnimationCurve; // +0x88
    BOOL _isKeyboardOwner; // +0x90
    CGRect _keyboardFrameInScreen; // +0x98
    timeval _last3rdKeyboardStartEventTime; // +0xb8
    int _changeCount; // +0xc8
    int _deleteCount; // +0xcc
    unsigned long long _firstInputTime; // +0xd0
    unsigned long long _lastInputTime; // +0xd8
    unsigned long long _sendTime; // +0xe0
    double _cachedKeyboardHeight; // +0xe8
    BOOL _usesRedesignLineSpacing; // +0xf0
    BOOL _donotNeedTextViewContentTopBottomInset; // +0xf1
    BOOL _hideCursor; // +0xf2
    BOOL _reportInput; // +0xf3
    BOOL _keepHeightWhenTextChange; // +0xf4
    BOOL _bShowChangeLineMenu; // +0xf5
    BOOL _bCenterAndAutoHidePlaceHolder; // +0xf6
    BOOL _bKeepTextWhenReturnDone; // +0xf7
    BOOL _shouldTreatEmoAsOneChar; // +0xf8
    BOOL _bShowEmoticon; // +0xf9
    BOOL _canShowTranslateTool; // +0xfa
    BOOL _bShowingTranslateTool; // +0xfb
    BOOL _shouldDisableAdjustSize; // +0xfc
    BOOL _canSendEmptyText; // +0xfd
    BOOL _textViewFixedClipToBounds; // +0xfe
    BOOL _textViewFixedNoClipToBounds; // +0xff
    BOOL _enablePasteMultiMedia; // +0x100
    BOOL _bMatchInnerViewHeightWithFrame; // +0x101
    BOOL _isDictationActive; // +0x102
    BOOL _tmpHideDictationIcon; // +0x103
    BOOL _dictationPendingSetText; // +0x104
    int _lastAttributeCount; // +0x108
    NSString * text; // +0x110
    NSString * placeHolder; // +0x118
    long long maxLength; // +0x120
    long long maxFontSize; // +0x128
    id <MMGrowTextViewCustomeTagDelegate> _customTagDelegate; // +0x130
    long long _emoticonCount; // +0x138
    UIFont * _placeholderFont; // +0x140
    double _bgExtraHeight; // +0x148
    MMGrowTextViewExtConfig * _extConfig; // +0x150
    NSMutableArray * _arrTopicMenuItem; // +0x158
    NSAttributedString * _lastAttributedContent; // +0x160
    MMGrowDictationIconView * _dictationIcon; // +0x168
    NSString * _lastDidChangeText; // +0x170
    _NSRange _lastMarkedRange; // +0x178
    UIEdgeInsets _touchInsets; // +0x188
    CGRect _realFrame; // +0x1a8
}
+ (UIEdgeInsets)defaultBackgroundImageInsets;
- (void)startDictationFromMenu;
- (void)stopDictationFromMenu;
- (BOOL)hasDictationIcon;
- (void)recoverDictationIconFromDraft;
- (id)getDictationIcon;
- (BOOL)isDictationWorking;
- (void)startDictation:(unsigned long long)arg1;
- (void)stopDictationForReason:(long long)arg1;
- (BOOL)isDictationIconEnabled;
- (void)initDictationIconIfNeeded;
- (void)showDictationIcon;
- (void)showDictationIcon:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideDictationIcon;
- (void)checkSelectionIntersectionWithDictationIcon;
- (void)hideDictationIconTemporary;
- (void)recoverDictationIconTemporary;
- (void)onDictationBegan;
- (void)onDictationEnd:(id)arg1 endFlag:(long long)arg2 displayText:(id)arg3;
- (void)MMDictationLogicIconWillStart;
- (_NSRange)MMDictationLogicIcon_selectedRange;
- (void)MMDictationLogicIcon_replaceRange:(_NSRange)arg1 withText:(id)arg2;
- (id)MMDictationLogicIcon_getChatName;
- (id)menuResponder;
- (void)setMenuResponder:(id)arg1;
- (void)setAdjustToInterfaceOrientation:(long long)arg1;
- (void)setTextViewContentInsets;
- (void)setUIScrollViewContentInsetAdjustmentNever;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (void)updateInnerTouchInsets;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)postTextChangeNotification;
- (void)postTextChangeNotification:(id)arg1;
- (void)layoutSubviews;
- (id)init;
- (id)initWithExtConfig:(id)arg1;
- (id)initWithDonotNeedTextViewContentTopBottomInset:(BOOL)arg1;
- (id)initWithDonotNeedTextViewContentTopBottomInset:(BOOL)arg1 matchInnerViewHeightWithFrame:(BOOL)arg2;
- (id)initWithOriginHeight:(double)arg1;
- (id)initWithOriginHeight:(double)arg1 extConfig:(id)arg2;
- (id)initWithOriginHeight:(double)arg1 WithDonotNeedTextViewContentTopBottomInset:(BOOL)arg2 extConfig:(id)arg3 matchInnerViewHeightWithFrame:(BOOL)arg4;
- (void)setFrame:(CGRect)arg1;
- (void)setBgExtraHeight:(double)arg1;
- (void)setBShowEmoticon:(BOOL)arg1;
- (void)setM_delegate:(id)arg1;
- (BOOL)isExtenalKeyboardAttatched;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageCornerRadius:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnablePasteMultiMedia:(BOOL)arg1;
- (void)setBShowChangeLineMenu:(BOOL)arg1;
- (void)setTextViewFixedClipToBounds:(BOOL)arg1;
- (void)UITextViewTextDidChangeNotification:(id)arg1;
- (void)changeContentSize;
- (void)UITextViewTextDidBeginEditingNotification:(id)arg1;
- (void)onGrowTextViewDidShowMenuController:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)textView:(id)arg1 didShowMenuTypes:(id)arg2;
- (void)textView:(id)arg1 cursorDidChangedOnTap:(_NSRange)arg2;
- (void)textViewDidTapped:(id)arg1;
- (double)measureHeight;
- (void)resetScrollPositionForIOS7;
- (CGSize)adjustSize;
- (void)adjustRect;
- (id)textArea;
- (void)saveTextSelectRange;
- (_NSRange)getTextSelectRange;
- (CGSize)getTextViewMaxSize;
- (void)resetTextViewOriginHeight:(double)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)sendTextViewMessage;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)tryFixWeInputMarkedTextEmojiShowBug:(id)arg1;
- (void)fixWeInputMarkedTextEmojiShowBug:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (BOOL)textview:(id)arg1 shouldPasteImage:(id)arg2;
- (void)textview:(id)arg1 pasteImage:(id)arg2;
- (void)textViewPasteMultiMediaContent:(id)arg1;
- (void)textView:(id)arg1 willPastedText:(id)arg2;
- (void)touchesBegan_TextView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TextView:(id)arg1 withEvent:(id)arg2;
- (void)textViewMovingCursorBegan:(id)arg1;
- (void)textViewMovingCursorEnded:(id)arg1;
- (void)onAccessoryViewFrameChanged:(CGRect)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(_NSRange)arg3 interaction:(long long)arg4;
- (unsigned long long)menuTypeForExtMenuAction:(SEL)arg1;
- (BOOL)handleKeyCommand:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (BOOL)shouldRespondToKeyBoardEvent;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (id)getExtMenuItems;
- (void)setBShowingTranslateTool:(BOOL)arg1;
- (void)inputAddTagStr;
- (void)openTopicSearch;
- (void)openTranslateTool;
- (void)closeTranslateTool;
- (void)showFullScreenInput;
- (BOOL)shouldParseTextAttri;
- (id)topicTagAttributes;
- (BOOL)pretreatmentAttributedText;
- (void)fixAttributedTextColor;
- (void)doWXTagParse;
- (int)parseAndAppendTopicSearchAttributeds:(id)arg1;
- (void)setHideCursor:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setTextWidth:(double)arg1;
- (void)resetTextWidth;
- (void)setTextFont:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUsesRedesignLineSpacing:(BOOL)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (id)attributePlaceholder;
- (void)setAttributePlaceholder:(id)arg1;
- (void)setPlaceHolderColor:(id)arg1;
- (void)setPlaceHolderMultiLine:(BOOL)arg1;
- (void)setTextViewEnableSetContentOffsetOnlyByMyself:(BOOL)arg1;
- (void)setPlaceholder:(id)arg1 animated:(BOOL)arg2;
- (void)setAttributedPlaceholder:(id)arg1 animated:(BOOL)arg2;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (double)getTextViewHeight;
- (void)setBCenterAndAutoHidePlaceHolder:(BOOL)arg1;
- (void)setShouldDisableAdjustSize:(BOOL)arg1;
- (void)insertString:(id)arg1;
- (void)deleteBackward;
- (BOOL)canChangeTextValue;
- (void)dealloc;
- (void)stopControlSetTextViewContentOffset;
- (void)updateSelectedRangeWhenKeyboardHide:(_NSRange)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)textViewMinHeight;
- (void)setTextViewMinHeight:(double)arg1;
- (CGSize)textViewMaxSize;
- (void)setTextViewMaxSize:(CGSize)arg1;
- (UIEdgeInsets)backgroundImageInsets;
- (void)setBackgroundImageInsets:(UIEdgeInsets)arg1;
- (id)m_delegate;
- (BOOL)enabled;
- (id)extensionKey;
- (void)setExtensionKey:(id)arg1;
- (double)fKeyboardAnimationDuration;
- (void)setFKeyboardAnimationDuration:(double)arg1;
- (long long)iKeyboardAnimationCurve;
- (void)setIKeyboardAnimationCurve:(long long)arg1;
- (long long)maxLength;
- (void)setMaxLength:(long long)arg1;
- (long long)maxFontSize;
- (void)setMaxFontSize:(long long)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)customTagDelegate;
- (void)setCustomTagDelegate:(id)arg1;
- (CGRect)keyboardFrameInScreen;
- (void)setKeyboardFrameInScreen:(CGRect)arg1;
- (BOOL)usesRedesignLineSpacing;
- (UIEdgeInsets)touchInsets;
- (BOOL)donotNeedTextViewContentTopBottomInset;
- (void)setDonotNeedTextViewContentTopBottomInset:(BOOL)arg1;
- (BOOL)hideCursor;
- (long long)emoticonCount;
- (void)setEmoticonCount:(long long)arg1;
- (BOOL)reportInput;
- (void)setReportInput:(BOOL)arg1;
- (BOOL)keepHeightWhenTextChange;
- (void)setKeepHeightWhenTextChange:(BOOL)arg1;
- (BOOL)bShowChangeLineMenu;
- (BOOL)bCenterAndAutoHidePlaceHolder;
- (BOOL)bKeepTextWhenReturnDone;
- (void)setBKeepTextWhenReturnDone:(BOOL)arg1;
- (BOOL)shouldTreatEmoAsOneChar;
- (void)setShouldTreatEmoAsOneChar:(BOOL)arg1;
- (BOOL)bShowEmoticon;
- (BOOL)canShowTranslateTool;
- (void)setCanShowTranslateTool:(BOOL)arg1;
- (BOOL)bShowingTranslateTool;
- (BOOL)shouldDisableAdjustSize;
- (BOOL)canSendEmptyText;
- (void)setCanSendEmptyText:(BOOL)arg1;
- (BOOL)textViewFixedClipToBounds;
- (BOOL)textViewFixedNoClipToBounds;
- (void)setTextViewFixedNoClipToBounds:(BOOL)arg1;
- (id)placeholderFont;
- (double)bgExtraHeight;
- (CGRect)realFrame;
- (void)setRealFrame:(CGRect)arg1;
- (BOOL)enablePasteMultiMedia;
- (id)extConfig;
- (void)setExtConfig:(id)arg1;
- (id)arrTopicMenuItem;
- (void)setArrTopicMenuItem:(id)arg1;
- (int)lastAttributeCount;
- (void)setLastAttributeCount:(int)arg1;
- (BOOL)bMatchInnerViewHeightWithFrame;
- (void)setBMatchInnerViewHeightWithFrame:(BOOL)arg1;
- (_NSRange)lastMarkedRange;
- (void)setLastMarkedRange:(_NSRange)arg1;
- (id)lastAttributedContent;
- (void)setLastAttributedContent:(id)arg1;
- (BOOL)isDictationActive;
- (void)setIsDictationActive:(BOOL)arg1;
- (id)dictationIcon;
- (void)setDictationIcon:(id)arg1;
- (BOOL)tmpHideDictationIcon;
- (void)setTmpHideDictationIcon:(BOOL)arg1;
- (id)lastDidChangeText;
- (void)setLastDidChangeText:(id)arg1;
- (BOOL)dictationPendingSetText;
- (void)setDictationPendingSetText:(BOOL)arg1;
- (void).cxx_destruct;
@end
