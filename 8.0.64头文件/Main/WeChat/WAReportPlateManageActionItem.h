@interface WAReportPlateManageActionItem : WAReportBaseItem
{
    unsigned long long _callPageType; // +0x8
    unsigned long long _halfPageOperation; // +0x10
    unsigned long long _licensePlateOperation; // +0x18
}
- (int)reportID;
- (id)reportString;
- (unsigned long long)callPageType;
- (void)setCallPageType:(unsigned long long)arg1;
- (unsigned long long)halfPageOperation;
- (void)setHalfPageOperation:(unsigned long long)arg1;
- (unsigned long long)licensePlateOperation;
- (void)setLicensePlateOperation:(unsigned long long)arg1;
@end
