@interface WCPayPluginTopMsgRecord : NSObject <PBCoding>
{
    NSString * _username; // +0x8
    NSArray * _msgList; // +0x10
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_msgList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)msgList;
- (void)setMsgList:(id)arg1;
- (void).cxx_destruct;
@end

