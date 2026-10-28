@interface _TtC9WeAppCore27WAReportBackgroundFetchItem : WAReportBaseItem
{
     contactPrefetchWithLocationValue; // +0x8
     commitPrefetchWithLocation; // +0x9
     failedPrefetchWithLocationReason; // +0x10
     requestWeChatLocationAuthCostTimeInMs; // +0x18
     requestWeAppLocationAuthCostTimeInMs; // +0x20
     requestLocationCostTimeInMs; // +0x28
     totalCostTimeBeforePrefetchCgiInMs; // +0x30
     cgiCostTimeInMs; // +0x38
     getResultTotalCostTimeInMs; // +0x40
     veryStartTimeStampInMs; // +0x48
     getResultTimeStampInMs; // +0x50
     isResponseSuccess; // +0x58
     responseDataItemCount; // +0x60
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
