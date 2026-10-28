@interface SolitaireItem : MMObject <PBCoding, NSCopying>
{
    BOOL _isHeader; // +0x8
    BOOL _isExample; // +0x9
    BOOL _canEdit; // +0xa
    unsigned int _msgLocalId; // +0xc
    unsigned int _index; // +0x10
    unsigned int _createTime; // +0x14
    unsigned int _msgCreateTime; // +0x18
    NSString * _content; // +0x20
    NSString * _nsSeparator; // +0x28
    NSString * _username; // +0x30
    long long _itemNum; // +0x38
    _NSRange _range; // +0x40
}
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_isHeader;
+ (void)PBArrayAdd_isExample;
+ (void)PBArrayAdd_canEdit;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_itemNum;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setUsername:(id)arg1;
- (id)description;
- (id)content;
- (void)setContent:(id)arg1;
- (id)nsSeparator;
- (void)setNsSeparator:(id)arg1;
- (id)username;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (BOOL)isHeader;
- (void)setIsHeader:(BOOL)arg1;
- (BOOL)isExample;
- (void)setIsExample:(BOOL)arg1;
- (BOOL)canEdit;
- (void)setCanEdit:(BOOL)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (long long)itemNum;
- (void)setItemNum:(long long)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
