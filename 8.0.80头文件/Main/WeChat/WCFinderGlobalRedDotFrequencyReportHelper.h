@interface WCFinderGlobalRedDotFrequencyReportHelper : NSObject
{
    id <WCFinderGlobalRedDotFrequencyReportHelperDelegate> _delegate; // +0x8
    WCFinderRedDotDictionaryHelper * _reportDic; // +0x10
    WCFinderGlobalFrequencyClickInfo * _lastClickEntryInfo; // +0x18
    unsigned long long _willAppearFindPageTimeStamp; // +0x20
    unsigned long long _willDisappearFindPageTimeStamp; // +0x28
    long long _enterBackgroundTimeStamp; // +0x30
}
+ (long long)getLastTabTypeFromPath:(id)arg1 businessType:(unsigned long long)arg2;
+ (id)getRedDotPathFromFindPageIdx:(long long)arg1;
+ (BOOL)isSameBusinessFromPath:(id)arg1 fromBusinessType:(unsigned long long)arg2 toPath:(id)arg3 toBusinessType:(unsigned long long)arg4;
+ (id)entryPathArray;
+ (id)singleEntryPathArray;
+ (BOOL)isSingleEntryPath:(id)arg1;
+ (long long)convertCalcReasonType:(long long)arg1;
- (id)init;
- (void)dealloc;
- (void)addObserverForForegroundNotification;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (id)reportDic;
- (void)addSingleEntryPath:(id)arg1;
- (void)addMultiEntryPath:(id)arg1;
- (unsigned long long)getBusinessTypeAtPath:(id)arg1 lastTabType:(long long)arg2;
- (long long)getCurrentTabTypeFromPath:(id)arg1;
- (void)updateClickActionInfoAtIdx:(long long)arg1 withRedDot:(BOOL)arg2;
- (void)triggerReportAbortActionAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)updateReportCurrentInfoAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)lastClickEntryInfo;
- (void)loadFindPageEntryKeyDic;
- (void)resetReportDicInfo;
- (BOOL)clickFromBusiness;
- (void)updateEntryRedDotInfoWhenWillExpose;
- (void)updateEntryRedDotInfoWhenWillDisappear;
- (void)markReportData;
- (void)targetRedDotPathExpose:(id)arg1;
- (void)updateTargetClickActionCleanTypeAtPath:(id)arg1 businessType:(unsigned long long)arg2 cleanAccType:(long long)arg3;
- (void)triggerReportByClickBusiness:(BOOL)arg1 reasonType:(long long)arg2 shouldReset:(BOOL)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setReportDic:(id)arg1;
- (void)setLastClickEntryInfo:(id)arg1;
- (unsigned long long)willAppearFindPageTimeStamp;
- (void)setWillAppearFindPageTimeStamp:(unsigned long long)arg1;
- (unsigned long long)willDisappearFindPageTimeStamp;
- (void)setWillDisappearFindPageTimeStamp:(unsigned long long)arg1;
- (long long)enterBackgroundTimeStamp;
- (void)setEnterBackgroundTimeStamp:(long long)arg1;
- (void).cxx_destruct;
@end
