@interface MMDictationReportItem : NSObject
{
    BOOL _userDidModifyText; // +0x8
    BOOL _frontModified; // +0x9
    BOOL _endModified; // +0xa
    NSString * _chatName; // +0x10
    NSMutableArray * _voiceList; // +0x18
    NSString * _fullText; // +0x20
    NSString * _lastVoiceInputSnapshot; // +0x28
    NSMutableString * _toneModifyList; // +0x30
    NSMutableString * _punctuateModifyList; // +0x38
    long long _voiceTextModifyTotalCnt; // +0x40
    unsigned long long _preSendEditCount; // +0x48
}
- (id)voiceList;
- (id)toneModifyList;
- (id)punctuateModifyList;
- (id)voiceInfo:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (void)setVoiceList:(id)arg1;
- (BOOL)userDidModifyText;
- (void)setUserDidModifyText:(BOOL)arg1;
- (id)fullText;
- (void)setFullText:(id)arg1;
- (id)lastVoiceInputSnapshot;
- (void)setLastVoiceInputSnapshot:(id)arg1;
- (BOOL)frontModified;
- (void)setFrontModified:(BOOL)arg1;
- (BOOL)endModified;
- (void)setEndModified:(BOOL)arg1;
- (void)setToneModifyList:(id)arg1;
- (void)setPunctuateModifyList:(id)arg1;
- (long long)voiceTextModifyTotalCnt;
- (void)setVoiceTextModifyTotalCnt:(long long)arg1;
- (unsigned long long)preSendEditCount;
- (void)setPreSendEditCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
