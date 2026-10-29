@interface WCFinderCommentDetailTextView : MMGrowTextView
{
    id <WCFinderCommentDetailTextViewMentionDelegate> _mentionDelegate; // +0xb8
    NSMutableArray * _mentionEntryArray; // +0xc0
    WCFinderCommentDetailTextViewContext * _context; // +0xc8
}
- (id)mentionEntryArray;
- (id)context;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)getValidCommentMentionInfoArray;
- (void)handleLastSimpleAppendedWithEntry:(id)arg1 changeText:(id)arg2 changeRange:(_NSRange)arg3;
- (void)handleLastSimpleDeleteOrComplexAdditionWithEntry:(id)arg1 changeText:(id)arg2 changeRange:(_NSRange)arg3;
- (unsigned long long)insertMentionContact:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)clearInvalidMentionEntry;
- (void)updateTextViewCursorToIndex:(unsigned long long)arg1;
- (void)updateValidMentionEntryWithInvalidDeletionRange:(_NSRange)arg1;
- (void)clearAllMentionInfo;
- (id)mentionDelegate;
- (void)setMentionDelegate:(id)arg1;
- (void)setMentionEntryArray:(id)arg1;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
