@interface KvReportItem28528 : KvReportBaseItem
{
    unsigned int _numberOfSections_21; // +0x8
    unsigned int _offsetDiff_22; // +0xc
    unsigned int _markCellY_23; // +0x10
    unsigned int _currentCellY_24; // +0x14
    unsigned int _markCellSection_25; // +0x18
    unsigned int _markCellRow_26; // +0x1c
    NSString * _identifier_27; // +0x20
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)numberOfSections_21;
- (void)setNumberOfSections_21:(unsigned int)arg1;
- (unsigned int)offsetDiff_22;
- (void)setOffsetDiff_22:(unsigned int)arg1;
- (unsigned int)markCellY_23;
- (void)setMarkCellY_23:(unsigned int)arg1;
- (unsigned int)currentCellY_24;
- (void)setCurrentCellY_24:(unsigned int)arg1;
- (unsigned int)markCellSection_25;
- (void)setMarkCellSection_25:(unsigned int)arg1;
- (unsigned int)markCellRow_26;
- (void)setMarkCellRow_26:(unsigned int)arg1;
- (id)identifier_27;
- (void)setIdentifier_27:(id)arg1;
- (void).cxx_destruct;
@end
