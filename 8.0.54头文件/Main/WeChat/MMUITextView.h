@interface MMUITextView : UITextView
{
    BOOL isDictationPlaceholderShow; // +0x8
}
- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (id)insertDictationResultPlaceholder;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (BOOL)isDictationPlaceholderShow;
- (void)setIsDictationPlaceholderShow:(BOOL)arg1;
@end

