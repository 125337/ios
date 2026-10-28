@interface MMFinderLiveNoticeDetailsReservationParameters : NSObject
{
    BOOL _reportingUseDefaultAdData; // +0x8
    BOOL _reportingClearAdDataAfterReportForBook; // +0x9
    unsigned int _scene; // +0xc
    int _reportScene; // +0x10
    int _enterType; // +0x14
    NSString * _promoterToken; // +0x18
}
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)promoterToken;
- (void)setPromoterToken:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (BOOL)reportingUseDefaultAdData;
- (void)setReportingUseDefaultAdData:(BOOL)arg1;
- (BOOL)reportingClearAdDataAfterReportForBook;
- (void)setReportingClearAdDataAfterReportForBook:(BOOL)arg1;
- (void).cxx_destruct;
@end
