@interface MsgImgMinimizeData : NSObject <PBCoding>
{
    unsigned int _msgLocalId; // +0x8
    NSString * _chatname; // +0x10
}
+ (void)PBArrayAdd_chatname;
+ (void)PBArrayAdd_msgLocalId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)chatname;
- (void)setChatname:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
