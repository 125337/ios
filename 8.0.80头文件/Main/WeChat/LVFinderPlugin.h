@interface LVFinderPlugin : NSObject <WCFinderGlobalPlaybackInfoExt, WCFinderDataItemExt, WCFinderContactExt, WCFinderSeeLaterExt, RingBackInfoDisplaySheetViewDelegate, ForwardMessageLogicDelegate, WCFinderFansProfileViewControllerDelegate, MMFlutterPlugin, MegaVideoFinderApi, MegaVideoPlaybackProgressApi>
{
    MegaVideoFinderCallback * _flutterCallback; // +0x8
    MegaVideoCommCallback * _progressCallback; // +0x10
    UIViewController * _currentViewController; // +0x18
    WCFinderFeedContentVM * _currentFeedContentVM; // +0x20
    NSNumber * _scene; // +0x28
}
+ (id)contentVMFromFinderObjectBytes:(id)arg1 commentScene:(int)arg2;
+ (id)contentVMFromFinderObject:(id)arg1 commentScene:(int)arg2;
+ (id)contentVMFromMegaFeed:(id)arg1 commentScene:(int)arg2;
+ (void)saveDataItemIfNeeded:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)getSelfWeChatContactWithCompletion:(id /* block */)arg1;
- (void)getSelfFinderContactWithCompletion:(id /* block */)arg1;
- (id)getFinderIdentityTypeWithError:(id *)arg1;
- (void)setFinderIdentityType:(long long)arg1 error:(id *)arg2;
- (id)isSelfUsernameUsername:(id)arg1 error:(id *)arg2;
- (void)onTapMoreButtonInFriendsLikeListFeed:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)showFansProfileUsername:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (id)enableShowBulletCommentFeed:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (id)bulletCommentPortraitNumberOfLinesWithError:(id *)arg1;
- (id)bulletCommentFontSizeWithError:(id *)arg1;
- (id)bulletCommentStrokeColorAlphaWithError:(id *)arg1;
- (id)bulletCommentStrokeWidthWithError:(id *)arg1;
- (void)reportBulletCommentFeed:(id)arg1 commentScene:(long long)arg2 commentInfoId:(id)arg3 error:(id *)arg4;
- (id)bulletCommentShowDurationWithError:(id *)arg1;
- (id)shouldShowTextStateWithError:(id *)arg1;
- (id)videoCoverEnabledWithError:(id *)arg1;
- (id)feedSetToSNSCoverSwitchWithError:(id *)arg1;
- (id)showFavEntryOnActionSheetWithError:(id *)arg1;
- (id)ringToneVideoDurationLimitWithError:(id *)arg1;
- (id)showRingToneEntranceWithError:(id *)arg1;
- (id)enableAirPlayVideoWithError:(id *)arg1;
- (void)openFinderProfileUsername:(id)arg1 commentScene:(long long)arg2 isInHalfPanel:(BOOL)arg3 feed:(id)arg4 error:(id *)arg5;
- (id)getSharePanelItemsConfigFeed:(id)arg1 commentScene:(long long)arg2 options:(id)arg3 error:(id *)arg4;
- (void)shareFeedToUserFeed:(id)arg1 username:(id)arg2 scene:(long long)arg3 commentScene:(long long)arg4 error:(id *)arg5;
- (void)shareFeedFeed:(id)arg1 scene:(long long)arg2 commentScene:(long long)arg3 error:(id *)arg4;
- (void)addToTingListenLater:(id)arg1;
- (void)thumbFavFeedFeed:(id)arg1 isFav:(BOOL)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)heartLikeFeedFeed:(id)arg1 isLike:(BOOL)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)followFinderAccoutFeed:(id)arg1 isFollow:(BOOL)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (id)getGlobalPlayProgressesOfTidsTids:(id)arg1 error:(id *)arg2;
- (void)getFinderContactInfoUsername:(id)arg1 completion:(id /* block */)arg2;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByExtention:(BOOL)arg2;
- (void)onFinderContactFollowListHasChange:(id)arg1;
- (void)onSeeLaterStateChanged:(BOOL)arg1 withDataItem:(id)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)dealloc;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)statReportExposeStartFeed:(id)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)statReportExposeEndFeed:(id)arg1 commentscene:(long long)arg2 reportContext:(id)arg3 error:(id *)arg4;
- (void)statReportFlushWithError:(id *)arg1;
- (void)report18054AvatarClickFeed:(id)arg1 commentScene:(long long)arg2 avatarType:(long long)arg3 isLandscape:(BOOL)arg4 error:(id *)arg5;
- (void)openFinderDetailFeedId:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)openWebPageUrl:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)openHalfScreenWebPageUrl:(id)arg1 error:(id *)arg2;
- (void)savePlayProgressFeed:(id)arg1 commentScene:(long long)arg2 playbackTime:(double)arg3 maxPlaybackTime:(double)arg4 stopPlayTimestamp:(double)arg5 error:(id *)arg6;
- (void)openFinderAudioPageCommentScene:(long long)arg1 listenInfo:(id)arg2 startTime:(double)arg3 contextId:(id)arg4 tabContextId:(id)arg5 error:(id *)arg6;
- (id)getPlaybackProgressFeedId:(id)arg1 error:(id *)arg2;
- (id)getAudioResumePositionFeedId:(id)arg1 error:(id *)arg2;
- (void)consumeAudioResumePositionFeedId:(id)arg1 position:(double)arg2 error:(id *)arg3;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1 playInfo:(id)arg2;
- (id)isFinderAudioPlayingWithError:(id *)arg1;
- (id)finderDynamicStringKey:(id)arg1 defaultText:(id)arg2 error:(id *)arg3;
- (id)flutterCallback;
- (void)setFlutterCallback:(id)arg1;
- (id)progressCallback;
- (void)setProgressCallback:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)currentFeedContentVM;
- (void)setCurrentFeedContentVM:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (void).cxx_destruct;
@end
