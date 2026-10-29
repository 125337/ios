@interface WAAfterCloseGuideReportItem : WAReportBaseItem
{
    unsigned int _dialogType; // +0x8
    unsigned int _event; // +0xc
}
- (int)reportID;
- (id)reportString;
- (unsigned int)dialogType;
- (void)setDialogType:(unsigned int)arg1;
- (unsigned int)event;
- (void)setEvent:(unsigned int)arg1;
@end

