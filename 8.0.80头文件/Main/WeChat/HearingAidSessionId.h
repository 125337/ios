@interface HearingAidSessionId : NSObject
{
    NSString * _data; // +0x8
    long long _entrySource; // +0x10
}
+ (id)sharedInstance;
- (id)getHearingAidSessionID;
- (void)clearHearingAidSession;
- (void)startSessionWithEntrySource:(long long)arg1;
- (long long)getEntrySource;
- (id)getEntrySourceReportValue;
- (id)data;
- (void)setData:(id)arg1;
- (long long)entrySource;
- (void)setEntrySource:(long long)arg1;
- (void).cxx_destruct;
@end
