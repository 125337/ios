@interface MMFinderLiveKTVSongDetailViewController : MMFinderLiveFlutterViewController <MMPageSheetAdapterDelegate>
{
    MMPageSheetAdapter * _pageSheetAdapter; // +0x70
    id /* block */ _onSongDeleted; // +0x78
}
+ (id)viewControllerWithSongItemData:(id)arg1 targetWxUsername:(id)arg2 isLiveRoom:(BOOL)arg3 onSongDeleted:(id /* block */)arg4;
- (void)setupPageSheetAdapter;
- (id)customFlutterPluginClasses;
- (void)handleSongDeletedWithSongMid:(id)arg1 onlySingSegment:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id /* block */)onSongDeleted;
- (void)setOnSongDeleted:(id /* block */)arg1;
- (void).cxx_destruct;
@end
