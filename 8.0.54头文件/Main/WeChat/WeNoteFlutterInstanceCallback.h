@interface WeNoteFlutterInstanceCallback : NSObject
{
    WeNoteFlutterInstanceDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeNoteFlutterInstanceDispatcherBridgeObjcImpl *)arg1;
- (void)onreloadAttachmentComplete:(unsigned long long)arg1;
- (void)ononEndPlayVoiceComplete:(unsigned long long)arg1;
- (void)ononStartPlayVoiceComplete:(unsigned long long)arg1;
- (void)ononVoicePlayingComplete:(unsigned long long)arg1;
- (void)ononUpdateRecordDetailComplete:(unsigned long long)arg1;
- (void)onbeginParseHTMLComplete:(unsigned long long)arg1;
- (void)ontranslateFullContentComplete:(unsigned long long)arg1;
- (void)oncancelTranslateComplete:(unsigned long long)arg1;
- (void)ononChangeTranslationLanguageFinishedComplete:(unsigned long long)arg1;
- (void)onshowTranslationTitleBtnComplete:(unsigned long long)arg1;
- (void)ongetAttachmentRectComplete:(unsigned long long)arg1 rect:(id)arg2;
- (void)onopenContentSearchBarComplete:(unsigned long long)arg1;
- (void)onconvertToImageComplete:(unsigned long long)arg1;
- (void)onsetAttachmentVisibleComplete:(unsigned long long)arg1;
- (void)oninsertAttributeInfosComplete:(unsigned long long)arg1;
- (void)oninsertTextComplete:(unsigned long long)arg1;
- (void)ongetToolViewHeightComplete:(unsigned long long)arg1 height:(float)arg2;
- (void)onreloadNoteComplete:(unsigned long long)arg1;
@end

