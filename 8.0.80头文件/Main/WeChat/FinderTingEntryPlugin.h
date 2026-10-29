@interface FinderTingEntryPlugin : NSObject <FinderTingEntryNativeAPI, MMFlutterPlugin>
{
    MMFlutterViewController * _flutterVC; // +0x8
    FinderTingEntryFlutterAPI * _flutterAPI; // +0x10
}
+ (id)plugin;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController:(id)arg1;
- (void)onClickJumpWithError:(id *)arg1;
- (void)onClickCloseWithError:(id *)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (void).cxx_destruct;
@end
