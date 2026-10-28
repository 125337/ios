@interface WCAdFinderTopicReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _infoBarClickCount; // +0x8
    NSMutableArray * _reportItemList; // +0x10
}
- (unsigned int)infoBarClickCount;
- (void)setInfoBarClickCount:(unsigned int)arg1;
- (id)reportItemList;
- (void)setReportItemList:(id)arg1;
- (void).cxx_destruct;
@end
