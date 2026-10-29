@interface WCFinderPickerSearchViewModel : WCFinderSearchViewModel
{
    WCFinderFeedPickerParams * _params; // +0x8
    NSString * _udfKVStr; // +0x10
    NSString * _latestQueryText; // +0x18
}
- (int)searchSceneFromPickerScene:(int)arg1;
- (void)queryContactWith:(id)arg1;
- (void)onQueryNextPageDataItem;
- (id)getCustomUdfKvJsonStr;
- (id)udfKVStr;
- (void)report22878DataWithFeedID:(id)arg1 feedPos:(long long)arg2 isClickAction:(BOOL)arg3 isVideoFeed:(BOOL)arg4;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setUdfKVStr:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (void).cxx_destruct;
@end

