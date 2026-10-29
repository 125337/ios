@interface ChatbotOperationReporter : KvReportBaseItem
{
    int _errCode; // +0x8
    NSString * _asstSessionID; // +0x10
    NSString * _sceneSessionID; // +0x18
    unsigned long long _action; // +0x20
    unsigned long long _gesture; // +0x28
    unsigned long long _notificationCount; // +0x30
    unsigned long long _audioLen; // +0x38
    NSString * _contentID; // +0x40
    NSString * _extraInfo; // +0x48
    unsigned long long _scene; // +0x50
    unsigned long long _timeStampMS; // +0x58
}
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)doReport;
- (void)doReportImmediately;
- (void)reportAction:(unsigned long long)arg1 gesture:(unsigned long long)arg2 contentID:(id)arg3;
- (void)reportAudioLen:(unsigned long long)arg1 isAISpeaking:(BOOL)arg2;
- (id)asstSessionID;
- (void)setAsstSessionID:(id)arg1;
- (id)sceneSessionID;
- (void)setSceneSessionID:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (unsigned long long)gesture;
- (void)setGesture:(unsigned long long)arg1;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (unsigned long long)notificationCount;
- (void)setNotificationCount:(unsigned long long)arg1;
- (unsigned long long)audioLen;
- (void)setAudioLen:(unsigned long long)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)timeStampMS;
- (void)setTimeStampMS:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
