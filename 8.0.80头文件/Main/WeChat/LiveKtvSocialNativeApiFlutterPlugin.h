@interface LiveKtvSocialNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveKtvSocialNativeApi>
{
    UIViewController * _viewController; // +0x8
}
- (void)onAttachedToViewController:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)createKtvRoomWithCompletion:(id /* block */)arg1;
- (void)onCreateKtvRoomEntranceExposedWithError:(id *)arg1;
- (void)enterRandomKtvRoomSongBasicInfoData:(id)arg1 fromWxUsername:(id)arg2 completion:(id /* block */)arg3;
- (void)handleKtvActionWhileInLive:(id)arg1 songItem:(id)arg2 completion:(id /* block */)arg3;
- (id)songItemFromBasicInfoData:(id)arg1;
- (void)onSongRecordsPageBackPressedWithCompletion:(id /* block */)arg1;
- (void)showSongDetailHalfSongItemData:(id)arg1 targetWxUsername:(id)arg2 completion:(id /* block */)arg3;
- (void)onSongDetailHalfSongDeletedSongMid:(id)arg1 onlySingSegment:(BOOL)arg2 error:(id *)arg3;
- (void)onSongDetailHalfDismissPressedWithError:(id *)arg1;
- (void)notifyRecordsSongDeletedWithSongMid:(id)arg1 onlySingSegment:(BOOL)arg2;
- (int)currentCommentScene;
- (void)fetchSquareSingDataWithCommentScene:(int)arg1 completion:(id /* block */)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
