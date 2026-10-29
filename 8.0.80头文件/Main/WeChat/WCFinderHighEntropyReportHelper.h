@interface WCFinderHighEntropyReportHelper : NSObject
+ (id)commonReportParamsWithCommentScene:(int)arg1;
+ (id)feedReportParamsWithContentVM:(id)arg1 cell:(id)arg2 commentScene:(int)arg3 leftmostImageIndex:(unsigned long long)arg4;
+ (void)appendMediaParamsToParams:(id)arg1 contentVM:(id)arg2 cell:(id)arg3 leftmostImageIndex:(unsigned long long)arg4;
+ (unsigned long long)videoPlayPercentWithContentVM:(id)arg1 cell:(id)arg2;
+ (unsigned long long)photoPlayPercentWithContentVM:(id)arg1 leftmostImageIndex:(unsigned long long)arg2;
@end
