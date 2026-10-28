@interface MMDictationReportItem : NSObject
{
    BOOL _userDidModifyText; // +0x8
    NSString * _chatName; // +0x10
    NSMutableArray * _voiceList; // +0x18
    NSString * _fullText; // +0x20
}
- (id)voiceList;
- (id)voiceInfo:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (void)setVoiceList:(id)arg1;
- (BOOL)userDidModifyText;
- (void)setUserDidModifyText:(BOOL)arg1;
- (id)fullText;
- (void)setFullText:(id)arg1;
- (void).cxx_destruct;
@end
