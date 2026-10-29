@interface WCCanvasReportMgr : MMObject <WCCanvasDynamicDataLoaderDelegate>
{
    BOOL _bSearchCanvas; // +0x8
    BOOL _hasReportInit; // +0x9
    WCCanvasReportInfo * _reportInfo; // +0x10
    WCStatTimerHelper * _pageTimeHelper; // +0x18
    NSMutableDictionary * _componentTimeHelperDict; // +0x20
    NSMutableDictionary * _componentReportInfoDict; // +0x28
    NSMutableDictionary * _videoTimeHelperDict; // +0x30
    NSMutableDictionary * _sightStreamTimeHelperDict; // +0x38
    unsigned long long _lastStreamVideoPlayCompleteTime; // +0x40
    unsigned long long _lastSightStreamVideoPlayCompleteTime; // +0x48
    WCCanvasDynamicDataLoader * _dataLoader; // +0x50
}
+ (void)tryToReportDownloadInfoWithUrl:(id)arg1 mediaType:(unsigned int)arg2 isPreload:(unsigned int)arg3 costTime:(unsigned long long)arg4 retCode:(long long)arg5 scene:(unsigned int)arg6 downloadSize:(long long)arg7 startDownloadTime:(unsigned long long)arg8;
- (void)reportCanvasAdInitWithSnsId:(id)arg1 uxInfo:(id)arg2 inScene:(int)arg3 withEnterType:(unsigned int)arg4 enableSwipe:(BOOL)arg5 componentItemsCount:(unsigned int)arg6 snsStatExt:(id)arg7 extraInfo:(id)arg8 originScene:(int)arg9 canvasId:(unsigned long long)arg10 viewId:(id)arg11;
- (void)reportCanvasAdEnterWithSnsId:(id)arg1 uxInfo:(id)arg2 inScene:(int)arg3 withEnterType:(unsigned int)arg4 andSource:(unsigned int)arg5 originScene:(int)arg6 canvasId:(unsigned long long)arg7;
- (void)tryToReportRightSwipePage;
- (void)tryToReportShareTimeLine;
- (void)tryToReportSendFriendMsg;
- (void)tryToReportAddFavItem;
- (void)tryToUpdateSharedUxinfoWith:(id)arg1;
- (void)tryToUpdateExtraInfo:(id)arg1;
- (void)tryToReportExitWithLeaveType:(unsigned int)arg1 andSource:(unsigned int)arg2;
- (void)tryToReportComponentExposureStart:(id)arg1;
- (void)tryToReportComponentExposureEnd:(id)arg1;
- (void)tryToAddReportComponentExposure:(id)arg1;
- (void)tryToReportButtonComponentClick:(id)arg1;
- (void)tryToReportButtonComponentInit:(id)arg1;
- (void)tryToReportPureImageUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportFullScreenImageUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportBasicActionComponentClick:(id)arg1;
- (void)tryToReportSightComponentDuration:(struct)arg1 WithItem:(id)arg2;
- (void)tryToReportSightComponentPlayStart:(id)arg1;
- (void)tryToReportSightComponentPlayEnd:(id)arg1;
- (void)tryToReportSightComponentPlayComplete:(id)arg1;
- (void)tryToReportSightComponentClickVoiceControl:(id)arg1;
- (void)tryToReportSightIsAutoPlay:(id)arg1 isAutoPlay:(BOOL)arg2;
- (void)tryToReportSightThumbUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportSightUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportSightComponentClick:(id)arg1;
- (void)tryToReportSightComponentClickStreamButtonEntrance:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayStart:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayEnd:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayComplete:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayFromBegining:(id)arg1;
- (void)tryToReportSightCDNComponentUseNewUI:(id)arg1;
- (void)tryToReportSightCDNComponentFloatAreaExposedData:(id)arg1 withFloatAreaStayTime:(unsigned long long)arg2 floatAreaExposureCount:(unsigned int)arg3 buttonStayTime:(unsigned long long)arg4 buttonExposureCount:(unsigned int)arg5;
- (void)tryToReportSightCDNComponentFloatAreaClick:(id)arg1 isFullClick:(BOOL)arg2;
- (void)tryToReportSightCDNComponentClick:(id)arg1 withType:(unsigned int)arg2;
- (void)tryToReportStreamComponentDuration:(struct)arg1 WithItem:(id)arg2;
- (void)tryToReportStreamComponentPlayStart:(id)arg1;
- (void)tryToReportStreamComponentPlayEnd:(id)arg1;
- (void)tryToReportStreamComponentPlayComplete:(id)arg1;
- (void)tryToReportStreamComponentClickPlayButton:(id)arg1;
- (void)tryToReportStreamComponentClickVoiceControl:(id)arg1;
- (void)tryToReportStreamComponentIsAutoPlay:(id)arg1 isAutoPlay:(BOOL)arg2;
- (void)tryToReportStreamComponentThumbUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportStreamCDNComponentUseNewUI:(id)arg1;
- (void)tryToReportStreamCDNComponentFloatAreaExposedData:(id)arg1 withFloatAreaStayTime:(unsigned long long)arg2 floatAreaExposureCount:(unsigned int)arg3 buttonStayTime:(unsigned long long)arg4 buttonExposureCount:(unsigned int)arg5;
- (void)tryToReportStreamCDNComponentFloatAreaClick:(id)arg1 isFullClick:(BOOL)arg2;
- (void)tryToReportFullscreenVideoLeave:(id)arg1 stayTotalTime:(unsigned long long)arg2;
- (void)addComponentStayTime:(id)arg1 stayTime:(unsigned long long)arg2;
- (void)tryToReportStreamCDNComponentClick:(id)arg1 withType:(unsigned int)arg2;
- (void)tryToReportPanoramaComponentUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportSphereImagePan:(id)arg1;
- (void)tryToReportBottomSwipeComponentJump:(id)arg1;
- (void)tryToReportGeneralVideoComponent:(id)arg1 withDuration:(struct)arg2;
- (void)tryToReportGeneralVideoComponentPlayStart:(id)arg1;
- (void)tryToReportGeneralVideoComponentPlayEnd:(id)arg1;
- (void)tryToReportGeneralVideoComponentPlayComplete:(id)arg1;
- (void)tryToReportGeneralVideoComponentClickPlayButton:(id)arg1;
- (void)tryToReportGeneralVideoComponentClickVoiceControl:(id)arg1;
- (void)tryToReportGeneralVideoComponent:(id)arg1 isAutoPlay:(BOOL)arg2;
- (void)tryToReportGeneralVideoComponentThumbUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportGeneralVideoComponentVideoUrlInfo:(id)arg1 needDownload:(BOOL)arg2;
- (void)tryToReportGeneralVideoComponentClickSight:(id)arg1;
- (void)tryToReportGeneralVideoComponent:(id)arg1 withClickType:(unsigned int)arg2;
- (void)tryToReportGeneralVideoComponent:(id)arg1 withFloatAreaStayTime:(unsigned long long)arg2 floatAreaExposureCount:(unsigned int)arg3 buttonStayTime:(unsigned long long)arg4 buttonExposureCount:(unsigned int)arg5;
- (void)tryToReportGeneralVideoComponent:(id)arg1 floatAreaClickIsFullClick:(BOOL)arg2;
- (void)tryToReportWebStoreComponent:(id)arg1 isPreloaded:(BOOL)arg2;
- (void)tryToReportWebStoreComponent:(id)arg1 loadingTime:(unsigned long long)arg2;
- (void)tryToReportWebStoreComponentDidClickDone:(id)arg1;
- (void)tryToReportSocialComponent:(id)arg1 withUIType:(int)arg2;
- (void)tryToReportHalfRandomCardComponent:(id)arg1 cardId:(id)arg2;
- (void)tryToReportRandomLayoutComponentPickCardBottomClicked:(id)arg1;
- (void)tryToReportRandomPickCardComponentCardClicked:(id)arg1 isPicked:(BOOL)arg2;
- (void)tryToReportFloatJumpComponentClick:(id)arg1 clickSource:(unsigned long long)arg2;
- (void)tryToReportRedEnvelopComponentExposure:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (void)tryToReportRedEnvelopComponentButtonClick:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (void)tryToReportRedEnvelopComponentShareLinkClick:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (id)getRedEnvelopCardInfoForItem:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (void)tryToReportMusicComponent:(id)arg1 musicDuration:(unsigned int)arg2 playCount:(unsigned int)arg3 playCompletedCount:(unsigned int)arg4 playedTime:(unsigned long long)arg5 maxPlayTime:(unsigned int)arg6;
- (void)tryToReportBackgroundMusicComponent:(id)arg1 exposureCount:(unsigned int)arg2 stayTime:(unsigned long long)arg3;
- (id)getComponentReportInfoUsingItem:(id)arg1;
- (id)getComponentReportInfoUsingItem:(id)arg1 withAssertType:(Class)arg2;
- (id)getTimerHelperInDict:(id)arg1 usingKey:(id)arg2;
- (id)reportInfo;
- (id)pageTimeHelper;
- (id)componentReportInfoDict;
- (id)componentTimeHelperDict;
- (id)videoTimeHelperDict;
- (id)sightStreamTimeHelperDict;
- (id)dataLoader;
- (BOOL)bSearchCanvas;
- (void)setBSearchCanvas:(BOOL)arg1;
- (void)setReportInfo:(id)arg1;
- (BOOL)hasReportInit;
- (void)setHasReportInit:(BOOL)arg1;
- (void)setPageTimeHelper:(id)arg1;
- (void)setComponentTimeHelperDict:(id)arg1;
- (void)setComponentReportInfoDict:(id)arg1;
- (void)setVideoTimeHelperDict:(id)arg1;
- (void)setSightStreamTimeHelperDict:(id)arg1;
- (unsigned long long)lastStreamVideoPlayCompleteTime;
- (void)setLastStreamVideoPlayCompleteTime:(unsigned long long)arg1;
- (unsigned long long)lastSightStreamVideoPlayCompleteTime;
- (void)setLastSightStreamVideoPlayCompleteTime:(unsigned long long)arg1;
- (void)setDataLoader:(id)arg1;
- (void).cxx_destruct;
@end

