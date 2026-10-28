@interface WCAdDynamicCanvasPageInfo : NSObject
{
    BOOL _openAudio; // +0x8
    BOOL _halfScreenForbidPanUp; // +0x9
    BOOL _forbidBackToBizApp; // +0xa
    id <WCAdDynamicCanvasViewControllerDelegate> _dynamicCanvasDelegate; // +0x10
    NSString * _canvasKey; // +0x18
    NSString * _canvasId; // +0x20
    NSString * _uxInfo; // +0x28
    NSString * _canvasDynamicInfo; // +0x30
    unsigned long long _startTime; // +0x38
    NSString * _snsId; // +0x40
    NSString * _aid; // +0x48
    NSString * _traceId; // +0x50
    NSString * _viewId; // +0x58
    NSString * _pid; // +0x60
    NSString * _rewardCommInfo; // +0x68
    NSString * _rewardParams; // +0x70
    long long _adType; // +0x78
    long long _outIndex; // +0x80
    long long _source; // +0x88
    long long _originSource; // +0x90
    long long _outPlaybackTime; // +0x98
    double _screenWidth; // +0xa0
    double _screenHeight; // +0xa8
    WCAdDynamicCanvasServerData * _canvasServerData; // +0xb0
    WCAdvertiseInfo * _adInfo; // +0xb8
    NSString * _bizAppId; // +0xc0
    NSObject * _extraData; // +0xc8
    NSString * _updatedUxInfo; // +0xd0
    NSString * _commonDeviceInfo; // +0xd8
    NSString * _frontPageStateInfo; // +0xe0
    unsigned long long _canvasPresentationStyle; // +0xe8
    double _halfScreenPageHeight; // +0xf0
    WCAdDynamicCanvasDSLData * _parsedCanvasDSLData; // +0xf8
    CGRect _originViewRectInScreen; // +0x100
}
- (id)init;
- (id)fetchLaunchString;
- (id)fetchPageInfoDic;
- (id)fetchPageInfoExtraDic;
- (id)fetchRealUxInfo;
- (id)fetchParsedCanvasDSLData;
- (id)uxInfo;
- (id)snsId;
- (id)aid;
- (id)traceId;
- (id)viewId;
- (id)rewardCommInfo;
- (id)rewardParams;
- (id)pid;
- (long long)originSource;
- (void)setCanvasServerData:(id)arg1;
- (id)dynamicCanvasDelegate;
- (void)setDynamicCanvasDelegate:(id)arg1;
- (id)canvasKey;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (void)setUxInfo:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setSnsId:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setTraceId:(id)arg1;
- (void)setViewId:(id)arg1;
- (void)setPid:(id)arg1;
- (void)setRewardCommInfo:(id)arg1;
- (void)setRewardParams:(id)arg1;
- (long long)adType;
- (void)setAdType:(long long)arg1;
- (long long)outIndex;
- (void)setOutIndex:(long long)arg1;
- (BOOL)openAudio;
- (void)setOpenAudio:(BOOL)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (void)setOriginSource:(long long)arg1;
- (long long)outPlaybackTime;
- (void)setOutPlaybackTime:(long long)arg1;
- (double)screenWidth;
- (double)screenHeight;
- (id)canvasServerData;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)bizAppId;
- (void)setBizAppId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)updatedUxInfo;
- (void)setUpdatedUxInfo:(id)arg1;
- (id)commonDeviceInfo;
- (void)setCommonDeviceInfo:(id)arg1;
- (id)frontPageStateInfo;
- (void)setFrontPageStateInfo:(id)arg1;
- (unsigned long long)canvasPresentationStyle;
- (void)setCanvasPresentationStyle:(unsigned long long)arg1;
- (BOOL)halfScreenForbidPanUp;
- (void)setHalfScreenForbidPanUp:(BOOL)arg1;
- (double)halfScreenPageHeight;
- (void)setHalfScreenPageHeight:(double)arg1;
- (BOOL)forbidBackToBizApp;
- (void)setForbidBackToBizApp:(BOOL)arg1;
- (CGRect)originViewRectInScreen;
- (void)setOriginViewRectInScreen:(CGRect)arg1;
- (id)parsedCanvasDSLData;
- (void)setParsedCanvasDSLData:(id)arg1;
- (void).cxx_destruct;
@end
