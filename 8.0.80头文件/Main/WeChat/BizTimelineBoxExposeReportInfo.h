@interface BizTimelineBoxExposeReportInfo : NSObject
{
    NSData * _reqReportInfo; // +0x8
    struct _userActiveReportInfo; // +0x10
}
- (struct)userActiveReportInfo;
- (void)setUserActiveReportInfo:(struct)arg1;
- (id)reqReportInfo;
- (void)setReqReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
