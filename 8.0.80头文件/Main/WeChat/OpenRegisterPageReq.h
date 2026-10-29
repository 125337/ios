@interface OpenRegisterPageReq : NSObject
{
    long long _serviceType; // +0x8
    NSString * _needShareBizNickname; // +0x10
    NSString * _fromScene; // +0x18
    NSString * _needShareBizUsername; // +0x20
    NSNumber * _notifyMsgId; // +0x28
    NSString * _commentKeyBuffer; // +0x30
}
+ (id)makeWithServiceType:(long long)arg1 needShareBizNickname:(id)arg2 fromScene:(id)arg3 needShareBizUsername:(id)arg4 notifyMsgId:(id)arg5 commentKeyBuffer:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
- (id)needShareBizNickname;
- (void)setNeedShareBizNickname:(id)arg1;
- (id)fromScene;
- (void)setFromScene:(id)arg1;
- (id)needShareBizUsername;
- (void)setNeedShareBizUsername:(id)arg1;
- (id)notifyMsgId;
- (void)setNotifyMsgId:(id)arg1;
- (id)commentKeyBuffer;
- (void)setCommentKeyBuffer:(id)arg1;
- (void).cxx_destruct;
@end
