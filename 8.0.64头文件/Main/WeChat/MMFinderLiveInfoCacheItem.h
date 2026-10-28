@interface MMFinderLiveInfoCacheItem : NSObject
{
    unsigned int _liveNewFansNum; // +0x8
    unsigned int _refreshIntervalInSecond; // +0xc
    unsigned long long _creationUnixEpochTime; // +0x10
    unsigned long long _expirationUnixEpochTimeInSecond; // +0x18
    WCFinderLiveInfo * _liveInfo; // +0x20
    NSString * _recommendReason; // +0x28
    NSArray * _jumpInfos; // +0x30
    WCFinderGetLiveInfoModel * _successCallbackModel; // +0x38
    FinderLiveAbnormalClosedPageInfo * _abnormalClosePage; // +0x40
}
+ (id)keyWithGetLiveInfoParams:(id)arg1;
- (unsigned long long)creationUnixEpochTime;
- (void)setCreationUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)expirationUnixEpochTimeInSecond;
- (void)setExpirationUnixEpochTimeInSecond:(unsigned long long)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (unsigned int)liveNewFansNum;
- (void)setLiveNewFansNum:(unsigned int)arg1;
- (unsigned int)refreshIntervalInSecond;
- (void)setRefreshIntervalInSecond:(unsigned int)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)jumpInfos;
- (void)setJumpInfos:(id)arg1;
- (id)successCallbackModel;
- (void)setSuccessCallbackModel:(id)arg1;
- (id)abnormalClosePage;
- (void)setAbnormalClosePage:(id)arg1;
- (void).cxx_destruct;
@end
