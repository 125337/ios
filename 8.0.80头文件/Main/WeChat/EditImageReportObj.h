@interface EditImageReportObj : NSObject
{
    BOOL _isSlowMotion; // +0x8
    BOOL _isBeauty; // +0x9
    BOOL _isDurationCut; // +0xa
    BOOL _hasAutoFaceFocal; // +0xb
    BOOL _hasFingerFocal; // +0xc
    BOOL _hasLightAdjust; // +0xd
    BOOL _finalGridStatus; // +0xe
    BOOL _hasCountDown; // +0xf
    BOOL _hasCameraFail; // +0x10
    BOOL _isHitFrameCapture; // +0x11
    BOOL _isFrameCaptureSucc; // +0x12
    BOOL _isUsedFrameCapture; // +0x13
    BOOL _isFromCamera; // +0x14
    BOOL _isFromEditor; // +0x15
    BOOL _isSelectOriginImage; // +0x16
    BOOL _isZoomFactorControlFunctionEnabled; // +0x17
    BOOL _isAutoMacroSwitchFunctionEnabled; // +0x18
    unsigned int _originalImageWidth; // +0x1c
    unsigned int _originalImageHeight; // +0x20
    unsigned int _mosaicGlassWidgetToolCount; // +0x24
    unsigned int _mosaicPaintingWidgetToolCount; // +0x28
    unsigned int _isWeishiPromotionShowed; // +0x2c
    unsigned int _isWeishiPromotionClicked; // +0x30
    unsigned int _isWeishiInstalled; // +0x34
    unsigned int _operationAfterWeishiPromotionClicked; // +0x38
    unsigned int _emoticonWidgetToolCount; // +0x3c
    unsigned int _textWidgetToolCount; // +0x40
    unsigned int _musicSid; // +0x44
    int _isSearchMusic; // +0x48
    int _useSWTranscoding; // +0x4c
    int _useHWTranscoding; // +0x50
    unsigned int _dragCount; // +0x54
    unsigned int _scaleCount; // +0x58
    unsigned int _clickEditCount; // +0x5c
    unsigned int _durationCutCount; // +0x60
    unsigned int _durationScrollCount; // +0x64
    unsigned int _videoType; // +0x68
    unsigned int _dynamicRangeType; // +0x6c
    unsigned int _roomSize; // +0x70
    unsigned int _actualCallMacroModeCnt; // +0x74
    unsigned int _actualEndMacroModeCnt; // +0x78
    unsigned int _macroAutoExpCnt; // +0x7c
    unsigned int _macroAutoUnexpCnt; // +0x80
    unsigned int _turnOffMacroModeCnt; // +0x84
    unsigned int _openMacroModeCnt; // +0x88
    unsigned int _isMacroBtnExp; // +0x8c
    unsigned int _macroBtnStatus; // +0x90
    unsigned int _zoomDialExpCnt; // +0x94
    unsigned int _inactive2sExitCnt; // +0x98
    unsigned int _otherExitCnt; // +0x9c
    unsigned int _slideZoomCnt; // +0xa0
    unsigned int _exitZoomGearValueInDefault; // +0xa4
    unsigned int _macroUnableSwitchClkPv; // +0xa8
    unsigned int _tagCntOfSendOrPostLog; // +0xac
    unsigned int _clickPenWidgetToolCount; // +0xb0
    unsigned int _penWidgetToolCount; // +0xb4
    unsigned int _penWidgetToolColorCount; // +0xb8
    unsigned int _clickEmoticonWidgetToolCount; // +0xbc
    unsigned int _clickTextWidgetToolCount; // +0xc0
    unsigned int _clickMosaicWidgetToolCount; // +0xc4
    unsigned int _mosaicGlassInPenWidgetToolCount; // +0xc8
    unsigned int _mosaicPaintingInPenWidgetToolCount; // +0xcc
    unsigned int _clickCropWidgetToolCount; // +0xd0
    unsigned int _croppedImageWidth; // +0xd4
    unsigned int _croppedImageHeight; // +0xd8
    unsigned int _isRotated; // +0xdc
    unsigned int _clickMusicWidgetToolCount; // +0xe0
    unsigned int _initialPenWidgetToolCount; // +0xe4
    unsigned int _initialTextWidgetToolCount; // +0xe8
    unsigned int _initialEmoticonWidgetToolCount; // +0xec
    unsigned long long _editImageEnterScene; // +0xf0
    unsigned long long _enterPickerOrShootingTime; // +0xf8
    unsigned long long _quitPickerOrShootingTime; // +0x100
    unsigned long long _startShootingTime; // +0x108
    unsigned long long _editImageContentSource; // +0x110
    unsigned long long _editImageContentType; // +0x118
    unsigned long long _originalVideoDuration; // +0x120
    unsigned long long _enterCropVideoViewTime; // +0x128
    unsigned long long _completeCropVideoTime; // +0x130
    unsigned long long _enterEditImageViewTime; // +0x138
    unsigned long long _quitEditImageViewTime; // +0x140
    EditImageAttr * _editImageAttr; // +0x148
    EditVideoAttr * _editVideoAttr; // +0x150
    unsigned long long _clickPenEraserWidgetCount; // +0x158
    unsigned long long _penEraserWidgetCount; // +0x160
    unsigned long long _penEraserWidgetTraceCount; // +0x168
    unsigned long long _clickMosaicEraserWidgetCount; // +0x170
    unsigned long long _mosaicEraserWidgetCount; // +0x178
    unsigned long long _mosaicEraserWidgetTraceCount; // +0x180
    NSMutableArray * _clickWithdrawAction; // +0x188
    NSMutableArray * _clickRedoAction; // +0x190
    unsigned long long _clickNewlineCnt; // +0x198
    unsigned long long _editImageNextStep; // +0x1a0
    long long _musicIndex; // +0x1a8
    NSMutableArray * _searchMusicKeywords; // +0x1b0
    long long _videoSubType; // +0x1b8
    NSString * _originFormat; // +0x1c0
    NSString * _compressFormat; // +0x1c8
    unsigned long long _compressTime; // +0x1d0
    NSMutableDictionary * _compressInfoDict; // +0x1d8
    unsigned long long _cdnTime; // +0x1e0
    unsigned long long _targetVideoDuration; // +0x1e8
    double _fixedCropAspectRatio; // +0x1f0
    double _clickAlbumDoneTimestamp; // +0x1f8
    MMImageExifLogInfo * _exifLogInfo; // +0x200
    unsigned long long _materialVideoCount; // +0x208
    unsigned long long _materialImageCount; // +0x210
    unsigned long long _shootingExitResult; // +0x218
    unsigned long long _flashLightStatus; // +0x220
    unsigned long long _switchCameraByButtonCount; // +0x228
    unsigned long long _switchCameraByDoubleClickCount; // +0x230
    unsigned long long _clickFlashLightCount; // +0x238
    unsigned long long _autoMacroLensCount; // +0x240
    unsigned long long _zoomInOutCount; // +0x248
    NSMutableArray * _textWidgetKeywords; // +0x250
    unsigned long long _finalBeautyCamType; // +0x258
    unsigned long long _finalCamFliterType; // +0x260
    NSString * _finalCamTemplateId; // +0x268
    unsigned long long _adjustFastFocalCnt; // +0x270
    double _finalFastFocalStatus; // +0x278
    double _finalFocalStatus; // +0x280
    long long _finalCountDownStatus; // +0x288
    NSString * _finalFigureSize; // +0x290
    long long _frameCaptureWaitTime; // +0x298
    unsigned long long _clickMoreCnt; // +0x2a0
    WCCameraProModeViewReportObj * _proModeReportObj; // +0x2a8
    unsigned long long _cameraEnterSessionID; // +0x2b0
    NSString * _userName; // +0x2b8
    NSString * _sessionExtJsonOverride; // +0x2c0
    MMEditImageProcessTimestamp * _imageEditProcessTimestamp; // +0x2c8
    unsigned long long _contentUsageType; // +0x2d0
    unsigned long long _contentSourseType; // +0x2d8
    unsigned long long _contentMediaType; // +0x2e0
    NSString * _svrMsgID; // +0x2e8
    NSString * _snsPublisehID; // +0x2f0
    MMEditImageMediaInfo * _originMediaInfo; // +0x2f8
    MMEditImageMediaInfo * _editedMediaInfo; // +0x300
    MMEditImageMediaInfo * _sendedMediaInfo; // +0x308
    unsigned long long _addStickersSessionID; // +0x310
    unsigned long long _clickImageMatting; // +0x318
    unsigned long long _isImageMatting; // +0x320
    unsigned long long _imageMattingTime; // +0x328
    unsigned long long _ifImageMattingSucc; // +0x330
    NSString * _textPendantInfoStr; // +0x338
    NSString * _gearClkCntList; // +0x340
    NSString * _exitZoomGearValue; // +0x348
    NSMutableArray * _textWidgetColors; // +0x350
    NSMutableArray * _textWidgetStyles; // +0x358
    NSMutableArray * _actionTraceArray; // +0x360
}
+ (id)stateGetVideo;
+ (id)stateCompressNormalVideo;
+ (id)stateUpload;
+ (id)stateCompressMegaVideoShort;
+ (id)stateCompressMegaVideoFull;
+ (unsigned int)calcTextWidgetToolCount:(id)arg1;
+ (unsigned int)calcEmoticonWidgetToolCount:(id)arg1;
+ (id)buildTextPendantInfoStr:(id)arg1;
+ (unsigned int)calcPenWidgetToolColorCount:(id)arg1 drawViewPenArray:(id)arg2;
+ (unsigned int)calcMosaicWidgetToolCount:(id)arg1;
+ (unsigned int)calcPenWidgetToolCount:(id)arg1;
+ (id)genReportStrWithUndoRedoActionArray:(id)arg1;
- (id)init;
- (id)actionTraceArray;
- (id)proModeReportObj;
- (void)resetInfoOfEditImage;
- (void)setEditImageAttr:(id)arg1;
- (void)setEditVideoAttr:(id)arg1;
- (void)dealInitialDrawViewArray:(id)arg1;
- (void)updateReportStr:(id)arg1;
- (void)setClickTextWidgetToolCount:(unsigned int)arg1;
- (void)setClickCropWidgetToolCount:(unsigned int)arg1;
- (void)setActionTrace:(id)arg1;
- (void)reportEditViewLog;
- (void)finishReport;
- (void)quitReport;
- (void)clickEditImageWidgetToolButton:(unsigned long long)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (id)arrayToJSON:(id)arg1;
- (unsigned int)musicSid;
- (long long)musicIndex;
- (int)isSearchMusic;
- (id)compressInfoDict;
- (id)clickWithdrawAction;
- (id)clickRedoAction;
- (void)addSearchMusicKeyword:(id)arg1;
- (id)sightCaptureRootCauseInfo;
- (void)reportCameraActionsLog;
- (id)detailOfCameraFilmingData;
- (void)appendCameraActionsLogForCameraFilming:(id)arg1;
- (void)setCameraEnterSessionID:(unsigned long long)arg1;
- (void)setEnterEditImageViewTime:(unsigned long long)arg1;
- (void)reportSendOrPostLog;
- (id)originMediaInfo;
- (id)editedMediaInfo;
- (id)sendedMediaInfo;
- (unsigned long long)editImageEnterScene;
- (void)setEditImageEnterScene:(unsigned long long)arg1;
- (unsigned long long)enterPickerOrShootingTime;
- (void)setEnterPickerOrShootingTime:(unsigned long long)arg1;
- (unsigned long long)quitPickerOrShootingTime;
- (void)setQuitPickerOrShootingTime:(unsigned long long)arg1;
- (unsigned long long)startShootingTime;
- (void)setStartShootingTime:(unsigned long long)arg1;
- (unsigned long long)editImageContentSource;
- (void)setEditImageContentSource:(unsigned long long)arg1;
- (unsigned long long)editImageContentType;
- (void)setEditImageContentType:(unsigned long long)arg1;
- (BOOL)isSlowMotion;
- (void)setIsSlowMotion:(BOOL)arg1;
- (unsigned long long)originalVideoDuration;
- (void)setOriginalVideoDuration:(unsigned long long)arg1;
- (unsigned int)originalImageWidth;
- (void)setOriginalImageWidth:(unsigned int)arg1;
- (unsigned int)originalImageHeight;
- (void)setOriginalImageHeight:(unsigned int)arg1;
- (unsigned long long)enterCropVideoViewTime;
- (void)setEnterCropVideoViewTime:(unsigned long long)arg1;
- (unsigned long long)completeCropVideoTime;
- (void)setCompleteCropVideoTime:(unsigned long long)arg1;
- (unsigned long long)enterEditImageViewTime;
- (unsigned long long)quitEditImageViewTime;
- (void)setQuitEditImageViewTime:(unsigned long long)arg1;
- (id)editImageAttr;
- (id)editVideoAttr;
- (unsigned long long)clickPenEraserWidgetCount;
- (void)setClickPenEraserWidgetCount:(unsigned long long)arg1;
- (unsigned long long)penEraserWidgetCount;
- (void)setPenEraserWidgetCount:(unsigned long long)arg1;
- (unsigned long long)penEraserWidgetTraceCount;
- (void)setPenEraserWidgetTraceCount:(unsigned long long)arg1;
- (unsigned long long)clickMosaicEraserWidgetCount;
- (void)setClickMosaicEraserWidgetCount:(unsigned long long)arg1;
- (unsigned long long)mosaicEraserWidgetCount;
- (void)setMosaicEraserWidgetCount:(unsigned long long)arg1;
- (unsigned long long)mosaicEraserWidgetTraceCount;
- (void)setMosaicEraserWidgetTraceCount:(unsigned long long)arg1;
- (void)setClickWithdrawAction:(id)arg1;
- (void)setClickRedoAction:(id)arg1;
- (unsigned long long)clickNewlineCnt;
- (void)setClickNewlineCnt:(unsigned long long)arg1;
- (unsigned int)mosaicGlassWidgetToolCount;
- (void)setMosaicGlassWidgetToolCount:(unsigned int)arg1;
- (unsigned int)mosaicPaintingWidgetToolCount;
- (void)setMosaicPaintingWidgetToolCount:(unsigned int)arg1;
- (unsigned long long)editImageNextStep;
- (void)setEditImageNextStep:(unsigned long long)arg1;
- (unsigned int)isWeishiPromotionShowed;
- (void)setIsWeishiPromotionShowed:(unsigned int)arg1;
- (unsigned int)isWeishiPromotionClicked;
- (void)setIsWeishiPromotionClicked:(unsigned int)arg1;
- (unsigned int)isWeishiInstalled;
- (void)setIsWeishiInstalled:(unsigned int)arg1;
- (unsigned int)operationAfterWeishiPromotionClicked;
- (void)setOperationAfterWeishiPromotionClicked:(unsigned int)arg1;
- (unsigned int)emoticonWidgetToolCount;
- (void)setEmoticonWidgetToolCount:(unsigned int)arg1;
- (unsigned int)textWidgetToolCount;
- (void)setTextWidgetToolCount:(unsigned int)arg1;
- (void)setMusicSid:(unsigned int)arg1;
- (void)setMusicIndex:(long long)arg1;
- (void)setIsSearchMusic:(int)arg1;
- (id)searchMusicKeywords;
- (void)setSearchMusicKeywords:(id)arg1;
- (long long)videoSubType;
- (void)setVideoSubType:(long long)arg1;
- (id)originFormat;
- (void)setOriginFormat:(id)arg1;
- (id)compressFormat;
- (void)setCompressFormat:(id)arg1;
- (unsigned long long)compressTime;
- (void)setCompressTime:(unsigned long long)arg1;
- (void)setCompressInfoDict:(id)arg1;
- (unsigned long long)cdnTime;
- (void)setCdnTime:(unsigned long long)arg1;
- (int)useSWTranscoding;
- (void)setUseSWTranscoding:(int)arg1;
- (int)useHWTranscoding;
- (void)setUseHWTranscoding:(int)arg1;
- (BOOL)isBeauty;
- (void)setIsBeauty:(BOOL)arg1;
- (unsigned long long)targetVideoDuration;
- (void)setTargetVideoDuration:(unsigned long long)arg1;
- (unsigned int)dragCount;
- (void)setDragCount:(unsigned int)arg1;
- (unsigned int)scaleCount;
- (void)setScaleCount:(unsigned int)arg1;
- (unsigned int)clickEditCount;
- (void)setClickEditCount:(unsigned int)arg1;
- (unsigned int)durationCutCount;
- (void)setDurationCutCount:(unsigned int)arg1;
- (unsigned int)durationScrollCount;
- (void)setDurationScrollCount:(unsigned int)arg1;
- (BOOL)isDurationCut;
- (void)setIsDurationCut:(BOOL)arg1;
- (double)fixedCropAspectRatio;
- (void)setFixedCropAspectRatio:(double)arg1;
- (double)clickAlbumDoneTimestamp;
- (void)setClickAlbumDoneTimestamp:(double)arg1;
- (id)exifLogInfo;
- (void)setExifLogInfo:(id)arg1;
- (unsigned int)videoType;
- (void)setVideoType:(unsigned int)arg1;
- (unsigned int)dynamicRangeType;
- (void)setDynamicRangeType:(unsigned int)arg1;
- (unsigned long long)materialVideoCount;
- (void)setMaterialVideoCount:(unsigned long long)arg1;
- (unsigned long long)materialImageCount;
- (void)setMaterialImageCount:(unsigned long long)arg1;
- (unsigned long long)shootingExitResult;
- (void)setShootingExitResult:(unsigned long long)arg1;
- (unsigned long long)flashLightStatus;
- (void)setFlashLightStatus:(unsigned long long)arg1;
- (unsigned long long)switchCameraByButtonCount;
- (void)setSwitchCameraByButtonCount:(unsigned long long)arg1;
- (unsigned long long)switchCameraByDoubleClickCount;
- (void)setSwitchCameraByDoubleClickCount:(unsigned long long)arg1;
- (unsigned long long)clickFlashLightCount;
- (void)setClickFlashLightCount:(unsigned long long)arg1;
- (unsigned long long)autoMacroLensCount;
- (void)setAutoMacroLensCount:(unsigned long long)arg1;
- (unsigned long long)zoomInOutCount;
- (void)setZoomInOutCount:(unsigned long long)arg1;
- (id)textWidgetKeywords;
- (void)setTextWidgetKeywords:(id)arg1;
- (unsigned long long)finalBeautyCamType;
- (void)setFinalBeautyCamType:(unsigned long long)arg1;
- (unsigned long long)finalCamFliterType;
- (void)setFinalCamFliterType:(unsigned long long)arg1;
- (id)finalCamTemplateId;
- (void)setFinalCamTemplateId:(id)arg1;
- (unsigned long long)adjustFastFocalCnt;
- (void)setAdjustFastFocalCnt:(unsigned long long)arg1;
- (double)finalFastFocalStatus;
- (void)setFinalFastFocalStatus:(double)arg1;
- (double)finalFocalStatus;
- (void)setFinalFocalStatus:(double)arg1;
- (BOOL)hasAutoFaceFocal;
- (void)setHasAutoFaceFocal:(BOOL)arg1;
- (BOOL)hasFingerFocal;
- (void)setHasFingerFocal:(BOOL)arg1;
- (BOOL)hasLightAdjust;
- (void)setHasLightAdjust:(BOOL)arg1;
- (BOOL)finalGridStatus;
- (void)setFinalGridStatus:(BOOL)arg1;
- (long long)finalCountDownStatus;
- (void)setFinalCountDownStatus:(long long)arg1;
- (id)finalFigureSize;
- (void)setFinalFigureSize:(id)arg1;
- (BOOL)hasCountDown;
- (void)setHasCountDown:(BOOL)arg1;
- (BOOL)hasCameraFail;
- (void)setHasCameraFail:(BOOL)arg1;
- (BOOL)isHitFrameCapture;
- (void)setIsHitFrameCapture:(BOOL)arg1;
- (BOOL)isFrameCaptureSucc;
- (void)setIsFrameCaptureSucc:(BOOL)arg1;
- (BOOL)isUsedFrameCapture;
- (void)setIsUsedFrameCapture:(BOOL)arg1;
- (long long)frameCaptureWaitTime;
- (void)setFrameCaptureWaitTime:(long long)arg1;
- (unsigned long long)clickMoreCnt;
- (void)setClickMoreCnt:(unsigned long long)arg1;
- (void)setProModeReportObj:(id)arg1;
- (unsigned long long)cameraEnterSessionID;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)roomSize;
- (void)setRoomSize:(unsigned int)arg1;
- (id)sessionExtJsonOverride;
- (void)setSessionExtJsonOverride:(id)arg1;
- (id)imageEditProcessTimestamp;
- (void)setImageEditProcessTimestamp:(id)arg1;
- (unsigned long long)contentUsageType;
- (void)setContentUsageType:(unsigned long long)arg1;
- (BOOL)isFromCamera;
- (void)setIsFromCamera:(BOOL)arg1;
- (BOOL)isFromEditor;
- (void)setIsFromEditor:(BOOL)arg1;
- (unsigned long long)contentSourseType;
- (void)setContentSourseType:(unsigned long long)arg1;
- (unsigned long long)contentMediaType;
- (void)setContentMediaType:(unsigned long long)arg1;
- (BOOL)isSelectOriginImage;
- (void)setIsSelectOriginImage:(BOOL)arg1;
- (id)svrMsgID;
- (void)setSvrMsgID:(id)arg1;
- (id)snsPublisehID;
- (void)setSnsPublisehID:(id)arg1;
- (void)setOriginMediaInfo:(id)arg1;
- (void)setEditedMediaInfo:(id)arg1;
- (void)setSendedMediaInfo:(id)arg1;
- (unsigned long long)addStickersSessionID;
- (void)setAddStickersSessionID:(unsigned long long)arg1;
- (unsigned long long)clickImageMatting;
- (void)setClickImageMatting:(unsigned long long)arg1;
- (unsigned long long)isImageMatting;
- (void)setIsImageMatting:(unsigned long long)arg1;
- (unsigned long long)imageMattingTime;
- (void)setImageMattingTime:(unsigned long long)arg1;
- (unsigned long long)ifImageMattingSucc;
- (void)setIfImageMattingSucc:(unsigned long long)arg1;
- (id)textPendantInfoStr;
- (void)setTextPendantInfoStr:(id)arg1;
- (BOOL)isZoomFactorControlFunctionEnabled;
- (void)setIsZoomFactorControlFunctionEnabled:(BOOL)arg1;
- (BOOL)isAutoMacroSwitchFunctionEnabled;
- (void)setIsAutoMacroSwitchFunctionEnabled:(BOOL)arg1;
- (unsigned int)actualCallMacroModeCnt;
- (void)setActualCallMacroModeCnt:(unsigned int)arg1;
- (unsigned int)actualEndMacroModeCnt;
- (void)setActualEndMacroModeCnt:(unsigned int)arg1;
- (unsigned int)macroAutoExpCnt;
- (void)setMacroAutoExpCnt:(unsigned int)arg1;
- (unsigned int)macroAutoUnexpCnt;
- (void)setMacroAutoUnexpCnt:(unsigned int)arg1;
- (unsigned int)turnOffMacroModeCnt;
- (void)setTurnOffMacroModeCnt:(unsigned int)arg1;
- (unsigned int)openMacroModeCnt;
- (void)setOpenMacroModeCnt:(unsigned int)arg1;
- (unsigned int)isMacroBtnExp;
- (void)setIsMacroBtnExp:(unsigned int)arg1;
- (unsigned int)macroBtnStatus;
- (void)setMacroBtnStatus:(unsigned int)arg1;
- (id)gearClkCntList;
- (void)setGearClkCntList:(id)arg1;
- (unsigned int)zoomDialExpCnt;
- (void)setZoomDialExpCnt:(unsigned int)arg1;
- (unsigned int)inactive2sExitCnt;
- (void)setInactive2sExitCnt:(unsigned int)arg1;
- (unsigned int)otherExitCnt;
- (void)setOtherExitCnt:(unsigned int)arg1;
- (unsigned int)slideZoomCnt;
- (void)setSlideZoomCnt:(unsigned int)arg1;
- (id)exitZoomGearValue;
- (void)setExitZoomGearValue:(id)arg1;
- (unsigned int)exitZoomGearValueInDefault;
- (void)setExitZoomGearValueInDefault:(unsigned int)arg1;
- (unsigned int)macroUnableSwitchClkPv;
- (void)setMacroUnableSwitchClkPv:(unsigned int)arg1;
- (unsigned int)tagCntOfSendOrPostLog;
- (void)setTagCntOfSendOrPostLog:(unsigned int)arg1;
- (unsigned int)clickPenWidgetToolCount;
- (void)setClickPenWidgetToolCount:(unsigned int)arg1;
- (unsigned int)penWidgetToolCount;
- (void)setPenWidgetToolCount:(unsigned int)arg1;
- (unsigned int)penWidgetToolColorCount;
- (void)setPenWidgetToolColorCount:(unsigned int)arg1;
- (unsigned int)clickEmoticonWidgetToolCount;
- (void)setClickEmoticonWidgetToolCount:(unsigned int)arg1;
- (unsigned int)clickTextWidgetToolCount;
- (id)textWidgetColors;
- (void)setTextWidgetColors:(id)arg1;
- (id)textWidgetStyles;
- (void)setTextWidgetStyles:(id)arg1;
- (unsigned int)clickMosaicWidgetToolCount;
- (void)setClickMosaicWidgetToolCount:(unsigned int)arg1;
- (unsigned int)mosaicGlassInPenWidgetToolCount;
- (void)setMosaicGlassInPenWidgetToolCount:(unsigned int)arg1;
- (unsigned int)mosaicPaintingInPenWidgetToolCount;
- (void)setMosaicPaintingInPenWidgetToolCount:(unsigned int)arg1;
- (unsigned int)clickCropWidgetToolCount;
- (unsigned int)croppedImageWidth;
- (void)setCroppedImageWidth:(unsigned int)arg1;
- (unsigned int)croppedImageHeight;
- (void)setCroppedImageHeight:(unsigned int)arg1;
- (unsigned int)isRotated;
- (void)setIsRotated:(unsigned int)arg1;
- (unsigned int)clickMusicWidgetToolCount;
- (void)setClickMusicWidgetToolCount:(unsigned int)arg1;
- (void)setActionTraceArray:(id)arg1;
- (unsigned int)initialPenWidgetToolCount;
- (void)setInitialPenWidgetToolCount:(unsigned int)arg1;
- (unsigned int)initialTextWidgetToolCount;
- (void)setInitialTextWidgetToolCount:(unsigned int)arg1;
- (unsigned int)initialEmoticonWidgetToolCount;
- (void)setInitialEmoticonWidgetToolCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
