@interface WCFinderRedDotServerFeatureMMKV : NSObject
{
    NSMutableDictionary * _businessCTRDic; // +0x8
}
+ (int)_featureBusinessTypeFromEmBusinessType:(long long)arg1;
- (id)init;
- (id)defaultMMKVMapID;
- (id)getServerFeatureMMKV;
- (BOOL)hasServerFeatureData;
- (id)_loadBusinessCTRDicFromMMKV;
- (void)_syncToMMKV;
- (void)_debouncePerformSyncToMMKV;
- (void)mergeFromSvrInfo:(id)arg1 updateTime:(long long)arg2;
- (void)increaseExposeCount:(int)arg1;
- (void)increaseClickCount:(int)arg1;
- (id)_getCountDictFromCountArray:(id)arg1;
- (id)getRedDotClickCountDictByBusinessType:(int)arg1;
- (id)getRedDotExposeCountDictByBusinessType:(int)arg1;
- (id)businessCTRDic;
- (void)setBusinessCTRDic:(id)arg1;
- (void).cxx_destruct;
@end
