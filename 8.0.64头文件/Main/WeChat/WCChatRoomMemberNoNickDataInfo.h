@interface WCChatRoomMemberNoNickDataInfo : NSObject <PBCoding>
{
    NSMutableDictionary * _dicUserNameTime; // +0x8
    NSMutableArray * _arrUserNameTime; // +0x10
}
+ (void)PBArrayAdd_dicUserNameTime;
+ (void)PBArrayAdd_arrUserNameTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)dicUserNameTime;
- (void)setDicUserNameTime:(id)arg1;
- (id)arrUserNameTime;
- (void)setArrUserNameTime:(id)arg1;
- (void).cxx_destruct;
@end
