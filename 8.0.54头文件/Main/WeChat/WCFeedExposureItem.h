@interface WCFeedExposureItem : MMObject <PBCoding>
{
    BOOL _isFold; // +0x8
    unsigned int _uiCreateTime; // +0xc
    unsigned int _uiCount; // +0x10
    NSString * _nsFeedId; // +0x18
    NSString * _appId; // +0x20
}
+ (void)PBArrayAdd_nsFeedId;
+ (void)PBArrayAdd_uiCreateTime;
+ (void)PBArrayAdd_uiCount;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_isFold;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)nsFeedId;
- (void)setNsFeedId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)uiCreateTime;
- (void)setUiCreateTime:(unsigned int)arg1;
- (unsigned int)uiCount;
- (void)setUiCount:(unsigned int)arg1;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (void).cxx_destruct;
@end

