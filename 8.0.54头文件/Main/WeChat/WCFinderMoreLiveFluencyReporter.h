@interface WCFinderMoreLiveFluencyReporter : NSObject
{
    NSMutableArray * _infoBuffer; // +0x8
    NSMutableDictionary * _infoDict; // +0x10
    NSMutableArray * _skipReportScenes; // +0x18
}
+ (id)sharedReporter;
- (void)setStartSceneIfCan:(long long)arg1 reportScene:(int)arg2;
- (void)setFinishSceneIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setEnterTimestampIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setGetLiveTabsCGIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setPullLbsStreamCGITimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setPullLbsCGIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setPullCGIFinishProfileIfCan:(id)arg1 reportScene:(int)arg2;
- (void)setLocalOperationFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setDebugMessageIfCan:(id)arg1 reportScene:(int)arg2;
- (void)setShowUIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (BOOL)setUIStartLoadingTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (BOOL)setUIFinishLoadingTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (id)infoBuffer;
- (id)infoDict;
- (id)skipReportScenes;
- (id)getFluencyReportInfoWithReportScene:(int)arg1;
- (void)reportIfOkWithReportScene:(int)arg1;
- (void)clearFluencyReportData;
- (void)skipSpecificReport:(int)arg1;
- (void)setInfoBuffer:(id)arg1;
- (void)setInfoDict:(id)arg1;
- (void)setSkipReportScenes:(id)arg1;
- (void).cxx_destruct;
@end

