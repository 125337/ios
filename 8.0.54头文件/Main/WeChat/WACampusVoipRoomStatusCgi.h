@interface WACampusVoipRoomStatusCgi : WCBaseCgi
{
    NSString * _groupId; // +0x8
    long long _roomStatus; // +0x10
}
+ (void)voipRoom:(id)arg1 syncStatus:(long long)arg2;
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (long long)roomStatus;
- (void)setRoomStatus:(long long)arg1;
- (void).cxx_destruct;
@end

