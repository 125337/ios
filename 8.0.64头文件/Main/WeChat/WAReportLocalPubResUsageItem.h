@interface WAReportLocalPubResUsageItem : WAReportBaseItem
{
    unsigned int _pubLibType; // +0x8
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)pubLibType;
- (void)setPubLibType:(unsigned int)arg1;
@end
