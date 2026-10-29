@interface WCFinderFeedFlowViewReportParams : NSObject
{
    BOOL _forbidReport; // +0x8
    BOOL _enableSession3ExposeReport; // +0x9
    NSString * _pageTag; // +0x10
    NSString * _groudId; // +0x18
    unsigned long long _musicType; // +0x20
    NSString * _eventId; // +0x28
    unsigned long long _eventSortType; // +0x30
    NSDictionary * _eventInfo; // +0x38
    NSDictionary * _udfKV; // +0x40
    unsigned long long _markReadScene; // +0x48
    unsigned long long _markReadSubScene; // +0x50
    unsigned long long _cellExposeReportRate; // +0x58
    NSDictionary * _liveChnlExtra; // +0x60
}
- (id)pageTag;
- (void)setPageTag:(id)arg1;
- (id)groudId;
- (void)setGroudId:(id)arg1;
- (unsigned long long)musicType;
- (void)setMusicType:(unsigned long long)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (unsigned long long)eventSortType;
- (void)setEventSortType:(unsigned long long)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)udfKV;
- (void)setUdfKV:(id)arg1;
- (unsigned long long)markReadScene;
- (void)setMarkReadScene:(unsigned long long)arg1;
- (unsigned long long)markReadSubScene;
- (void)setMarkReadSubScene:(unsigned long long)arg1;
- (unsigned long long)cellExposeReportRate;
- (void)setCellExposeReportRate:(unsigned long long)arg1;
- (BOOL)forbidReport;
- (void)setForbidReport:(BOOL)arg1;
- (id)liveChnlExtra;
- (void)setLiveChnlExtra:(id)arg1;
- (BOOL)enableSession3ExposeReport;
- (void)setEnableSession3ExposeReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
