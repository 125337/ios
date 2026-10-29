@interface VoIPCallDetailReportStruct : NSObject
{
    int _roomType; // +0x8
    int _memberRole; // +0xc
    int _callType; // +0x10
    int _recordSource; // +0x14
    long long _roomId; // +0x18
    NSString * _tailSessionId; // +0x20
}
- (id)fetchBaseReportParams;
- (id)fetchCustomReportParams;
- (void)reportGenerateTail;
- (void)genTailSessionId;
- (void)reportTailClick;
- (void)reportMemberPageInWithFriendCount:(int)arg1 strangerCount:(int)arg2;
- (void)reportMemberCellClickWithMemberRelation:(int)arg1 memberUsername:(id)arg2;
- (int)roomType;
- (void)setRoomType:(int)arg1;
- (int)memberRole;
- (void)setMemberRole:(int)arg1;
- (int)callType;
- (void)setCallType:(int)arg1;
- (int)recordSource;
- (void)setRecordSource:(int)arg1;
- (long long)roomId;
- (void)setRoomId:(long long)arg1;
- (id)tailSessionId;
- (void)setTailSessionId:(id)arg1;
- (void).cxx_destruct;
@end
