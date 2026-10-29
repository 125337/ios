@interface WAReportCampusVoipInItem : WAReportBaseItem
{
    NSString * _roomId; // +0x8
    unsigned long long _voipInScene; // +0x10
    long long _msgId; // +0x18
    long long _createTime; // +0x20
    long long _receiveTime; // +0x28
}
+ (void)reportWithRoomId:(id)arg1 voipInScene:(unsigned long long)arg2 appId:(id)arg3 msgId:(long long)arg4 createTime:(long long)arg5;
+ (void)reportWithRoomId:(id)arg1 voipInScene:(unsigned long long)arg2 appId:(id)arg3 msgId:(long long)arg4 createTime:(long long)arg5 receiveTime:(long long)arg6;
- (int)reportID;
- (id)reportString;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned long long)voipInScene;
- (void)setVoipInScene:(unsigned long long)arg1;
- (long long)msgId;
- (void)setMsgId:(long long)arg1;
- (long long)createTime;
- (void)setCreateTime:(long long)arg1;
- (long long)receiveTime;
- (void)setReceiveTime:(long long)arg1;
- (void).cxx_destruct;
@end

