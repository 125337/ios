@interface WAAdRelationTracker : NSObject
{
    NSMutableDictionary * _records; // +0x8
    unsigned long long _expirySeq; // +0x10
}
+ (id)sharedInstance;
+ (BOOL)adTypeFromJsapiValue:(id)arg1 adType:(long long *)arg2;
+ (id)reportAdTypeString:(long long)arg1;
+ (id)reportSpareSceneString:(long long)arg1;
+ (void)safeReportAdHostSimply:(unsigned long long)arg1 extraDict:(id)arg2;
- (id)init;
- (void)markAdAction:(id)arg1 adType:(long long)arg2 isMbAd:(BOOL)arg3;
- (void)markAdAction:(id)arg1 adType:(long long)arg2;
- (void)clearAdAction:(id)arg1 adType:(long long)arg2;
- (BOOL)isAdRelated:(id)arg1;
- (BOOL)isAdActiveForHost:(id)arg1 adType:(long long)arg2 maxKeepAliveMs:(long long)arg3;
- (id)recordForHost:(id)arg1;
- (void)clearExpiredRelationForHost:(id)arg1 generation:(unsigned long long)arg2;
- (void)onHostForeground:(id)arg1;
- (id)reportFieldsFromRecord:(id)arg1;
- (void)reportAdHostWithAction:(unsigned long long)arg1 hostAppId:(id)arg2 adFields:(id)arg3 extra:(id)arg4 spareScene:(id)arg5;
- (void)reportAdHostKilledForHost:(id)arg1 extra:(id)arg2;
- (void)reportAdHostSparedForHost:(id)arg1 scene:(long long)arg2 extra:(id)arg3;
- (id)records;
- (void)setRecords:(id)arg1;
- (unsigned long long)expirySeq;
- (void)setExpirySeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
