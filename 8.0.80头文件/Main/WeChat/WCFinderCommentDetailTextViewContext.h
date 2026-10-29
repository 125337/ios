@interface WCFinderCommentDetailTextViewContext : NSObject
{
    NSString * _lastReplacementText; // +0x8
    _NSRange _lastReplacementRange; // +0x10
    _NSRange _backupStartRange; // +0x20
}
- (void)updateTextViewReplacementRange:(_NSRange)arg1 text:(id)arg2;
- (void)checkBackupStatusWithTextView:(id)arg1;
- (void)clearContext;
- (BOOL)isLastChangeValid;
- (_NSRange)lastReplacementRange;
- (void)setLastReplacementRange:(_NSRange)arg1;
- (id)lastReplacementText;
- (void)setLastReplacementText:(id)arg1;
- (_NSRange)backupStartRange;
- (void)setBackupStartRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
