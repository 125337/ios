@interface WCFinderGetFeedAsyncInfoCGIConfig : NSObject
{
    int _searchScene; // +0x8
    int _triggerScene; // +0xc
    NSString * _uxinfo; // +0x10
    WCFinderPushFeedViewProductParams * _productInfo; // +0x18
    long long _reportScene; // +0x20
    NSArray * _appendScenes; // +0x28
    CLLocation * _customLocation; // +0x30
    NSData * _asyncLoadInfoBuffer; // +0x38
    NSMutableDictionary * _feedProductIdMap; // +0x40
}
- (id)init;
- (BOOL)notDeleteJumpInfoContainer;
- (void)saveProductId:(unsigned long long)arg1 withFeedId:(id)arg2;
- (unsigned long long)getProductIdWithFeedId:(id)arg1;
- (id)feedProductIdMap;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (int)searchScene;
- (void)setSearchScene:(int)arg1;
- (int)triggerScene;
- (void)setTriggerScene:(int)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (long long)reportScene;
- (void)setReportScene:(long long)arg1;
- (id)appendScenes;
- (void)setAppendScenes:(id)arg1;
- (id)customLocation;
- (void)setCustomLocation:(id)arg1;
- (id)asyncLoadInfoBuffer;
- (void)setAsyncLoadInfoBuffer:(id)arg1;
- (void)setFeedProductIdMap:(id)arg1;
- (void).cxx_destruct;
@end
