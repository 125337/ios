@interface PendingMsgInfo : NSObject <PBCoding>
{
    int _type; // +0x8
    unsigned int _msgLocalId; // +0xc
    NSString * _title; // +0x10
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_msgLocalId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
