@interface FinderPlugin : NSObject <FinderNativeAPI, MMFlutterPlugin>
{
    FinderFlutterAPI * _flutterAPI; // +0x8
}
+ (id)plugin;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)finderCommonReportParamsWithError:(id *)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (void).cxx_destruct;
@end

