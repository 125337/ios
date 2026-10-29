@interface VoIPCallReportContext : NSObject
{
    unsigned long long _roomID; // +0x8
    long long _callType; // +0x10
    long long _roomType; // +0x18
    long long _localRole; // +0x20
}
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (long long)callType;
- (void)setCallType:(long long)arg1;
- (long long)roomType;
- (void)setRoomType:(long long)arg1;
- (long long)localRole;
- (void)setLocalRole:(long long)arg1;
@end
