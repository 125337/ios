@interface WCFinderReportPoolService : MMUserService <MMServiceProtocol>
{
    NSString * _clickPostTimeStamp; // +0x8
    WCFinderEditVideoReportInfo * _editReportInfo; // +0x10
}
- (void)updateClickPostTimeStamp;
- (id)getClickPostTimeStamp;
- (void)resetClickPostTimeStamp;
- (void)setEditVideoFileName:(id)arg1;
- (id)editVideoFileName;
- (void)setEditVideoCompostTime:(double)arg1;
- (id)editVideoCompostTimeStr;
- (BOOL)hasEditVideoReportInfo;
- (void)clearEditVideoReportInfo;
- (id)editReportInfo;
- (id)clickPostTimeStamp;
- (void)setClickPostTimeStamp:(id)arg1;
- (void)setEditReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
