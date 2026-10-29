@interface AffWCRTEHelper : NSObject <AffWCRTEDelegateBase>
{
    AffWCRTEDelegateCallback * m_callBack; // +0x8
}
- (void)sayHelloAsync:(unsigned long long)arg1;
- (void)setCallback:(id)arg1;
- (id)getCurrentRecordingId;
- (id)getGeneralPastebordString;
- (void)setGeneralPasteBoardString:(id)arg1;
- (id)getNameForAttachmentType:(int)arg1;
- (id)getCurrentTranslateLanguage;
- (id)getAttachmentExpiredWording;
- (void)resetCopyAttachmentInPasteBored;
- (void).cxx_destruct;
@end

