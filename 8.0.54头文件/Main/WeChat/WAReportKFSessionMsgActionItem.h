@interface WAReportKFSessionMsgActionItem : WAReportBaseItem
{
    unsigned int _eventTime; // +0x8
    unsigned long long _eventID; // +0x10
    NSString * _sceneID; // +0x18
}
- (id)reportString;
- (unsigned long long)eventID;
- (void)setEventID:(unsigned long long)arg1;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

