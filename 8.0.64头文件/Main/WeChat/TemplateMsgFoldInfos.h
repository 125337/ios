@interface TemplateMsgFoldInfos : MMObject <PBCoding, WCTColumnCoding>
{
    NSArray * _foldMsgLocalIdList; // +0x8
    NSArray * _foldMsgTitleList; // +0x10
}
+ (void)PBArrayAdd_foldMsgLocalIdList;
+ (void)PBArrayAdd_foldMsgTitleList;
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
- (void).cxx_destruct;
@end
