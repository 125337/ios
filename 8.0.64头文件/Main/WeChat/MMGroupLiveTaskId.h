@interface MMGroupLiveTaskId : MMLiveTaskId
{
    NSString * _roomId; // +0x8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithLiveId:(unsigned long long)arg1 roomId:(id)arg2;
- (id)taskKey;
- (BOOL)isValid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (void).cxx_destruct;
@end
