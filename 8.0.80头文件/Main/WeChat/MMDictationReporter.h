@interface MMDictationReporter : NSObject <iLinkStreamExt>
{
    BOOL _iLinkFirstDataOut; // +0x8
    unsigned long long _triggerScene; // +0x10
    NSMutableDictionary * _items; // +0x18
    NSMutableDictionary * _unfinishedReportItems; // +0x20
    OrderedDictionary * _voiceItems; // +0x28
    OrderedDictionary * _iLinkVoiceItems; // +0x30
}
- (id)init;
- (id)items;
- (id)reportItemForKey:(id)arg1;
- (void)setReportItem:(id)arg1 forKey:(id)arg2;
- (void)removeReportItemForKey:(id)arg1;
- (void)removeReportItemForKey:(id)arg1 afterDelay:(double)arg2;
- (id)voiceInfoForVoiceId:(id)arg1;
- (void)onStartRecord:(id)arg1 chatName:(id)arg2 voiceId:(id)arg3 triggerScene:(unsigned long long)arg4;
- (void)onEndRecord:(id)arg1 chatName:(id)arg2 voiceId:(id)arg3 stopReason:(long long)arg4 stopMode:(long long)arg5 stopTime:(unsigned long long)arg6 transText:(id)arg7;
- (void)onEndRecord:(id)arg1 chatName:(id)arg2 voiceId:(id)arg3 stopReason:(long long)arg4 stopMode:(long long)arg5 stopTime:(unsigned long long)arg6 transText:(id)arg7 recordEndTime:(unsigned long long)arg8;
- (void)onUserModifyText:(id)arg1 chatName:(id)arg2;
- (void)_doEndRecordReport:(id)arg1 reportItem:(id)arg2 voiceInfo:(id)arg3;
- (void)detectModificationBetweenSnapshot:(id)arg1 currentText:(id)arg2 reportItem:(id)arg3;
- (void)onVoiceInputStartWithCurrentText:(id)arg1 key:(id)arg2;
- (void)onVoiceInputEndWithFullText:(id)arg1 key:(id)arg2;
- (void)onSend:(id)arg1 chatName:(id)arg2 fullText:(id)arg3;
- (void)onExpose:(id)arg1 chatName:(id)arg2 triggerScene:(unsigned long long)arg3;
- (id)voiceItems;
- (id)iLinkVoiceItems;
- (void)onCgiStartVoiceId:(id)arg1 seq:(int)arg2;
- (void)onCgiEndVoiceId:(id)arg1 seq:(int)arg2 textCount:(long long)arg3 clickDate:(id)arg4;
- (void)onOnlineStreamStarted:(id)arg1 voiceId:(id)arg2;
- (void)onILinkStreamStart:(id)arg1 voiceId:(id)arg2 seq:(int)arg3 clickDate:(id)arg4;
- (void)onILinkStreamEnd:(id)arg1 voiceId:(id)arg2 textCount:(long long)arg3 clickDate:(id)arg4;
- (void)onILinkStreamReportInfo:(id)arg1;
- (void)onOfflineResourceDownloadStart;
- (void)onOfflineResourceDownloadSuccess;
- (void)onOfflineResourceDownloadFail:(long long)arg1;
- (void)onLevelMeter:(id)arg1 peakPower:(float)arg2;
- (void)onTextDisplayed:(id)arg1;
- (void)onTextResponseDelay:(id)arg1 delayTime:(unsigned int)arg2;
- (void)onTextDisplayDelay:(id)arg1 delayTime:(unsigned int)arg2;
- (void)onOfflineResult:(id)arg1 text:(id)arg2;
- (void)onOfflineSpeechStateChanged:(id)arg1 speaking:(BOOL)arg2;
- (void)onMergedResultCommitted:(id)arg1 beforeText:(id)arg2 afterText:(id)arg3 offlineDeltaLen:(unsigned long long)arg4 restoredToOnline:(BOOL)arg5 didCommit:(BOOL)arg6;
- (void)onOnlineResult:(id)arg1 text:(id)arg2;
- (void)onOnlineTailFinished:(id)arg1 received:(BOOL)arg2;
- (unsigned long long)triggerScene;
- (void)setTriggerScene:(unsigned long long)arg1;
- (void)setItems:(id)arg1;
- (id)unfinishedReportItems;
- (void)setUnfinishedReportItems:(id)arg1;
- (void)setVoiceItems:(id)arg1;
- (BOOL)iLinkFirstDataOut;
- (void)setILinkFirstDataOut:(BOOL)arg1;
- (void)setILinkVoiceItems:(id)arg1;
- (void).cxx_destruct;
@end
