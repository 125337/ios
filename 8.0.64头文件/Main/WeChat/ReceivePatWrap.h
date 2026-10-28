@interface ReceivePatWrap : NSObject <PBCoding>
{
    long long _serverId; // +0x8
    NSString * _chatUserName; // +0x10
    unsigned long long _createTime; // +0x18
}
+ (void)PBArrayAdd_serverId;
+ (void)PBArrayAdd_chatUserName;
+ (void)PBArrayAdd_createTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)serverId;
- (void)setServerId:(long long)arg1;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
