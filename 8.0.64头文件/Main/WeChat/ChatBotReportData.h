@interface ChatBotReportData : NSObject
{
    unsigned int _logId; // +0x8
}
- (void)report;
- (id)getLogContent;
- (unsigned int)logId;
@end
