@interface WCTimelineDataProvider : MMObject <IStrangerBrandContactHeadImageExt, IContactMgrExt, PBMessageObserverDelegate>
{
    unsigned long long uiClientLatestID; // +0x8
    NSString * fpHash; // +0x10
    BOOL isWorking; // +0x18
    id <WCTimelineDataProviderDelegate> delegate; // +0x20
}
- (id)convertAdvertiseMsgListToList;
- (BOOL)hasExistAdItem:(id)arg1;
- (id)converServerAdList2List:(id)arg1;
- (id)convertServerRecList2List:(id)arg1;
- (void)delAdWithSnsId:(id)arg1 SnsId:(id)arg2;
- (void)dumpAllNewAdList:(id)arg1;
- (BOOL)isAdCommentOrLikeBySelf:(id)arg1;
- (void)updateAdvertiserInfo:(id)arg1;
- (void)onStrangerBrandHeadImageURLChange:(id)arg1;
- (void)onBrandContactHeadImageURLChange:(id)arg1;
- (void)clearSnsAdExpInfo:(id)arg1;
- (void)addRecList:(id)arg1 toAdList:(id)arg2;
- (void)addUbdXmlAdtoAdList:(id)arg1;
- (void)delAdList:(id)arg1 retAdList:(id)arg2;
- (void)changeAdTimeForPosition:(id)arg1 retList:(id)arg2 isFirstPage:(BOOL)arg3;
- (void)processAdOperation:(id)arg1 feedList:(id)arg2 adList:(id)arg3;
- (void)processAdOperationLift:(id)arg1 feedList:(id)arg2 adList:(id)arg3;
- (void)reportAdLift:(long long)arg1 uxInfo:(id)arg2 snsId:(id)arg3;
- (void)processAdOperationReplace:(id)arg1;
- (void)reportTimelinePullCost:(id)arg1 timelineRequest:(id)arg2 userData:(id)arg3;
- (void)tryToPullSnsAd:(id)arg1;
- (void)responseForSnsAdPullResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)processAdPullResponse:(id)arg1 adDataItem:(id)arg2;
- (void)onTimelinePullResponseWithAdDataList:(id)arg1 forRequest:(id)arg2;
- (BOOL)checkAdDataValid:(id)arg1 sessionKeyAd:(id)arg2;
- (BOOL)isUpdating;
- (BOOL)updateFirstPage:(unsigned long long)arg1;
- (BOOL)updatePrePage:(unsigned long long)arg1;
- (BOOL)updateNextPage:(unsigned long long)arg1 bottomId:(unsigned long long)arg2 minChangedTime:(unsigned int)arg3 isUnReadJump:(BOOL)arg4;
- (unsigned int)onServiceCleanCache;
- (id)init;
- (void)SafeMD5;
- (void)dealloc;
- (void)meggeObjectOperation:(id)arg1 snsObject:(id)arg2;
- (id)converListToList:(id)arg1;
- (unsigned int)getNetworkType;
- (BOOL)requestForSnsTimeLineRequest:(unsigned long long)arg1 minId:(unsigned long long)arg2 lastRequestTime:(unsigned int)arg3 pageType:(long long)arg4 isUnReadJump:(BOOL)arg5;
- (BOOL)responseForSnsTimeLineResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)parseResposeWsInfo:(id)arg1 requestIdentifier:(id)arg2 output:(id *)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportKVStatSightRecieveWithMeidaItem:(id)arg1;
- (void)updateConfig:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)parsePattern:(id)arg1;
- (void)saveServerSession:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
