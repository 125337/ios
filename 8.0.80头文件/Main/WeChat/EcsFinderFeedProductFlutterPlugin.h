@interface EcsFinderFeedProductFlutterPlugin : NSObject <MMFlutterPlugin, EcsFinderFeedNativeApi>
{
    EcsFinderFeedFlutterApi * _flutterApi; // +0x8
    id /* block */ _onFeedbackAction; // +0x10
    id /* block */ _onLiveEntranceReportAction; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onClickFeedbackX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4 error:(id *)arg5;
- (void)reportLiveEntranceIsClick:(BOOL)arg1 productFeedId:(id)arg2 error:(id *)arg3;
- (id)flutterApi;
- (id /* block */)onFeedbackAction;
- (void)setOnFeedbackAction:(id /* block */)arg1;
- (id /* block */)onLiveEntranceReportAction;
- (void)setOnLiveEntranceReportAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
