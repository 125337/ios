@interface WCFinderCommentDetailTextViewMentionEntry : NSObject
{
    BOOL _isValid; // +0x8
    CContact * _mentionContact; // +0x10
    _NSRange _mentionRange; // +0x18
}
+ (id)entryWithRange:(_NSRange)arg1 contact:(id)arg2;
- (_NSRange)mentionRange;
- (void)setMentionRange:(_NSRange)arg1;
- (id)mentionContact;
- (void)setMentionContact:(id)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (void).cxx_destruct;
@end

