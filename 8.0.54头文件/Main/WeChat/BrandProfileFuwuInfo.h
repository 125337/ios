@interface BrandProfileFuwuInfo : NSObject
{
    unsigned int _type; // +0x8
    NSString * _id; // +0x10
    NSString * _titleStr; // +0x18
    NSString * _valueStr; // +0x20
    NSMutableArray * _subFuwuInfoList; // +0x28
    unsigned long long _row; // +0x30
    unsigned long long _column; // +0x38
    NSString * _key; // +0x40
    unsigned long long _showIconType; // +0x48
    MpEcsJumpInfo * _menuEcsJumpInfo; // +0x50
}
- (BOOL)isSameFuwuInfoWith:(id)arg1;
- (id)id;
- (void)setId:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)valueStr;
- (void)setValueStr:(id)arg1;
- (id)subFuwuInfoList;
- (void)setSubFuwuInfoList:(id)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (unsigned long long)column;
- (void)setColumn:(unsigned long long)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned long long)showIconType;
- (void)setShowIconType:(unsigned long long)arg1;
- (id)menuEcsJumpInfo;
- (void)setMenuEcsJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

