@interface DBContactRemark : NSObject <PBCoding, WCTColumnCoding>
{
    NSString * _nickName; // +0x8
    NSString * _aliasName; // +0x10
    NSString * _remark; // +0x18
    NSString * _remarkPYFull; // +0x20
    NSString * _remarkShortPinYin; // +0x28
    NSString * _fullPinYin; // +0x30
    NSString * _descriptions; // +0x38
    NSString * _labelIDList; // +0x40
}
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_aliasName;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_remarkPYFull;
+ (void)PBArrayAdd_remarkShortPinYin;
+ (void)PBArrayAdd_fullPinYin;
+ (void)PBArrayAdd_descriptions;
+ (void)PBArrayAdd_labelIDList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)aliasName;
- (void)setAliasName:(id)arg1;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)remarkPYFull;
- (void)setRemarkPYFull:(id)arg1;
- (id)remarkShortPinYin;
- (void)setRemarkShortPinYin:(id)arg1;
- (id)fullPinYin;
- (void)setFullPinYin:(id)arg1;
- (id)descriptions;
- (void)setDescriptions:(id)arg1;
- (id)labelIDList;
- (void)setLabelIDList:(id)arg1;
- (void).cxx_destruct;
@end
