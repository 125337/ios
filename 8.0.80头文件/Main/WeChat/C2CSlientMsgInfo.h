@interface C2CSlientMsgInfo : NSObject <PBCoding>
{
    NSString * _chatName; // +0x8
    long long _msgSvrId; // +0x10
}
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_msgSvrId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithChatName:(id)arg1 svrID:(long long)arg2;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (void).cxx_destruct;
@end
