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
    BOOL _isFromCamera; // +0x11
    BOOL _isFromEditor; // +0x12
    BOOL _isSelectOriginImage; // +0x13
    unsigned int _originalImageWidth; // +0x14
    unsigned int _originalImageHeight; // +0x18
    unsigned int _isWeishiPromotionShowed; // +0x1c
    unsigned int _isWeishiPromotionClicked; // +0x20
    unsigned int _isWeishiInstalled; // +0x24
    unsigned int _operationAfterWeishiPromotionClicked; // +0x28
    unsigned int _emoticonWidgetToolCount; // +0x2c
    unsigned int _textWidgetToolCount; // +0x30
    unsigned int _musicSid; // +0x34
    int _isSearchMusic; // +0x38
    int _useSWTranscoding; // +0x3c
    int _useHWTranscoding; // +0x40
    unsigned int _dragCount; // +0x44
    unsigned int _scaleCount; // +0x48
    unsigned int _clickEditCount; // +0x4c
    unsigned int _durationCutCount; // +0x50
    unsigned int _durationScrollCount; // +0x54
    unsigned int _videoType; // +0x58
    unsigned int _dynamicRangeType; // +0x5c
    unsigned int _roomSize; // +0x60
    unsigned int _clickPenWidgetToolCount; // +0x64
    unsigned int _penWidgetToolCount; // +0x68
    unsigned int _penWidgetToolColorCount; // +0x6c
    unsigned int _clickEmoticonWidgetToolCount; // +0x70
    unsigned int _clickTextWidgetToolCount; // +0x74
    unsigned int _clickMosaicWidgetToolCount; // +0x78
    unsigned int _mosaicGlassWidgetToolCount; // +0x7c
    unsigned int _mosaicPaintingWidgetToolCount; // +0x80
    unsigned int _clickCropWidgetToolCount; // +0x84
    unsigned int _croppedImageWidth; // +0x88
    unsigned int _croppedImageHeight; // +0x8c
    unsigned int _isRotated; // +0x90
    unsigned int _clickMusicWidgetToolCount; // +0x94
    unsigned long long _editImageEnterScene; // +0x98
    unsigned long long _enterPickerOrShootingTime; // +0xa0
    unsigned long long _quitPickerOrShootingTime; // +0xa8
    unsigned long long _startShootingTime; // +0xb0
    unsigned long long _editImageContentSource; // +0xb8
    unsigned long long _editImageContentType; // +0xc0
    unsigned long long _originalVideoDuration; // +0xc8
    unsigned long long _enterCropVideoViewTime; // +0xd0
    unsigned long long _completeCropVideoTime; // +0xd8
    unsigned long long _enterEditImageViewTime; // +0xe0
    unsigned long long _quitEditImageViewTime; // +0xe8
    EditImageAttr * _editImageAttr; // +0xf0
    EditVideoAttr * _editVideoAttr; // +0xf8
    unsigned long long _clickPenEraserWidgetCount; // +0x100
    unsigned long long _penEraserWidgetCount; // +0x108
    unsigned long long _penEraserWidgetTraceCount; // +0x110
    unsigned long long _clickMosaicEraserWidgetCount; // +0x118
    unsigned long long _mosaicEraserWidgetCount; // +0x120
    unsigned long long _mosaicEraserWidgetTraceCount; // +0x128
    NSMutableArray * _clickWithdrawAction; // +0x130
    NSMutableArray * _clickRedoAction; // +0x138
    unsigned long long _clickNewlineCnt; // +0x140
    unsigned long long _editImageNextStep; // +0x148
    long long _musicIndex; // +0x150
    NSMutableArray * _searchMusicKeywords; // +0x158
    long long _videoSubType; // +0x160
    NSString * _originFormat; // +0x168
    NSString * _compressFormat; // +0x170
    unsigned long long _compressTime; // +0x178
    NSMutableDictionary * _compressInfoDict; // +0x180
    unsigned long long _cdnTime; // +0x188
    unsigned long long _targetVideoDuration; // +0x190
    double _fixedCropAspectRatio; // +0x198
    double _clickAlbumDoneTimestamp; // +0x1a0
    MMImageExifLogInfo * _exifLogInfo; // +0x1a8
    unsigned long long _materialVideoCount; // +0x1b0
    unsigned long long _materialImageCount; // +0x1b8
    unsigned long long _shootingExitResult; // +0x1c0
    unsigned long long _flashLightStatus; // +0x1c8
    unsigned long long _switchCameraByButtonCount; // +0x1d0
    unsigned long long _switchCameraByDoubleClickCount; // +0x1d8
    unsigned long long _clickFlashLightCount; // +0x1e0
    unsigned long long _autoMacroLensCount; // +0x1e8
    unsigned long long _zoomInOutCount; // +0x1f0
    NSMutableArray * _textWidgetKeywords; // +0x1f8
    unsigned long long _finalBeautyCamType; // +0x200
    unsigned long long _finalCamFliterType; // +0x208
    NSString * _finalCamTemplateId; // +0x210
    unsigned long long _adjustFastFocalCnt; // +0x218
    double _finalFastFocalStatus; // +0x220
    double _finalFocalStatus; // +0x228
    long long _finalCountDownStatus; // +0x230
    NSString * _finalFigureSize; // +0x238
    unsigned long long _clickMoreCnt; // +0x240
    WCCameraProModeViewReportObj * _proModeReportObj; // +0x248
    unsigned long long _cameraEnterSessionID; // +0x250
    NSString * _userName; // +0x258
    unsigned long long _contentUsageType; // +0x260
    unsigned long long _contentSourseType; // +0x268
    unsigned long long _contentMediaType; // +0x270
    NSString * _svrMsgID; // +0x278
    NSString * _snsPublisehID; // +0x280
    MMEditImageMediaInfo * _originMediaInfo; // +0x288
    MMEditImageMediaInfo * _editedMediaInfo; // +0x290
    MMEditImageMediaInfo * _sendedMediaInfo; // +0x298
    NSMutableArray * _textWidgetColors; // +0x2a0
    NSMutableArray * _textWidgetStyles; // +0x2a8
    NSMutableArray * _actionTraceArray; // +0x2b0
}
+ (id)stateGetVideo;
+ (id)stateCompressNormalVideo;
+ (id)stateUpload;
+ (id)stateCompressMegaVideoShort;
+ (id)stateCompressMegaVideoFull;
+ (id)genReportStrWithUndoRedoActionArray:(id)arg1;
- (id)init;
- (id)actionTraceArray;
- (id)proModeReportObj;
- (void)setEditImageAttr:(id)arg1;
- (void)setEditVideoAttr:(id)arg1;
- (void)updateReportStr:(id)arg1;
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
- (void)reportCameraActionsLog;
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
- (unsigned long long)clickMoreCnt;
- (void)setClickMoreCnt:(unsigned long long)arg1;
- (void)setProModeReportObj:(id)arg1;
- (unsigned long long)cameraEnterSessionID;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)roomSize;
- (void)setRoomSize:(unsigned int)arg1;
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
- (unsigned int)clickPenWidgetToolCount;
- (void)setClickPenWidgetToolCount:(unsigned int)arg1;
- (unsigned int)penWidgetToolCount;
- (void)setPenWidgetToolCount:(unsigned int)arg1;
- (unsigned int)penWidgetToolColorCount;
- (void)setPenWidgetToolColorCount:(unsigned int)arg1;
- (unsigned int)clickEmoticonWidgetToolCount;
- (void)setClickEmoticonWidgetToolCount:(unsigned int)arg1;
- (unsigned int)clickTextWidgetToolCount;
- (void)setClickTextWidgetToolCount:(unsigned int)arg1;
- (id)textWidgetColors;
- (void)setTextWidgetColors:(id)arg1;
- (id)textWidgetStyles;
- (void)setTextWidgetStyles:(id)arg1;
- (unsigned int)clickMosaicWidgetToolCount;
- (void)setClickMosaicWidgetToolCount:(unsigned int)arg1;
- (unsigned int)mosaicGlassWidgetToolCount;
- (void)setMosaicGlassWidgetToolCount:(unsigned int)arg1;
- (unsigned int)mosaicPaintingWidgetToolCount;
- (void)setMosaicPaintingWidgetToolCount:(unsigned int)arg1;
- (unsigned int)clickCropWidgetToolCount;
- (void)setClickCropWidgetToolCount:(unsigned int)arg1;
- (unsigned int)croppedImageWidth;
- (void)setCroppedImageWidth:(unsigned int)arg1;
- (unsigned int)croppedImageHeight;
- (void)setCroppedImageHeight:(unsigned int)arg1;
- (unsigned int)isRotated;
- (void)setIsRotated:(unsigned int)arg1;
- (unsigned int)clickMusicWidgetToolCount;
- (void)setClickMusicWidgetToolCount:(unsigned int)arg1;
- (void)setActionTraceArray:(id)arg1;
- (void).cxx_destruct;
@end
