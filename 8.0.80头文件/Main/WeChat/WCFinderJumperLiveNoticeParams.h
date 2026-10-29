@interface WCFinderJumperLiveNoticeParams : NSObject
{
    unsigned int _totalNoticeCount; // +0x8
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    NSString * _bypReportChnlExtra; // +0x18
}
+ (id)paramsFromLiveReservationNecessaryParams:(id)arg1;
+ (id)paramsFromLiveReservationStyle:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)bypReportChnlExtra;
- (void)setBypReportChnlExtra:(id)arg1;
- (unsigned int)totalNoticeCount;
- (void)setTotalNoticeCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
