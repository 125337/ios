@interface _TtC9WeAppCore27WAReportBackgroundFetchItem : WAReportBaseItem
{
    BOOL contactPrefetchWithLocationValue; // +0x8
    BOOL commitPrefetchWithLocation; // +0x9
    long long failedPrefetchWithLocationReason; // +0x10
    long long requestWeChatLocationAuthCostTimeInMs; // +0x18
    long long requestWeAppLocationAuthCostTimeInMs; // +0x20
    long long requestLocationCostTimeInMs; // +0x28
    long long totalCostTimeBeforePrefetchCgiInMs; // +0x30
    long long cgiCostTimeInMs; // +0x38
    long long getResultTotalCostTimeInMs; // +0x40
    long long veryStartTimeStampInMs; // +0x48
    long long getResultTimeStampInMs; // +0x50
    BOOL isResponseSuccess; // +0x58
    long long responseDataItemCount; // +0x60
}
- (BOOL)contactPrefetchWithLocationValue;
- (void)setContactPrefetchWithLocationValue:(BOOL)arg1;
- (BOOL)commitPrefetchWithLocation;
- (void)setCommitPrefetchWithLocation:(BOOL)arg1;
- (long long)failedPrefetchWithLocationReason;
- (void)setFailedPrefetchWithLocationReason:(long long)arg1;
- (long long)requestWeChatLocationAuthCostTimeInMs;
- (void)setRequestWeChatLocationAuthCostTimeInMs:(long long)arg1;
- (long long)requestWeAppLocationAuthCostTimeInMs;
- (void)setRequestWeAppLocationAuthCostTimeInMs:(long long)arg1;
- (long long)requestLocationCostTimeInMs;
- (void)setRequestLocationCostTimeInMs:(long long)arg1;
- (long long)totalCostTimeBeforePrefetchCgiInMs;
- (void)setTotalCostTimeBeforePrefetchCgiInMs:(long long)arg1;
- (long long)cgiCostTimeInMs;
- (void)setCgiCostTimeInMs:(long long)arg1;
- (long long)getResultTotalCostTimeInMs;
- (void)setGetResultTotalCostTimeInMs:(long long)arg1;
- (long long)veryStartTimeStampInMs;
- (void)setVeryStartTimeStampInMs:(long long)arg1;
- (long long)getResultTimeStampInMs;
- (void)setGetResultTimeStampInMs:(long long)arg1;
- (BOOL)isResponseSuccess;
- (void)setIsResponseSuccess:(BOOL)arg1;
- (long long)responseDataItemCount;
- (void)setResponseDataItemCount:(long long)arg1;
- (int)reportID;
- (id)reportString;
- (id)description;
- (id)init;
@end
