@interface WCFinderJumperLiveroomParams : NSObject
{
    NSString * _feedId; // +0x8
    NSString * _nonceId; // +0x10
    unsigned long long _liveId; // +0x18
    NSString * _sessionBuffer; // +0x20
    NSString * _bypReportChnlExtra; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)paramsFromLiveNecessaryParamsJSON:(id)arg1;
+ (id)paramsFromLiveLivingStyle:(id)arg1;
- (id)convertToLiveNecessaryParams;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)bypReportChnlExtra;
- (void)setBypReportChnlExtra:(id)arg1;
- (void).cxx_destruct;
@end
