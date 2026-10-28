@interface Conversation : NSObject
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
    NSString * _lastMsgDigest; // +0x18
    NSNumber * _updateTime; // +0x20
    NSNumber * _flag; // +0x28
    NSNumber * _isPlaceTop; // +0x30
    NSNumber * _createTime; // +0x38
}
+ (id)makeWithUsername:(id)arg1 nickname:(id)arg2 lastMsgDigest:(id)arg3 updateTime:(id)arg4 flag:(id)arg5 isPlaceTop:(id)arg6 createTime:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)lastMsgDigest;
- (void)setLastMsgDigest:(id)arg1;
- (id)updateTime;
- (void)setUpdateTime:(id)arg1;
- (id)flag;
- (void)setFlag:(id)arg1;
- (id)isPlaceTop;
- (void)setIsPlaceTop:(id)arg1;
- (id)createTime;
- (void)setCreateTime:(id)arg1;
- (void).cxx_destruct;
@end
