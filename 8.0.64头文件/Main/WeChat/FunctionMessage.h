@interface FunctionMessage : NSObject <PBCoding>
{
    unsigned int _opType; // +0x8
    NSString * _functionMsgId; // +0x10
    unsigned long long _version; // +0x18
    NSString * _chatName; // +0x20
    long long _msgSvrId; // +0x28
}
+ (void)PBArrayAdd_msgSvrId;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_opType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)functionMsgId;
- (void)setFunctionMsgId:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
