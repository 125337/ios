@interface WCAdvertiseStatMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMutableDictionary * _adID2BodyMap; // +0x8
    NSMutableDictionary * _adID2CommentMap; // +0x10
    NSMutableArray * _pictureWrapList; // +0x18
    unsigned int _clickMinuteFrequency; // +0x20
    unsigned int _clickMinuteReportCount; // +0x24
    unsigned int _clickMinuteTimestamp; // +0x28
    unsigned int _exposureMinuteFrequency; // +0x2c
    unsigned int _exposureMinuteReportCount; // +0x30
    unsigned int _exposureMinuteTimestamp; // +0x34
    NSMutableSet * _forbidReportTimelineExposureFeedIdSet; // +0x38
    BOOL _startRecordAdPageChange; // +0x40
    NSString * _adInfo; // +0x48
    NSString * _currUrl; // +0x50
    NSString * _sessionId; // +0x58
    NSMutableDictionary * _appId2WAPageInfo; // +0x60
    NSMutableSet * _adShareExposureIdSet; // +0x68
}
+ (BOOL)isSameMinuteTimestampA:(unsigned int)arg1 andTimestampB:(unsigned int)arg2;
- (id)init;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (void)willDisplayADBody:(id)arg1;
- (void)endDisplayADBody:(id)arg1 dataItem:(id)arg2;
- (void)willDisplayADComment:(id)arg1;
- (void)endDisplayADComment:(id)arg1;
- (void)reportAllFeedsADLog;
- (void)logADBodyLog:(id)arg1;
- (void)logADCommentLog:(id)arg1;
- (void)logADDetail:(id)arg1 dataItem:(id)arg2;
- (void)logADH5:(id)arg1;
- (void)logADH5:(id)arg1 withUserInfo:(id)arg2 reportType:(unsigned long long)arg3;
- (void)logADPoiH5:(id)arg1;
- (void)logADFloatView:(id)arg1;
- (void)logADBrandProfile:(id)arg1;
- (void)logHeadImageH5:(id)arg1;
- (void)logSphereViewInTimeLineWithWrapInfo:(id)arg1 dataItem:(id)arg2;
- (void)logSphereViewInDetailWithWrapInfo:(id)arg1 dataItem:(id)arg2;
- (void)logSphereViewWithSphereReportInfo:(id)arg1 dataItem:(id)arg2 scene:(unsigned int)arg3;
- (void)startPicture:(id)arg1 startIndex:(unsigned int)arg2 totalNum:(unsigned int)arg3;
- (void)changePictureFromIndex:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)endPicture:(id)arg1 adType:(unsigned int)arg2;
- (void)startViewVideo:(id)arg1;
- (void)endViewVideo:(id)arg1;
- (void)startViewStreamVideo:(id)arg1;
- (void)endViewStreamVideo:(id)arg1;
- (void)startAdDisappear:(id)arg1 adCell:(id)arg2;
- (void)startAdResumeAppear:(id)arg1 adCell:(id)arg2;
- (unsigned long long)fetchVideoTotalTimeFrom:(id)arg1;
- (void)exposureADFeed:(id)arg1 dataItem:(id)arg2;
- (void)exposureADDetail:(id)arg1 dataItem:(id)arg2;
- (void)eventADPage:(id)arg1;
- (id)logAdPoiClickPos:(id)arg1 exposureScene:(long long)arg2;
- (id)logAdExpandLogoClickPos:(id)arg1 exposureScene:(long long)arg2;
- (id)logAdCanvasClickPost:(id)arg1 exposureScene:(long long)arg2;
- (id)logAdCanvasClickPost:(id)arg1 exposureScene:(long long)arg2 actionType:(long long)arg3;
- (id)logAdCanvasClickPost:(id)arg1 exposureScene:(long long)arg2 actionType:(long long)arg3 subClickPos:(int)arg4;
- (id)fetchFeedExpReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (void)dynamicFeedExpReportClickAction:(id)arg1;
- (void)dynamicFeedExpReportExposureBeginAction:(id)arg1 scene:(unsigned long long)arg2;
- (void)dynamicFeedExpReportExposureEndAction:(id)arg1 scene:(unsigned long long)arg2;
- (id)generateDynamicFeedExpExposureReportCommonExtInfoWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (id)generateDynamicFeedExpExposureReportClickExtInfoWithPageWrap:(id)arg1 adInfo:(id)arg2 scene:(unsigned long long)arg3 extInfo:(id)arg4;
- (id)generateDynamicFeedExpExposureReportExposureExtInfoWithScene:(unsigned long long)arg1 extInfo:(id)arg2;
- (BOOL)shouldReportDynamicFeedExpExposureWithAdInfo:(id)arg1;
- (void)parseClickQualityInfoForRequest:(id)arg1 withPageWrap:(id)arg2;
- (void)reportADClickForRequest:(id)arg1 andSnsid:(id)arg2;
- (BOOL)reportADExposureForRequest:(id)arg1 andSnsid:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleADClickResponse:(id)arg1;
- (void)handleADExposureResponse:(id)arg1;
- (void)startRecordAdPageChange:(id)arg1 currWebView:(id)arg2 currUrl:(id)arg3;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)initWebViewSessionId:(id)arg1;
- (void)webviewPageChange:(unsigned long long)arg1 currUrl:(id)arg2 referUrl:(id)arg3 errCode:(int)arg4;
- (void)endRecordAdPageChange;
- (void)handleAddataReport:(id)arg1;
- (void)adDataReport:(unsigned int)arg1 logExt:(id)arg2;
- (void)adDataReport:(unsigned int)arg1 logExts:(id)arg2;
- (id)getAdvertiseInfoForItem:(id)arg1;
- (void)setRemindFriendsInfoForAdClickRequest:(id)arg1 AndItemID:(id)arg2;
- (void)setRemindFriendsInfoForAdClickRequest:(id)arg1 AndItem:(id)arg2;
- (void)setRemindFriendsInfoForADExposureRequest:(id)arg1 AndItem:(id)arg2;
- (void)startRecordAdWeAppPage:(id)arg1 appid:(id)arg2 pagePath:(id)arg3 scene:(unsigned long long)arg4 sceneNote:(id)arg5;
- (void)endRecordAdWeAppPage:(id)arg1 closeType:(unsigned long long)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)doQRJumpToContactReportWithContact:(id)arg1 jumpParams:(id)arg2;
- (void)adGestureInfoReport:(unsigned int)arg1 logExt:(id)arg2 source:(unsigned int)arg3;
- (id)fetchLongPressReportInfoForData:(id)arg1 scene:(unsigned long long)arg2;
- (void)doLongPressActionReport:(id)arg1 data:(id)arg2 scene:(unsigned long long)arg3;
- (void)doLongPressExposureReportWithPlayCount:(int)arg1 playTotalTime:(unsigned long long)arg2 data:(id)arg3 scene:(unsigned long long)arg4;
- (void)doLongPressReportWithData:(id)arg1 scene:(unsigned long long)arg2 extInfo:(id)arg3 channelId:(id)arg4;
- (id)fetchDragImageReportInfoForData:(id)arg1 scene:(unsigned long long)arg2;
- (int)getAdBrandFollowState:(id)arg1;
- (int)getDarkmodeState;
- (BOOL)isAdBrandBeFollowed:(id)arg1;
- (BOOL)isAdRelievedBuyShow:(id)arg1;
- (id)fetchUxInfo:(id)arg1;
- (unsigned int)forbidAutoPlay:(id)arg1;
- (id)getPassThrough:(id)arg1;
- (void)reportConversionOnlineClick:(id)arg1 clickPos:(long long)arg2 eventId:(int)arg3 costTime:(unsigned long long)arg4;
- (BOOL)needReportConversionOnlineClick:(long long)arg1;
- (id)fetchFinderTopicReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)createFinderTopicReportInfo:(id)arg1;
- (void)processFinderTopicReportInfo:(id)arg1 dataItem:(id)arg2;
- (id)fetchSliderCardReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)createSliderCardReportInfo:(id)arg1;
- (id)createSliderCardReportItem:(id)arg1 index:(int)arg2 extra:(id)arg3 hasBorder:(BOOL)arg4;
- (void)processSliderCardReportInfo:(id)arg1 dataItem:(id)arg2;
- (void)processSliderCardReportItem:(id)arg1 withMediaItem:(id)arg2;
- (id)fetchBreakFrameReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchFinderLiveStreamReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchLookbookCardReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)createLookbookCardReportInfo:(id)arg1;
- (id)createLookbookReportItem:(id)arg1 index:(unsigned long long)arg2;
- (void)processLookbookCardReportInfo:(id)arg1 dataItem:(id)arg2;
- (void)processLookbookCardReportItem:(id)arg1 withMediaItem:(id)arg2;
- (void)processLookbookCardBrandNewReportItem:(id)arg1 withMediaItem:(id)arg2;
- (id)fetchShowroomReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)createShowroomReportInfo:(id)arg1;
- (void)processShowroomReportInfo:(id)arg1 dataItem:(id)arg2;
- (id)fetchShowroomReportItem:(id)arg1 byReportIndex:(long long)arg2;
- (void)processShowroomReportItem:(id)arg1 withMediaItem:(id)arg2;
- (id)fetchFlipCardReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)createFlipCardReportInfo:(id)arg1;
- (id)createFlipCardReportItem:(id)arg1 index:(unsigned long long)arg2;
- (void)processFlipCardReportInfo:(id)arg1 dataItem:(id)arg2;
- (void)processFlipCardReportItem:(id)arg1 withMediaItem:(id)arg2;
- (id)fetchRandomSelectCardReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchCommonInteractionReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchContinuousLikeReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchFireworkCheerReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (void)logAsyncAvatarInfoAvailable:(id)arg1 scene:(unsigned long long)arg2 imageExists:(BOOL)arg3;
- (void)reportAsyncAvatarInfoStatusInTimeline:(id)arg1 dataItem:(id)arg2;
- (void)reportAsyncAvatarInfoStatusInDetail:(id)arg1 dataItem:(id)arg2;
- (void)reportAsyncAvatarInfoStatus:(unsigned long long)arg1 dataItem:(id)arg2 scene:(unsigned long long)arg3;
- (void)willDisplayADShare:(id)arg1;
- (void)endDisplayADShare:(id)arg1;
- (id)fetchBodyWrap:(id)arg1;
- (id)fetchCommentWrap:(id)arg1;
- (id)getCachedBodyWrapList;
- (id)forbidReportTimelineExposureFeedIdSet;
- (void)setForbidReportTimelineExposureFeedIdSet:(id)arg1;
- (id)adShareExposureIdSet;
- (void)setAdShareExposureIdSet:(id)arg1;
- (void).cxx_destruct;
@end
