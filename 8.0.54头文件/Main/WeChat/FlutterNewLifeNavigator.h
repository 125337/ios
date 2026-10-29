@interface FlutterNewLifeNavigator : NSObject <FlutterNavigatorDelegate>
{
    BOOL _tryReuseEngineForDetail; // +0x8
    BOOL _autoReleaseFlutterViewForDetail; // +0x9
    MMFlutterInstance * _detailInstance; // +0x10
}
- (id)init;
- (id)initWithTryReuseEngineForDetail:(BOOL)arg1;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (id)generateNewLifePageSheetStyle;
- (BOOL)tryReuseEngineForDetail;
- (void)setTryReuseEngineForDetail:(BOOL)arg1;
- (id)detailInstance;
- (void)setDetailInstance:(id)arg1;
- (BOOL)autoReleaseFlutterViewForDetail;
- (void)setAutoReleaseFlutterViewForDetail:(BOOL)arg1;
- (void).cxx_destruct;
@end

