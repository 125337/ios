@interface WCFinderJumperLiveNoticeParams : NSObject
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x8
    NSString * _bypReportChnlExtra; // +0x10
}
+ (id)paramsFromLiveReservationNecessaryParams:(id)arg1;
+ (id)paramsFromLiveReservationStyle:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)bypReportChnlExtra;
- (void)setBypReportChnlExtra:(id)arg1;
- (void).cxx_destruct;
@end
