@interface MMFinderLiveKTVSongRecordsViewController : MMFinderLiveFlutterViewController <MMPageSheetAdapterDelegate>
{
    BOOL _isLiveRoom; // +0x70
    BOOL _isHalfScreen; // +0x71
    MMPageSheetAdapter * _pageSheetAdapter; // +0x78
    id /* block */ _onBackPressed; // +0x80
}
+ (id)viewControllerWithTargetWxUsername:(id)arg1 isHalfScreen:(BOOL)arg2 isLiveRoom:(BOOL)arg3 onBackPressed:(id /* block */)arg4;
- (void)setupPageSheetAdapter;
- (id)customFlutterPluginClasses;
- (BOOL)handleSongRecordsBackPressed;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)isLiveRoom;
- (void)setIsLiveRoom:(BOOL)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (id /* block */)onBackPressed;
- (void)setOnBackPressed:(id /* block */)arg1;
- (void).cxx_destruct;
@end
