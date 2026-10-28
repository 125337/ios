@interface AffWCRTEHelper : NSObject <AffWCRTEDelegateBase>
{
    AffWCRTEDelegateCallback * m_callBack; // +0x8
}
- (void)sayHelloAsync:(unsigned long long)arg1;
- (void)setCallback:(id)arg1;
- (void)getCurrentRecordingIdAsync:(unsigned long long)arg1;
- (void)getGeneralPastebordStringAsync:(unsigned long long)arg1;
- (void)setGeneralPasteBoardStringAsync:(unsigned long long)arg1 pasteboardString:(id)arg2;
- (void)getNameForAttachmentTypeAsync:(unsigned long long)arg1 nodeType:(int)arg2;
- (void)getCurrentTranslateLanguageAsync:(unsigned long long)arg1;
- (void)getAttachmentExpiredWordingAsync:(unsigned long long)arg1;
- (void)resetCopyAttachmentInPasteBored;
- (void).cxx_destruct;
@end
