@interface WCRedEnvelopes2019GreetingViewController : MMUIViewController <IZCWScrollNumViewDelegate, EmoticonCustomAddLogicControllerDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, IStoreEmotionSingleDownloadMgrExt, WCActionSheetDelegate, CAAnimationDelegate, PAGViewListener, WCRedEnvAudioResMgrDelegate>
{
    int m_currentNum; // +0x68
    NSString * m_currentWish; // +0x70
    NSString * m_currentWishKeyWord; // +0x78
    NSString * m_currentPagName; // +0x80
    NSString * m_currentMaskPagName; // +0x88
    NSString * m_nsStatusMsg; // +0x90
    double m_numAnimationDuration; // +0x98
    int m_currentMessIndex; // +0xa0
    NSArray * m_oMessArr; // +0xa8
    NSString * m_nsHeadUrl; // +0xb0
    NSString * m_nsSenderNickName; // +0xb8
    unsigned long long m_enStatus; // +0xc0
    NSString * m_chatName; // +0xc8
    BOOL isEmoticonHongBao; // +0xd0
    BOOL isNeedReupload; // +0xd1
    BOOL isUploadFail; // +0xd2
    BOOL isDownloadFail; // +0xd3
    BOOL isEmoticonBoardViewShow; // +0xd4
    AddEmoticonWrap * reuploadWrap; // +0xd8
    BOOL _m_bIsSender; // +0xe0
    BOOL _m_bScrollNum; // +0xe1
    BOOL _m_bPitcureEnable; // +0xe2
    BOOL _m_bEnableAddEmoticon; // +0xe3
    BOOL _m_bIsCreate; // +0xe4
    BOOL _m_bFisrtLayout; // +0xe5
    BOOL _m_bEnableDownloadEmoticon; // +0xe6
    BOOL _m_bIsNextClick; // +0xe7
    BOOL _m_bIsSetWXStatusClick; // +0xe8
    BOOL _m_bIsSendClick; // +0xe9
    BOOL _m_bNotNeedPag; // +0xea
    BOOL _m_bHasPagFile; // +0xeb
    BOOL _isAudioRecording; // +0xec
    BOOL _isAudioPlaying; // +0xed
    BOOL _hasShowTooShortTips; // +0xee
    BOOL _hasClickStartRecordBtn; // +0xef
    BOOL _isStartDownloadFromReceiveAutoPlay; // +0xf0
    BOOL _isKeywordAnimating; // +0xf1
    BOOL _isKeywordChecked; // +0xf2
    BOOL _isDismissing; // +0xf3
    BOOL _needReportKeywordAnimate; // +0xf4
    int _m_scene; // +0xf8
    id <WCRedEnvelopes2019GreetingViewControllerDelegate> _m_delegate; // +0x100
    UIView * _m_coverView; // +0x108
    UIView * _m_containerView; // +0x110
    UIImageView * _m_containerBGImgView; // +0x118
    UIButton * _m_closeBtn; // +0x120
    UIButton * _m_cameraBtn; // +0x128
    UIImageView * _m_pictureBGImgView; // +0x130
    MMEmoticonView * _m_pictureImgView; // +0x138
    UIImageView * _m_pictureLoadingView; // +0x140
    UIButton * _m_pictureDelBtn; // +0x148
    MMUILabel * _m_greetingLabel; // +0x150
    MMUILabel * _m_yuanLabel; // +0x158
    ZCWScrollNumView * _m_numView; // +0x160
    UIButton * _m_randomNextMoneyBtn; // +0x168
    UIImageView * _m_snowGifImageView; // +0x170
    MMUILabel * _m_saveBalanceLabel; // +0x178
    UIButton * _m_sendBtn; // +0x180
    MMUILabel * _m_statusLabel; // +0x188
    UIView * _m_senderView; // +0x190
    UIView * _m_receiverView; // +0x198
    UIButton * _m_cancelButton; // +0x1a0
    MMUILabel * _m_loadingLabel; // +0x1a8
    EmoticonBoardView * _m_emoticonBoardView; // +0x1b0
    UIView * _m_emoticonBackgroundView; // +0x1b8
    UIButton * _m_emoticonUploadFailBtn; // +0x1c0
    UIButton * _m_emoticonDownloadFailBtn; // +0x1c8
    UIButton * _m_openDetailButton; // +0x1d0
    UIImageView * _m_arrowImageView; // +0x1d8
    UIButton * _m_saveBalanceBtn; // +0x1e0
    UIImageView * _m_saveBalanceArrowImageView; // +0x1e8
    WCRedEnvelopesControlData * _m_data; // +0x1f0
    UIImage * _m_oImage; // +0x1f8
    WeToast * _m_toastView; // +0x200
    GKImagePicker * _m_picker; // +0x208
    NSString * _m_cdnFileId; // +0x210
    NSString * _m_cdnAesKey; // +0x218
    NSNumber * _m_cdnFileLength; // +0x220
    EmoticonCustomAddLogicController * _m_emoticonCustomAddLogic; // +0x228
    CEmoticonWrap * _m_emoticonWrap; // +0x230
    PAGView * _m_pagView; // +0x238
    UIView * _m_setWXStatusView; // +0x240
    UIButton * _m_addEmotionView; // +0x248
    UIButton * _m_delEmotionView; // +0x250
    KindaProxy * _kindProxy; // +0x258
    PAGView * _m_recordBgPagView; // +0x260
    UIButton * _m_audioPlayBtn; // +0x268
    UIImageView * _m_audioPlayImgView; // +0x270
    MMUILabel * _m_audioPlayTimeLabel; // +0x278
    MMUILabel * _m_audioPlayTipsViewReceive; // +0x280
    UIButton * _m_audioPlayBtnReceive; // +0x288
    MMUILabel * _m_randomWishLabelInBtn; // +0x290
    UIImageView * _m_randomWishIconInBtn; // +0x298
    UIButton * _m_randomNextWishBtn; // +0x2a0
    MMUILabel * _m_audioRecordTipsLabel; // +0x2a8
    UIButton * _m_audioRecordBtn; // +0x2b0
    MMUILabel * _m_audioRecordTimeoutTipsLabel; // +0x2b8
    UIButton * _m_floatSendButton; // +0x2c0
    NSString * _audioDataPath; // +0x2c8
    NSMutableDictionary * _audioDataDict; // +0x2d0
    NSString * _playingAudioID; // +0x2d8
    long long _audioPlayTime; // +0x2e0
    MMTimer * _cloudWordsTimer; // +0x2e8
    long long _cloudWordsAniIndex; // +0x2f0
    NSMutableArray * _keywordDatas; // +0x2f8
    long long _keywordAniIndex; // +0x300
    NSMutableArray * _keywordAniObjs; // +0x308
    NSMutableArray * _keywordAniEndPoints; // +0x310
    NSMutableArray * _keywordAniUsedEndPoints; // +0x318
    NSMutableArray * _keywordAniEndStatus; // +0x320
    NSMutableArray * _keywordAniUsedEndStatus; // +0x328
    double _keywordDefaultFontSize; // +0x330
    unsigned long long _audioStartPlayTimeStampInMs; // +0x338
    NSMutableDictionary * _transingKeywordData; // +0x340
    NSArray * _finalKeywordData; // +0x348
    MMUIButton * _keywordCheckBoxBtn; // +0x350
    UIImageView * _keywordCheckBoxImg; // +0x358
}
- (id)initSendViewWithIsScrollNum:(BOOL)arg1 payData:(id)arg2;
- (id)initReceiveViewWithIsScrollNum:(BOOL)arg1 payData:(id)arg2;
- (id)m_coverView;
- (id)m_containerView;
- (void)tapOnHongBao:(id)arg1;
- (id)m_cameraBtn;
- (void)layoutCamerBtn;
- (id)m_pictureBGImgView;
- (id)m_emoticonBoardView;
- (id)m_emoticonUploadFailBtn;
- (id)m_emoticonDownloadFailBtn;
- (id)m_pictureImgView;
- (id)m_emoticonBackgroundView;
- (id)m_pictureDelBtn;
- (id)m_greetingLabel;
- (id)m_yuanLabel;
- (id)m_numView;
- (void)configNumView:(id)arg1 withNumber:(int)arg2 font:(id)arg3;
- (void)centerButton:(id)arg1 imageSpacing:(double)arg2;
- (id)m_randomNextMoneyBtn;
- (id)m_saveBalanceLabel;
- (id)m_sendBtn;
- (id)m_statusLabel;
- (id)m_senderView;
- (id)m_receiverView;
- (id)m_cancelButton;
- (id)m_toastView;
- (id)m_loadingLabel;
- (id)m_addEmotionView;
- (id)m_delEmotionView;
- (id)m_setWXStatusView;
- (id)m_pagView;
- (id)keywordCheckBoxBtn;
- (void)setupView;
- (void)onTapOnEmotionIcon:(id)arg1;
- (void)viewDidLoad;
- (void)startDownloadEmoticon;
- (void)parseLowUrlDataToAudioItem;
- (void)startDownloadAudioData;
- (void)startLoadEmoticonCache;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)showEmoticon;
- (void)showRetryView;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)updatePagView;
- (void)layoutViews;
- (void)layoutContainerView;
- (void)viewDidLayoutSubviews;
- (BOOL)isEmoticonViewHongBao;
- (void)layoutSendView;
- (void)layoutReceiveView;
- (void)onGoToBalanceDetail;
- (void)layoutExpiredView;
- (void)layoutSenderExpiredView;
- (void)OnOpenList;
- (id)getViewController;
- (void)show;
- (void)dismiss;
- (void)onCloseClick:(id)arg1;
- (id)cameraPackageId;
- (id)checkImageExistInEmoticonWrapArray:(id)arg1 abortOnFailure:(BOOL)arg2;
- (void)onClickSelectEmoticon:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setEmoticonBoardHidden:(BOOL)arg1;
- (void)setWording50Alpha;
- (void)setWording0Alpha;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (BOOL)handleAddCameraEmoji;
- (void)onSendButtonClicked;
- (void)makeSelfieEmoitcon;
- (void)endAnimationV2;
- (void)showV2;
- (void)onPictureDelBtnClick:(id)arg1;
- (void)onNextLucyMoneyClick:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onCoverTap:(id)arg1;
- (void)sendWithoutEmoticon;
- (void)continueRequestSendRedEnv;
- (void)sendWithEmoticon;
- (void)showLoading:(id)arg1;
- (void)keywordCheckBoxBtnClick;
- (void)updateKeywordCheckBox;
- (BOOL)isKeywordCheckboxDefaultOn;
- (id)getKeywordCheckBoxTips;
- (void)initAndUpdateKeywordCheckBox;
- (void)onNumViewAnimationDidStop;
- (void)doNumViewEndingAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (float)hb_width;
- (float)hb_height;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (void)onFailUploadLogic:(id)arg1;
- (void)onReuploadLogic:(id)arg1;
- (void)reuploadEmticon:(id)arg1;
- (void)downloadEmoticon:(id)arg1;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)arg1;
- (void)onTakePhotoCancelled;
- (void)onAddEmoticonDetectIfDismissViewController:(id)arg1;
- (void)saveLastEmoticon:(id)arg1 type:(int)arg2;
- (id)getLastEmoticonWithType:(unsigned int *)arg1;
- (id)getDisplayNameInfo:(id)arg1;
- (void)playPagView;
- (void)rollNumber:(BOOL)arg1 needAnimation:(BOOL)arg2;
- (void)onSetWxStatus;
- (void)setWxStatus;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (BOOL)hasSetWXStatusEntry;
- (BOOL)hasAudioRecordEntry;
- (id)getVoiceCloudWords;
- (BOOL)hasAudioMsgItem;
- (id)m_recordBgPagView;
- (id)m_audioPlayBtn;
- (id)m_audioPlayTipsViewReceive;
- (id)m_randomNextWishBtn;
- (id)m_audioRecordTimeoutTipsLabel;
- (id)m_audioRecordTipsLabel;
- (id)m_audioRecordBtn;
- (id)m_audioPlayBtnReceive;
- (id)m_floatSendButton;
- (void)updateRandomWishBtnView:(double)arg1;
- (double)getDynamicSizeFrom:(double)arg1;
- (void)audioPlayBtnClick;
- (void)audioPlayBtnReceiveClick;
- (void)randomWishBtnClick;
- (void)recordBtnTouchDown;
- (void)checkHoldEvent;
- (void)recordBtnTouchUpInside;
- (void)recordBtnTouchUpOutside;
- (void)floatSendBtnClick;
- (void)playRecordBgPagView;
- (void)startRecordAudio;
- (void)stopRecordAudio;
- (void)removeAudioData;
- (void)startUploadAudioData;
- (void)resetRecordButton;
- (void)reportGreetingWithAction:(int)arg1 sceneUI:(int)arg2 playtime:(long long)arg3 amount:(int)arg4 sendid:(id)arg5 hbStatus:(int)arg6;
- (void)startPlayAudioAfterFinishRecord;
- (void)stopPlayAudioAfterFinishRecord;
- (void)startPlayAudioAfterReceive;
- (void)stopPlayAudioAfterReceive;
- (void)updateAudioPlayBtnWithPlayTime:(long long)arg1;
- (BOOL)isDeviceMute;
- (void)showAudioMuteTips;
- (int)getVoiceKeyWordMaxLengthConfig;
- (id)genKeywordTimeString;
- (void)parseKeywordTimeString:(id)arg1;
- (long long)getVoiceKeywordCount;
- (void)reportRedEnvKeywordWithShowTime:(long long)arg1 index:(long long)arg2 keyword:(id)arg3;
- (void)reportKeywordCheckBoxAction;
- (void)onStartAudioRecord:(long long)arg1;
- (void)onAudioRecordTooShort;
- (void)onFinishedAudioRecord:(id)arg1 recordLength:(int)arg2 errCode:(long long)arg3 stopReason:(long long)arg4;
- (void)onAudioRecordNeedNoticeTimeout:(long long)arg1;
- (void)displayPeakPower:(float)arg1 MaxRadius:(double)arg2 MinRadius:(double)arg3 BaseRadius:(double)arg4 UIView:(id)arg5;
- (void)onAudioStartPlay:(id)arg1;
- (void)onAudioEndPlay:(id)arg1 playtime:(long long)arg2;
- (void)onAudioPlayError:(id)arg1 playtime:(long long)arg2;
- (void)startPlayAudioImgView;
- (void)stopPlayAudioImgView;
- (void)onAudioUploadCdnSuccWithPath:(id)arg1 cdnUrl:(id)arg2 aesKey:(id)arg3 fileSize:(long long)arg4 recordLength:(long long)arg5 format:(long long)arg6;
- (void)onAudioUploadCdnFailWithPath:(id)arg1;
- (void)onAudioCdnDownloadSucc:(id)arg1 cdnUrl:(id)arg2;
- (void)onAudioCdnDownloadFail:(id)arg1;
- (void)onGetAudioTransingKeywordData:(id)arg1;
- (void)onGetAudioFinalKeywordData:(id)arg1;
- (void)startAnimateCloudKeywords;
- (void)realAnimateKeyword;
- (CGPoint)getRandomPointOnCircleWithCenter:(CGPoint)arg1 radius:(double)arg2 arcAngle:(double)arg3;
- (void)setupKeywordAnimationData;
- (void)addKeywordAniEndStatus:(long long)arg1 alpha:(double)arg2;
- (id)getUniqueDestinationPoint;
- (id)getUniqueEndStatusData;
- (void)startKeywordAnimation:(unsigned int)arg1;
- (void)updateKeywordAnimation;
- (id)createWiggleAnimationWithDuration:(double)arg1 frequency:(double)arg2 amplitude:(double)arg3;
- (void)checkAndStartNextAnimationWithCurrentTimeInterval:(long long)arg1;
- (id)genKeywordAnimateLabel:(id)arg1;
- (void)stopKeywordAnimation;
- (void)cleanKeywordAnimateData;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)m_scene;
- (void)setM_scene:(int)arg1;
- (void)setM_coverView:(id)arg1;
- (void)setM_containerView:(id)arg1;
- (id)m_containerBGImgView;
- (void)setM_containerBGImgView:(id)arg1;
- (id)m_closeBtn;
- (void)setM_closeBtn:(id)arg1;
- (void)setM_cameraBtn:(id)arg1;
- (void)setM_pictureBGImgView:(id)arg1;
- (void)setM_pictureImgView:(id)arg1;
- (id)m_pictureLoadingView;
- (void)setM_pictureLoadingView:(id)arg1;
- (void)setM_pictureDelBtn:(id)arg1;
- (void)setM_greetingLabel:(id)arg1;
- (void)setM_yuanLabel:(id)arg1;
- (void)setM_numView:(id)arg1;
- (void)setM_randomNextMoneyBtn:(id)arg1;
- (id)m_snowGifImageView;
- (void)setM_snowGifImageView:(id)arg1;
- (void)setM_saveBalanceLabel:(id)arg1;
- (void)setM_sendBtn:(id)arg1;
- (void)setM_statusLabel:(id)arg1;
- (void)setM_senderView:(id)arg1;
- (void)setM_receiverView:(id)arg1;
- (void)setM_cancelButton:(id)arg1;
- (void)setM_loadingLabel:(id)arg1;
- (void)setM_emoticonBoardView:(id)arg1;
- (void)setM_emoticonBackgroundView:(id)arg1;
- (void)setM_emoticonUploadFailBtn:(id)arg1;
- (void)setM_emoticonDownloadFailBtn:(id)arg1;
- (id)m_openDetailButton;
- (void)setM_openDetailButton:(id)arg1;
- (id)m_arrowImageView;
- (void)setM_arrowImageView:(id)arg1;
- (id)m_saveBalanceBtn;
- (void)setM_saveBalanceBtn:(id)arg1;
- (id)m_saveBalanceArrowImageView;
- (void)setM_saveBalanceArrowImageView:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (BOOL)m_bIsSender;
- (void)setM_bIsSender:(BOOL)arg1;
- (BOOL)m_bScrollNum;
- (void)setM_bScrollNum:(BOOL)arg1;
- (BOOL)m_bPitcureEnable;
- (void)setM_bPitcureEnable:(BOOL)arg1;
- (BOOL)m_bEnableAddEmoticon;
- (void)setM_bEnableAddEmoticon:(BOOL)arg1;
- (BOOL)m_bIsCreate;
- (void)setM_bIsCreate:(BOOL)arg1;
- (id)m_oImage;
- (void)setM_oImage:(id)arg1;
- (BOOL)m_bFisrtLayout;
- (void)setM_bFisrtLayout:(BOOL)arg1;
- (void)setM_toastView:(id)arg1;
- (id)m_picker;
- (void)setM_picker:(id)arg1;
- (id)m_cdnFileId;
- (void)setM_cdnFileId:(id)arg1;
- (id)m_cdnAesKey;
- (void)setM_cdnAesKey:(id)arg1;
- (id)m_cdnFileLength;
- (void)setM_cdnFileLength:(id)arg1;
- (id)m_emoticonCustomAddLogic;
- (void)setM_emoticonCustomAddLogic:(id)arg1;
- (id)m_emoticonWrap;
- (void)setM_emoticonWrap:(id)arg1;
- (BOOL)m_bEnableDownloadEmoticon;
- (void)setM_bEnableDownloadEmoticon:(BOOL)arg1;
- (void)setM_pagView:(id)arg1;
- (void)setM_setWXStatusView:(id)arg1;
- (void)setM_addEmotionView:(id)arg1;
- (void)setM_delEmotionView:(id)arg1;
- (BOOL)m_bIsNextClick;
- (void)setM_bIsNextClick:(BOOL)arg1;
- (BOOL)m_bIsSetWXStatusClick;
- (void)setM_bIsSetWXStatusClick:(BOOL)arg1;
- (BOOL)m_bIsSendClick;
- (void)setM_bIsSendClick:(BOOL)arg1;
- (BOOL)m_bNotNeedPag;
- (void)setM_bNotNeedPag:(BOOL)arg1;
- (BOOL)m_bHasPagFile;
- (void)setM_bHasPagFile:(BOOL)arg1;
- (id)kindProxy;
- (void)setKindProxy:(id)arg1;
- (void)setM_recordBgPagView:(id)arg1;
- (void)setM_audioPlayBtn:(id)arg1;
- (id)m_audioPlayImgView;
- (void)setM_audioPlayImgView:(id)arg1;
- (id)m_audioPlayTimeLabel;
- (void)setM_audioPlayTimeLabel:(id)arg1;
- (void)setM_audioPlayTipsViewReceive:(id)arg1;
- (void)setM_audioPlayBtnReceive:(id)arg1;
- (id)m_randomWishLabelInBtn;
- (void)setM_randomWishLabelInBtn:(id)arg1;
- (id)m_randomWishIconInBtn;
- (void)setM_randomWishIconInBtn:(id)arg1;
- (void)setM_randomNextWishBtn:(id)arg1;
- (void)setM_audioRecordTipsLabel:(id)arg1;
- (void)setM_audioRecordBtn:(id)arg1;
- (void)setM_audioRecordTimeoutTipsLabel:(id)arg1;
- (void)setM_floatSendButton:(id)arg1;
- (BOOL)isAudioRecording;
- (void)setIsAudioRecording:(BOOL)arg1;
- (id)audioDataPath;
- (void)setAudioDataPath:(id)arg1;
- (id)audioDataDict;
- (void)setAudioDataDict:(id)arg1;
- (BOOL)isAudioPlaying;
- (void)setIsAudioPlaying:(BOOL)arg1;
- (id)playingAudioID;
- (void)setPlayingAudioID:(id)arg1;
- (BOOL)hasShowTooShortTips;
- (void)setHasShowTooShortTips:(BOOL)arg1;
- (BOOL)hasClickStartRecordBtn;
- (void)setHasClickStartRecordBtn:(BOOL)arg1;
- (long long)audioPlayTime;
- (void)setAudioPlayTime:(long long)arg1;
- (BOOL)isStartDownloadFromReceiveAutoPlay;
- (void)setIsStartDownloadFromReceiveAutoPlay:(BOOL)arg1;
- (id)cloudWordsTimer;
- (void)setCloudWordsTimer:(id)arg1;
- (long long)cloudWordsAniIndex;
- (void)setCloudWordsAniIndex:(long long)arg1;
- (id)keywordDatas;
- (void)setKeywordDatas:(id)arg1;
- (long long)keywordAniIndex;
- (void)setKeywordAniIndex:(long long)arg1;
- (id)keywordAniObjs;
- (void)setKeywordAniObjs:(id)arg1;
- (id)keywordAniEndPoints;
- (void)setKeywordAniEndPoints:(id)arg1;
- (id)keywordAniUsedEndPoints;
- (void)setKeywordAniUsedEndPoints:(id)arg1;
- (id)keywordAniEndStatus;
- (void)setKeywordAniEndStatus:(id)arg1;
- (id)keywordAniUsedEndStatus;
- (void)setKeywordAniUsedEndStatus:(id)arg1;
- (double)keywordDefaultFontSize;
- (void)setKeywordDefaultFontSize:(double)arg1;
- (BOOL)isKeywordAnimating;
- (void)setIsKeywordAnimating:(BOOL)arg1;
- (unsigned long long)audioStartPlayTimeStampInMs;
- (void)setAudioStartPlayTimeStampInMs:(unsigned long long)arg1;
- (id)transingKeywordData;
- (void)setTransingKeywordData:(id)arg1;
- (id)finalKeywordData;
- (void)setFinalKeywordData:(id)arg1;
- (void)setKeywordCheckBoxBtn:(id)arg1;
- (id)keywordCheckBoxImg;
- (void)setKeywordCheckBoxImg:(id)arg1;
- (BOOL)isKeywordChecked;
- (void)setIsKeywordChecked:(BOOL)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (BOOL)needReportKeywordAnimate;
- (void)setNeedReportKeywordAnimate:(BOOL)arg1;
- (void).cxx_destruct;
@end

