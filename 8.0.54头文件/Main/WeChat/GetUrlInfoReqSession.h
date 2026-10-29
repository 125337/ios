@interface GetUrlInfoReqSession : NSObject
{
    unsigned int _sessionType; // +0x8
    NSString * _sessionName; // +0x10
    NSString * _objId; // +0x18
    NSString * _msgUserName; // +0x20
}
+ (id)singleChat:(id)arg1;
+ (id)groupChat:(id)arg1 msgUserName:(id)arg2;
+ (id)sns:(id)arg1 snsId:(id)arg2;
+ (id)web:(id)arg1;
+ (id)miniapp:(id)arg1;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (unsigned int)sessionType;
- (void)setSessionType:(unsigned int)arg1;
- (id)objId;
- (void)setObjId:(id)arg1;
- (id)msgUserName;
- (void)setMsgUserName:(id)arg1;
- (void).cxx_destruct;
@end

