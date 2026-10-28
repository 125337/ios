@interface WCFinderFilterTextView : MMGrowTextView
{
    BOOL _forbidWXEmoji; // +0xb8
    BOOL _forbidEmoji; // +0xb9
    BOOL _shouldHelpMovingCursor; // +0xba
    BOOL _disableMentionConatct; // +0xbb
    BOOL _shouldMoveCursor; // +0xbc
    NSArray * _topicRangeArray; // +0xc0
    NSArray * _mentionRangeArray; // +0xc8
    unsigned long long _topicTextLength; // +0xd0
    unsigned long long _tagNumber; // +0xd8
    unsigned long long _mentionUserLimitNumber; // +0xe0
    NSMutableArray * _validCharacterArray; // +0xe8
    id <WCFinderFilterTextViewDelegate> _textViewDelegate; // +0xf0
    double _cursorPosition; // +0xf8
    NSArray * _invalidCharacterArray; // +0x100
    NSMutableAttributedString * _attributeStr; // +0x108
    NSMutableArray * _mentionContactArray; // +0x110
    UIColor * _attributeTextColor; // +0x118
    UIColor * _attributeBgColor; // +0x120
    NSString * _lastText; // +0x128
    WCFinderHighlightedInfoModel * _lastHighlightedModel; // +0x130
}
+ (BOOL)isCharacters:(id)arg1;
+ (id)getMentionedNicknameArrayWithText:(id)arg1;
- (id)initWithOriginHeight:(double)arg1;
- (void)UITextViewTextDidChangeNotification:(id)arg1;
- (void)_onTextChange:(id)arg1;
- (BOOL)isLastCharacterAlphaNumeric:(id)arg1;
- (void)triggerUpdateTopicModel;
- (id)getInvalidStringContent;
- (BOOL)isvalidMentionContactName:(id)arg1;
- (id)_getUpdateTopicModel;
- (void)updateAttitudeContent;
- (void)updateCursorPosition;
- (float)unicodeLengthOfString:(id)arg1;
- (void)setAttributeHighlightTextColor:(id)arg1;
- (void)updateAttributeBkColor:(id)arg1;
- (id)attriStrUseTagModelWithStr:(id)arg1;
- (_NSRange)firstEmojiRange:(id)arg1;
- (BOOL)containInWhiteBlack:(id)arg1;
- (id)getTopicQueryString;
- (double)getCursorRelativePosition;
- (double)getCurrentCursorPointX;
- (CGPoint)getCurrentCursorPoint;
- (BOOL)becomeFirstResponder;
- (void)replaceRange:(_NSRange)arg1 text:(id)arg2;
- (void)addWellSymbolToTextView;
- (BOOL)textHasEnoughTagRange;
- (BOOL)textHadEnoughMentionUser;
- (id)genTextToXML;
- (id)getMentionedNicknameArray;
- (id)getTopicArray;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)contactAttrAtTextView:(id)arg1 atIndex:(long long)arg2 effectiveRange:(_NSRange *)arg3;
- (void)updateMentionContactArray:(id)arg1;
- (_NSRange)getConflictMentionRangeFromSelectRange:(_NSRange)arg1;
- (id)reloadMentionContactArray;
- (_NSRange)getTopicRangeWhereCursorIn;
- (id)topicRangeArray;
- (void)setTopicRangeArray:(id)arg1;
- (id)mentionRangeArray;
- (void)setMentionRangeArray:(id)arg1;
- (unsigned long long)topicTextLength;
- (void)setTopicTextLength:(unsigned long long)arg1;
- (unsigned long long)tagNumber;
- (void)setTagNumber:(unsigned long long)arg1;
- (unsigned long long)mentionUserLimitNumber;
- (void)setMentionUserLimitNumber:(unsigned long long)arg1;
- (BOOL)forbidWXEmoji;
- (void)setForbidWXEmoji:(BOOL)arg1;
- (BOOL)forbidEmoji;
- (void)setForbidEmoji:(BOOL)arg1;
- (id)validCharacterArray;
- (void)setValidCharacterArray:(id)arg1;
- (BOOL)shouldHelpMovingCursor;
- (void)setShouldHelpMovingCursor:(BOOL)arg1;
- (BOOL)disableMentionConatct;
- (void)setDisableMentionConatct:(BOOL)arg1;
- (id)textViewDelegate;
- (void)setTextViewDelegate:(id)arg1;
- (double)cursorPosition;
- (void)setCursorPosition:(double)arg1;
- (BOOL)shouldMoveCursor;
- (void)setShouldMoveCursor:(BOOL)arg1;
- (id)invalidCharacterArray;
- (void)setInvalidCharacterArray:(id)arg1;
- (id)attributeStr;
- (void)setAttributeStr:(id)arg1;
- (id)mentionContactArray;
- (void)setMentionContactArray:(id)arg1;
- (id)attributeTextColor;
- (void)setAttributeTextColor:(id)arg1;
- (id)attributeBgColor;
- (void)setAttributeBgColor:(id)arg1;
- (id)lastText;
- (void)setLastText:(id)arg1;
- (id)lastHighlightedModel;
- (void)setLastHighlightedModel:(id)arg1;
- (void).cxx_destruct;
@end
