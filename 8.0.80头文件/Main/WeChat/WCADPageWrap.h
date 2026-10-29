@interface WCADPageWrap : NSObject
{
    WCADShareInfo * shareInfo; // +0x8
    unsigned int clickActionType; // +0x10
    unsigned int _logType; // +0x14
    unsigned int _eventType; // +0x18
    int _subClickPos; // +0x1c
    unsigned int _scene; // +0x20
    unsigned int _adType; // +0x24
    unsigned int _source; // +0x28
    int _canvasPageScene; // +0x2c
    unsigned int _flipStatus; // +0x30
    NSString * _adID; // +0x38
    NSString * _publishID; // +0x40
    NSString * _uxInfo; // +0x48
    NSString * _commonUxInfo; // +0x50
    unsigned long long _startTime; // +0x58
    unsigned long long _endTime; // +0x60
    unsigned long long _clickTime; // +0x68
    NSString * _snsStatExt; // +0x70
    WCStatTimerHelper * _timer; // +0x78
    unsigned long long _exposureStartTime; // +0x80
    WCADSphereReportInfo * _sphereInfo; // +0x88
    WCADVideoPlayInfo * _playInfo; // +0x90
    WCAdFullCardLongPressReportInfo * _longPressReportInfo; // +0x98
    WCAdFullCardDragImageReportInfo * _dragImageReportInfo; // +0xa0
    WCAdFinderTopicReportInfo * _finderTopicReportInfo; // +0xa8
    WCAdSliderCardReportInfo * _sliderCardReportInfo; // +0xb0
    WCAdBreakFrameReportInfo * _breakFrameReportInfo; // +0xb8
    WCAdFinderLiveStreamReportInfo * _finderLiveStreamReportInfo; // +0xc0
    WCAdLookbookCardReportInfo * _lookbookCardReportInfo; // +0xc8
    WCAdShowroomReportInfo * _showroomReportInfo; // +0xd0
    WCAdFlipCardReportInfo * _flipCardReportInfo; // +0xd8
    WCAdRandomSelectCardReportInfo * _randomSelectCardReportInfo; // +0xe0
    WCAdCommonInteractionReportInfo * _commonInteractionReportInfo; // +0xe8
    double _adContentHight; // +0xf0
    WCAdContinuousLikeReportInfo * _continuousLikeReportInfo; // +0xf8
    WCAdFireworkCheerReportInfo * _fireworkCheerReportInfo; // +0x100
    WCAdExpParamsReportInfo * _expParamsInfo; // +0x108
    WCAdClickQualityRelatedInfo * _clickQualityInfo; // +0x110
    unsigned long long _asyncAvatarInfoStatus; // +0x118
    unsigned long long _videoPlayBackTime; // +0x120
    NSString * _miniShopRequestId; // +0x128
}
- (id)init;
- (id)description;
- (id)breakFrameReportInfo;
- (id)finderLiveStreamReportInfo;
- (id)continuousLikeReportInfo;
- (id)fireworkCheerReportInfo;
- (id)clickQualityInfo;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (unsigned int)clickActionType;
- (void)setClickActionType:(unsigned int)arg1;
- (id)adID;
- (void)setAdID:(id)arg1;
- (id)publishID;
- (void)setPublishID:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)commonUxInfo;
- (void)setCommonUxInfo:(id)arg1;
- (unsigned int)logType;
- (void)setLogType:(unsigned int)arg1;
- (unsigned int)eventType;
- (void)setEventType:(unsigned int)arg1;
- (int)subClickPos;
- (void)setSubClickPos:(int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned long long)clickTime;
- (void)setClickTime:(unsigned long long)arg1;
- (unsigned int)adType;
- (void)setAdType:(unsigned int)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)snsStatExt;
- (void)setSnsStatExt:(id)arg1;
- (int)canvasPageScene;
- (void)setCanvasPageScene:(int)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned int)flipStatus;
- (void)setFlipStatus:(unsigned int)arg1;
- (unsigned long long)exposureStartTime;
- (void)setExposureStartTime:(unsigned long long)arg1;
- (id)sphereInfo;
- (void)setSphereInfo:(id)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (id)longPressReportInfo;
- (void)setLongPressReportInfo:(id)arg1;
- (id)dragImageReportInfo;
- (void)setDragImageReportInfo:(id)arg1;
- (id)finderTopicReportInfo;
- (void)setFinderTopicReportInfo:(id)arg1;
- (id)sliderCardReportInfo;
- (void)setSliderCardReportInfo:(id)arg1;
- (void)setBreakFrameReportInfo:(id)arg1;
- (void)setFinderLiveStreamReportInfo:(id)arg1;
- (id)lookbookCardReportInfo;
- (void)setLookbookCardReportInfo:(id)arg1;
- (id)showroomReportInfo;
- (void)setShowroomReportInfo:(id)arg1;
- (id)flipCardReportInfo;
- (void)setFlipCardReportInfo:(id)arg1;
- (id)randomSelectCardReportInfo;
- (void)setRandomSelectCardReportInfo:(id)arg1;
- (id)commonInteractionReportInfo;
- (void)setCommonInteractionReportInfo:(id)arg1;
- (double)adContentHight;
- (void)setAdContentHight:(double)arg1;
- (void)setContinuousLikeReportInfo:(id)arg1;
- (void)setFireworkCheerReportInfo:(id)arg1;
- (id)expParamsInfo;
- (void)setExpParamsInfo:(id)arg1;
- (void)setClickQualityInfo:(id)arg1;
- (unsigned long long)asyncAvatarInfoStatus;
- (void)setAsyncAvatarInfoStatus:(unsigned long long)arg1;
- (unsigned long long)videoPlayBackTime;
- (void)setVideoPlayBackTime:(unsigned long long)arg1;
- (id)miniShopRequestId;
- (void)setMiniShopRequestId:(id)arg1;
- (void).cxx_destruct;
@end
