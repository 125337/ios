@interface TemplateFinderLiveOPWrap : NSObject <YYModel>
{
    NSString * _feedID; // +0x8
    NSString * _nonceID; // +0x10
    NSString * _liveID; // +0x18
    NSString * _forcePushInfo; // +0x20
    unsigned long long _uFeedID; // +0x28
    unsigned long long _uliveID; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)finderLiveOPWrapWithJSON:(id)arg1;
- (id)feedID;
- (id)liveID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (void)setLiveID:(id)arg1;
- (id)forcePushInfo;
- (void)setForcePushInfo:(id)arg1;
- (unsigned long long)uFeedID;
- (void)setUFeedID:(unsigned long long)arg1;
- (unsigned long long)uliveID;
- (void)setUliveID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

