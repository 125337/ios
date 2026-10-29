@interface MPLandingPageReportLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int _itemShowType; // +0x8
    unsigned int _sessionId; // +0xc
    unsigned int _landingPageType; // +0x10
    unsigned int _videoWidth; // +0x14
    unsigned int _videoHeight; // +0x18
    unsigned int _mid; // +0x1c
    unsigned int _idx; // +0x20
    unsigned int _scene; // +0x24
    unsigned int _subscene; // +0x28
    unsigned int _enterId; // +0x2c
    unsigned int _webPageId; // +0x30
    NSString * _bizUsrName; // +0x38
    NSString * _channelSessionId; // +0x40
    unsigned long long _videoDuration; // +0x48
    unsigned long long _enterTimeInMs; // +0x50
    unsigned long long _exitTimeInMs; // +0x58
    unsigned long long _bufferingStartTimeInMs; // +0x60
    id <MPLandingPageReportLogicDelegate> _delegate; // +0x68
    NSString * _videoId; // +0x70
    NSString * _url; // +0x78
    NSMutableArray * _performanceReportDataArr; // +0x80
    NSMutableDictionary * _performanceReportCtxDict; // +0x88
}
- (void)updateWebPageId:(unsigned int)arg1;
- (void)reportSimplePerformanceEvent:(unsigned long long)arg1;
- (void)reportSimplePerformanceEvent:(unsigned long long)arg1 extraDict:(id)arg2;
- (void)reportPerformanceEventBegin:(unsigned long long)arg1 extraDict:(id)arg2;
- (void)reportPerformanceEventEnd:(unsigned long long)arg1 extraDict:(id)arg2;
- (void)reportPerformanceEventBegin:(unsigned long long)arg1;
- (void)reportPerformanceEventEnd:(unsigned long long)arg1;
- (id)dataReportWithDict:(id)arg1;
- (id)convertDict2ReportItemArr:(id)arg1;
- (void)dealloc;
- (id)initWithOpenParam:(id)arg1 enterId:(unsigned int)arg2 sessionId:(unsigned int)arg3 delegate:(id)arg4;
- (void)updateOpenParam:(id)arg1;
- (void)updateVideoDuration:(float)arg1;
- (void)updateSessionId:(unsigned int)arg1;
- (void)updateLandingPageType:(unsigned int)arg1;
- (void)onEnterLandingPage;
- (void)onLeaveLandingPage;
- (void)setUrl:(id)arg1;
- (void)report10945;
- (void)reportShareAction:(unsigned int)arg1;
- (void)reportShareAction:(unsigned int)arg1 extInfo:(id)arg2;
- (unsigned int)convertItemShowTypeTo10380Type;
- (void)reportVideoPagePlayEvent:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)checkCGIBaseRespSuccess:(id)arg1;
- (int)getNetWorkIntType;
- (id)getNetWorkStrType;
- (void)reportEnterVideoPageEvent;
- (void)reportExitVideoPageEvent:(unsigned long long)arg1 playRealTime:(unsigned long long)arg2 isFullScreen:(BOOL)arg3;
- (void)reportPlayErrEventWithErrCode:(int)arg1 isFullScreen:(BOOL)arg2 currPlayedTimeMs:(unsigned long long)arg3;
- (void)reportVideoPageCommonEvent:(unsigned int)arg1 currPlayedTimeMs:(unsigned long long)arg2 isFullScreen:(BOOL)arg3;
- (void)onVideoBeginBuffering:(BOOL)arg1;
- (void)onVideoEndBuffering:(BOOL)arg1 currPlayedTimeMs:(unsigned long long)arg2 isFullScreen:(BOOL)arg3;
- (void)reportVideoPagePlayBufferEvent:(unsigned int)arg1 bufferTimeInMs:(unsigned long long)arg2 currPlayedTimeMs:(unsigned long long)arg3 isFullScreen:(BOOL)arg4;
- (void)reportClickRightTopMoreBtn:(BOOL)arg1 videoCurrTimeInSecond:(double)arg2;
- (void)reportClickDefinitionBtnWithVideoCurrTimeInSecond:(double)arg1 definitionOptionsStr:(id)arg2;
- (id)genDefaultKvReportItem17149;
- (unsigned int)isFans;
- (id)bizUsrName;
- (void)setBizUsrName:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (id)channelSessionId;
- (void)setChannelSessionId:(id)arg1;
- (unsigned int)landingPageType;
- (void)setLandingPageType:(unsigned int)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (unsigned int)videoWidth;
- (void)setVideoWidth:(unsigned int)arg1;
- (unsigned int)videoHeight;
- (void)setVideoHeight:(unsigned int)arg1;
- (unsigned long long)enterTimeInMs;
- (void)setEnterTimeInMs:(unsigned long long)arg1;
- (unsigned long long)exitTimeInMs;
- (void)setExitTimeInMs:(unsigned long long)arg1;
- (unsigned int)mid;
- (void)setMid:(unsigned int)arg1;
- (unsigned int)idx;
- (void)setIdx:(unsigned int)arg1;
- (unsigned long long)bufferingStartTimeInMs;
- (void)setBufferingStartTimeInMs:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)subscene;
- (void)setSubscene:(unsigned int)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)url;
- (unsigned int)enterId;
- (void)setEnterId:(unsigned int)arg1;
- (unsigned int)webPageId;
- (void)setWebPageId:(unsigned int)arg1;
- (id)performanceReportDataArr;
- (void)setPerformanceReportDataArr:(id)arg1;
- (id)performanceReportCtxDict;
- (void)setPerformanceReportCtxDict:(id)arg1;
- (void).cxx_destruct;
@end
