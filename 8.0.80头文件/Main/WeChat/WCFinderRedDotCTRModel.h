@interface WCFinderRedDotCTRModel : NSObject
{
    NSMutableDictionary * _businessCTRDic; // +0x8
}
- (id)init;
- (id)businessCTRDic;
- (id)description;
- (void)_resetAllClientInfo;
- (void)mergeFromSvrInfo:(id)arg1 updateTime:(long long)arg2;
- (void)increaseExposeCount:(unsigned long long)arg1;
- (void)_debouncePerformSyncBusinessPctrRedDotDic;
- (void)syncBusinessPctrRedDotDic;
- (void)increaseClickCount:(unsigned long long)arg1;
- (id)getCtrBusinessRangeArray;
- (id)getFeatureBusinessTypePriorities;
- (BOOL)isFeatureBusinessType:(unsigned long long)arg1;
- (BOOL)isSvrBusinessType:(unsigned long long)arg1;
- (id)getSortedBusinessTypePriorities;
- (double)getTargetCtrValue:(unsigned long long)arg1;
- (id)getBusinessCtrDic;
- (long long)getRedDotClickCountByBusinessType:(unsigned long long)arg1 intervalType:(int)arg2;
- (long long)getRedDotExposeCountByBusinessType:(unsigned long long)arg1 intervalType:(int)arg2;
- (id)_getCountDictFromCountArray:(id)arg1;
- (id)getRedDotClickCountDictByBusinessType:(unsigned long long)arg1;
- (id)getRedDotExposeCountDictByBusinessType:(unsigned long long)arg1;
- (void)setBusinessCTRDic:(id)arg1;
- (void).cxx_destruct;
@end
