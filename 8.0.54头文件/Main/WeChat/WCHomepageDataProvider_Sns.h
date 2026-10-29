@interface WCHomepageDataProvider_Sns : MMObject
{
    NSString * fpHash; // +0x8
    BOOL isWorking; // +0x10
    NSString * jumpToItemId; // +0x18
    id <WCHomePageDataProviderDelegate> delegate; // +0x20
    NSString * username; // +0x28
    id <WCHomePageDataProviderStarDelegate> _starDelegate; // +0x30
}
- (void)updateWithReferID:(id)arg1;
- (void)updateWithReferID:(id)arg1 bottomID:(id)arg2;
- (void)updateHeadWithSource:(long long)arg1;
- (void)forceUpdateWithReferID:(id)arg1;
- (void)fetchDataBeforeJumpToItemId:(id)arg1;
- (void)updateMediaWithDataType:(unsigned int)arg1 referID:(id)arg2;
- (void)updateMediaWithDataType:(unsigned int)arg1 referID:(id)arg2 bottomID:(id)arg3;
- (void)updatePrePage:(id)arg1;
- (void)forceUpdateMediaWithDataType:(unsigned int)arg1 referID:(id)arg2;
- (id)converListToList:(id)arg1;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2;
- (void)requestForSnsMediaHomepageWithDataType:(unsigned int)arg1 maxID:(id)arg2 source:(long long)arg3;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2 filterType:(unsigned int)arg3 username:(id)arg4;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2 filterType:(unsigned int)arg3 username:(id)arg4 pullType:(unsigned int)arg5;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3;
- (void)requestForSnsMediaHomepageWithDataType:(unsigned int)arg1 maxID:(id)arg2 minID:(id)arg3 source:(long long)arg4;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3 filterType:(unsigned int)arg4 username:(id)arg5;
- (long long)responseRetCode2HomePageRetCode:(int)arg1;
- (void)startCgiRequest:(id)arg1;
- (void)procssCgiSuccessResponse:(id)arg1 request:(id)arg2;
- (void)procssCgiFailResponse:(id)arg1;
- (void)updateStarListFromResponse:(id)arg1 byRequest:(id)arg2;
- (void)updateDragon2024InfoFromResponse:(id)arg1 byRequest:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)starDelegate;
- (void)setStarDelegate:(id)arg1;
- (void).cxx_destruct;
@end

