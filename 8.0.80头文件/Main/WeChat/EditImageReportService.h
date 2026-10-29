@interface EditImageReportService : MMUserService <SightCameraFilmingDelegate, MMServiceProtocol>
{
    BOOL _isSightBeautyEffect; // +0x8
    BOOL _isSnsDraft; // +0x9
    BOOL _isAVCaptureMultiSession; // +0xa
    BOOL _inSightCameraProcess; // +0xb
    unsigned int _seekBarDragCount; // +0xc
    unsigned int _cropRectChangeCount; // +0x10
    unsigned int _isTimeLimitExceeded; // +0x14
    float _cpuUsage; // +0x18
    EditImageReportObj * _editImageReportObj; // +0x20
    NSMutableArray * _editImageReportObjArray; // +0x28
    unsigned long long _eventPublishId; // +0x30
    unsigned long long _showPostEntranceTime; // +0x38
    NSString * _sightBeautyEffectInfo; // +0x40
    long long _memoryResideng; // +0x48
    NSString * _snsTaskLastClientID; // +0x50
    NSArray * _avaliableDisplayVideoZoomFactors; // +0x58
    NSMutableArray * _displayVideoZoomFactorClickCnts; // +0x60
    unsigned long long _lastUIPanGestureRecognizerStateEndedTimeStamp; // +0x68
    MMLRUCache * _cacheFor36153OfC2C; // +0x70
}
+ (void)getSavedAlbumPhotoFileSize:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)fillEditImageReportObjVideoMediaInfo:(id)arg1 withVideoPath:(id)arg2;
- (void)resetCameraFilmingData;
- (void)activePrimaryConstituentDeviceSwitchToBackSuperWide:(BOOL)arg1;
- (void)autoMacroSwitchShown:(BOOL)arg1;
- (void)autoMacroSwitchTapped:(BOOL)arg1;
- (void)autoMacroSwitchTappedInNormalState;
- (void)autoMacroSwitchStateChanged:(unsigned long long)arg1;
- (void)avaliableDisplayVideoZoomFactors:(id)arg1;
- (void)onZoomFactorDisplayButtonListViewClickButton:(unsigned long long)arg1;
- (void)onZoomFactorDragableCalibrationViewAppeared;
- (void)onZoomFactorDragableCalibrationViewDisappeared;
- (void)onZoomFactorDragableCalibrationUIPanGestureRecognizerStateBegan;
- (void)onZoomFactorDragableCalibrationUIPanGestureRecognizerStateEnded;
- (void)onFinalZoomVideoFactor:(double)arg1 displayVideoZoomFactorMultiplier:(double)arg2 isBackCamera:(BOOL)arg3;
- (id)editImageReportObj;
- (id)editImageReportObjArray;
- (void)initReportService;
- (void)finishReport;
- (void)quitReport;
- (void)resetEventPublishId;
- (void)resavePerformanceWithCpuUsage:(float)arg1 memoryResident:(long long)arg2;
- (void)cleanPerformance;
- (void)reportFinderEditResultWithType:(unsigned long long)arg1 successful:(BOOL)arg2 videoDuration:(double)arg3 videoSize:(CGSize)arg4 composeDuration:(unsigned int)arg5;
- (void)setupCacheOf36153ForC2C:(BOOL)arg1;
- (void)reportCameraActionsLog;
- (void)reportSendOrPostLog:(id)arg1;
- (void)doSnsCommonMediaReportObj:(id)arg1 withUploadMedia:(id)arg2;
- (void)doSnsImageReportObj:(id)arg1 withUploadMedia:(id)arg2;
- (void)doSnsVideoReportObj:(id)arg1 withUploadMedia:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (id)getSnsCameraEditorReportItems:(BOOL)arg1 isEdited:(BOOL)arg2;
- (id)getSnsCameraEditorReportItems:(BOOL)arg1 isEdited:(BOOL)arg2 editImageAttr:(id)arg3;
- (unsigned long long)getEditImageReportObjEditorSessionID;
- (id)dealSnsImageMediaInfo:(id)arg1 withOriginImageSize:(CGSize)arg2 withEditedImageSize:(CGSize)arg3;
- (void)setEditImageReportObj:(id)arg1;
- (void)setEditImageReportObjArray:(id)arg1;
- (unsigned long long)eventPublishId;
- (void)setEventPublishId:(unsigned long long)arg1;
- (unsigned long long)showPostEntranceTime;
- (void)setShowPostEntranceTime:(unsigned long long)arg1;
- (unsigned int)seekBarDragCount;
- (void)setSeekBarDragCount:(unsigned int)arg1;
- (unsigned int)cropRectChangeCount;
- (void)setCropRectChangeCount:(unsigned int)arg1;
- (unsigned int)isTimeLimitExceeded;
- (void)setIsTimeLimitExceeded:(unsigned int)arg1;
- (BOOL)isSightBeautyEffect;
- (void)setIsSightBeautyEffect:(BOOL)arg1;
- (id)sightBeautyEffectInfo;
- (void)setSightBeautyEffectInfo:(id)arg1;
- (BOOL)isSnsDraft;
- (void)setIsSnsDraft:(BOOL)arg1;
- (BOOL)isAVCaptureMultiSession;
- (void)setIsAVCaptureMultiSession:(BOOL)arg1;
- (BOOL)inSightCameraProcess;
- (void)setInSightCameraProcess:(BOOL)arg1;
- (float)cpuUsage;
- (void)setCpuUsage:(float)arg1;
- (long long)memoryResideng;
- (void)setMemoryResideng:(long long)arg1;
- (id)snsTaskLastClientID;
- (void)setSnsTaskLastClientID:(id)arg1;
- (id)avaliableDisplayVideoZoomFactors;
- (void)setAvaliableDisplayVideoZoomFactors:(id)arg1;
- (id)displayVideoZoomFactorClickCnts;
- (void)setDisplayVideoZoomFactorClickCnts:(id)arg1;
- (unsigned long long)lastUIPanGestureRecognizerStateEndedTimeStamp;
- (void)setLastUIPanGestureRecognizerStateEndedTimeStamp:(unsigned long long)arg1;
- (id)cacheFor36153OfC2C;
- (void)setCacheFor36153OfC2C:(id)arg1;
- (void).cxx_destruct;
@end
