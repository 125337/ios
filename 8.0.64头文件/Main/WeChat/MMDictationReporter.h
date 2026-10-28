@interface MMDictationReporter : NSObject
{
    NSMutableDictionary * _items; // +0x8
    OrderedDictionary * _voiceItems; // +0x10
}
- (id)items;
- (id)reportItemForKey:(id)arg1;
- (void)setReportItem:(id)arg1 forKey:(id)arg2;
- (void)removeReportItemForKey:(id)arg1;
- (void)onStartRecord:(id)arg1 chatName:(id)arg2 voiceId:(id)arg3 triggerScene:(unsigned long long)arg4;
- (void)onEndRecord:(id)arg1 chatName:(id)arg2 voiceId:(id)arg3 stopReason:(long long)arg4 transText:(id)arg5;
- (void)onUserModifyText:(id)arg1 chatName:(id)arg2;
- (void)onSend:(id)arg1 chatName:(id)arg2 fullText:(id)arg3;
- (void)onClear:(id)arg1 chatName:(id)arg2;
- (void)onExpose:(id)arg1 chatName:(id)arg2 triggerScene:(unsigned long long)arg3;
- (id)voiceItems;
- (void)onClearCgi:(id)arg1;
- (void)onCgiStartVoiceId:(id)arg1 seq:(int)arg2;
- (void)onCgiEndVoiceId:(id)arg1 seq:(int)arg2 textCount:(long long)arg3 clickDate:(id)arg4;
- (void)setItems:(id)arg1;
- (void)setVoiceItems:(id)arg1;
- (void).cxx_destruct;
@end
