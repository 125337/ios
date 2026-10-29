@interface SendShareMsgReq : NSObject
{
    NSString * _talker; // +0x8
    NSString * _shareNickname; // +0x10
    long long _serviceType; // +0x18
    long long _sharedServiceType; // +0x20
    NSNumber * _notifyMsgId; // +0x28
}
+ (id)makeWithTalker:(id)arg1 shareNickname:(id)arg2 serviceType:(long long)arg3 sharedServiceType:(long long)arg4 notifyMsgId:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)talker;
- (void)setTalker:(id)arg1;
- (id)shareNickname;
- (void)setShareNickname:(id)arg1;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
- (long long)sharedServiceType;
- (void)setSharedServiceType:(long long)arg1;
- (id)notifyMsgId;
- (void)setNotifyMsgId:(id)arg1;
- (void).cxx_destruct;
@end
