@interface WCFinderMPVideoService : MMUserService <WCFinderDataItemExt, MMServiceProtocol>
{
    NSMutableDictionary * _exportIdToTidDict; // +0x8
    NSMutableDictionary * _eposeDict; // +0x10
}
+ (id)playStatusWithPlayerView:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)asyncGetMPVideoMediaWrapWithFinderMPVideoJSON:(id)arg1 complectionBlock:(id /* block */)arg2;
- (void)showMPVideoDetailWithJSON:(id)arg1 playStatus:(id)arg2 extInfo:(id)arg3 currentNavController:(id)arg4 complectionBlock:(id /* block */)arg5 progressBlock:(id /* block */)arg6 callBackBlock:(id /* block */)arg7;
- (void)changeFeedFavStatusWithJSON:(id)arg1 isFav:(BOOL)arg2;
- (void)changeFeedLikeStatusWithJSON:(id)arg1 isLike:(BOOL)arg2;
- (void)reportAppearWithJSON:(id)arg1;
- (void)reportDisAppearWithJSON:(id)arg1;
- (void)reportBePopedWithJSON:(id)arg1;
- (void)_updateExtensionWithDataItem:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByKeyExtention:(BOOL)arg2;
- (int)commentScene;
- (id)exportIdToTidDict;
- (void)setExportIdToTidDict:(id)arg1;
- (id)eposeDict;
- (void)setEposeDict:(id)arg1;
- (void).cxx_destruct;
@end
