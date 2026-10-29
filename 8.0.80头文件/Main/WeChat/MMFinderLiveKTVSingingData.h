@interface MMFinderLiveKTVSingingData : NSObject <MMFinderLiveKSKitAudioExt, MMFinderLiveKTVSEISyncSendDelegate>
{
    BOOL _isDataUpdated; // +0x8
    id <MMLiveUniqueTaskId> _taskId; // +0x10
    NSString * _uniqueId; // +0x18
    LiveSEIKTVNote * _currNoteRecord; // +0x20
    LiveSEIKTVProgress * _currProgress; // +0x28
    MMFinderLiveKTVReporter * _reporter; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)updateUniqueId:(id)arg1;
- (void)clearDatas;
- (void)onKSKitKalaPositionChanged:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (void)onKSKitKalaVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 isHit:(BOOL)arg3 timeOffset:(int)arg4 duration:(int)arg5 uniqueId:(id)arg6 taskId:(id)arg7;
- (BOOL)onCollectKTVSEISyncSendInfo:(id)arg1;
- (void)onRequestRecentKTVSEISyncSendInfo:(id)arg1;
- (id)ktvReporter;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)currNoteRecord;
- (void)setCurrNoteRecord:(id)arg1;
- (id)currProgress;
- (void)setCurrProgress:(id)arg1;
- (BOOL)isDataUpdated;
- (void)setIsDataUpdated:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
