@interface TemplateMsgFoldInfos : MMObject <PBCoding, WCTColumnCoding>
{
    NSArray * _foldMsgLocalIdList; // +0x8
    NSArray * _foldMsgTitleList; // +0x10
    NSArray * _foldMsgUniqueIdList; // +0x18
}
+ (void)PBArrayAdd_foldMsgLocalIdList;
+ (void)PBArrayAdd_foldMsgTitleList;
+ (void)PBArrayAdd_foldMsgUniqueIdList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (id)foldMsgLocalIdList;
- (void)setFoldMsgLocalIdList:(id)arg1;
- (id)foldMsgTitleList;
- (void)setFoldMsgTitleList:(id)arg1;
- (id)foldMsgUniqueIdList;
- (void)setFoldMsgUniqueIdList:(id)arg1;
- (void).cxx_destruct;
@end
