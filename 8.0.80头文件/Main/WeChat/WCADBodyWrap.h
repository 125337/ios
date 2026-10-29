@interface WCADBodyWrap : NSObject
{
    BOOL _isFulllyAppearing; // +0x8
    unsigned int _startPositionType; // +0xc
    unsigned int _endPositionType; // +0x10
    unsigned int _source; // +0x14
    NSString * _adID; // +0x18
    NSString * _publishID; // +0x20
    NSString * _uxInfo; // +0x28
    unsigned long long _startTime; // +0x30
    unsigned long long _endTime; // +0x38
    unsigned long long _halfStartTime; // +0x40
    unsigned long long _halfEndTime; // +0x48
    unsigned long long _allStartTime; // +0x50
    unsigned long long _allEndTime; // +0x58
    double _readHeight; // +0x60
    double _unReadTopHeight; // +0x68
    double _unReadBottomHeight; // +0x70
    double _tableContentY; // +0x78
    WCADVideoPlayInfo * _playInfo; // +0x80
    NSString * _snsStatExt; // +0x88
    unsigned long long _adDisappearTime; // +0x90
    unsigned long long _adDisappearDuration; // +0x98
    unsigned long long _adFullExposeDisappearTime; // +0xa0
    unsigned long long _adFullExposeDisappearDuration; // +0xa8
    WCADSphereReportInfo * _sphereInfo; // +0xb0
    WCAdFullCardLongPressReportInfo * _longPressReportInfo; // +0xb8
    WCAdFullCardDragImageReportInfo * _dragImageReportInfo; // +0xc0
    WCAdFinderTopicReportInfo * _finderTopicReportInfo; // +0xc8
    WCAdSliderCardReportInfo * _sliderCardReportInfo; // +0xd0
    WCAdBreakFrameReportInfo * _breakFrameReportInfo; // +0xd8
    WCAdFinderLiveStreamReportInfo * _finderLiveStreamReportInfo; // +0xe0
    WCAdLookbookCardReportInfo * _lookbookCardReportInfo; // +0xe8
    WCAdShowroomReportInfo * _showroomReportInfo; // +0xf0
    WCAdFlipCardReportInfo * _flipCardReportInfo; // +0xf8
    WCAdRandomSelectCardReportInfo * _randomSelectCardReportInfo; // +0x100
    WCAdCommonInteractionReportInfo * _commonInteractionReportInfo; // +0x108
    double _adContentHight; // +0x110
    WCAdContinuousLikeReportInfo * _continuousLikeReportInfo; // +0x118
    WCAdFireworkCheerReportInfo * _fireworkCheerReportInfo; // +0x120
    WCAdExpParamsReportInfo * _expParamsInfo; // +0x128
    WCAdClickQualityRelatedInfo * _clickQualityInfo; // +0x130
    unsigned long long _asyncAvatarInfoStatus; // +0x138
    NSString * _adInfoAddress; // +0x140
    NSString * _cacheKey; // +0x148
    AdExposureTimerHelper * _adHalfExposureTimer; // +0x150
    AdExposureTimerHelper * _adFullExposureTimer; // +0x158
}
- (id)init;
- (id)fetchTimerHelper:(BOOL)arg1;
- (void)startExposureTimeRecord:(BOOL)arg1;
- (void)stopExposureTimeRecord:(BOOL)arg1;
- (void)beginAdFeedDisappear:(BOOL)arg1;
- (void)endAdFeedDisappear:(BOOL)arg1;
- (unsigned long long)fetchExposureTime:(BOOL)arg1;
- (void)resetExposureTimer;
- (id)breakFrameReportInfo;
- (id)finderLiveStreamReportInfo;
- (id)continuousLikeReportInfo;
- (id)fireworkCheerReportInfo;
- (id)clickQualityInfo;
- (id)adID;
- (void)setAdID:(id)arg1;
- (id)publishID;
- (void)setPublishID:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (unsigned int)startPositionType;
- (void)setStartPositionType:(unsigned int)arg1;
- (unsigned int)endPositionType;
- (void)setEndPositionType:(unsigned int)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned long long)halfStartTime;
- (void)setHalfStartTime:(unsigned long long)arg1;
- (unsigned long long)halfEndTime;
- (void)setHalfEndTime:(unsigned long long)arg1;
- (unsigned long long)allStartTime;
- (void)setAllStartTime:(unsigned long long)arg1;
- (unsigned long long)allEndTime;
- (void)setAllEndTime:(unsigned long long)arg1;
- (double)readHeight;
- (void)setReadHeight:(double)arg1;
- (double)unReadTopHeight;
- (void)setUnReadTopHeight:(double)arg1;
- (double)unReadBottomHeight;
- (void)setUnReadBottomHeight:(double)arg1;
- (double)tableContentY;
- (void)setTableContentY:(double)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)snsStatExt;
- (void)setSnsStatExt:(id)arg1;
- (unsigned long long)adDisappearTime;
- (void)setAdDisappearTime:(unsigned long long)arg1;
- (unsigned long long)adDisappearDuration;
- (void)setAdDisappearDuration:(unsigned long long)arg1;
- (BOOL)isFulllyAppearing;
- (void)setIsFulllyAppearing:(BOOL)arg1;
- (unsigned long long)adFullExposeDisappearTime;
- (void)setAdFullExposeDisappearTime:(unsigned long long)arg1;
- (unsigned long long)adFullExposeDisappearDuration;
- (void)setAdFullExposeDisappearDuration:(unsigned long long)arg1;
- (id)sphereInfo;
- (void)setSphereInfo:(id)arg1;
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
- (id)adInfoAddress;
- (void)setAdInfoAddress:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (id)adHalfExposureTimer;
- (void)setAdHalfExposureTimer:(id)arg1;
- (id)adFullExposureTimer;
- (void)setAdFullExposureTimer:(id)arg1;
- (void).cxx_destruct;
@end
