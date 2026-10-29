@interface VOIPMgr : MMUserService <IAUAudioDeviceExt, AUAudioDataSource, AVVideoDataSource, IVOIPSyncExt, ISysCallCheckExt, AVVideoDeviceDelegate, VoIPAudioServiceExtension, PBMessageObserverDelegate, INetworkStatusMgrExt, CNetworkStatusExt, IVOIPSyncExt, ISysCallCheckExt, CMobileSIMTypeExt, VoIPOrientationServiceExtension, MMServiceProtocol, AVVideoDeviceSessionDelegate, AVVideoDeviceFrameDelegate>
{
    BOOL mIsInterrupted; // +0x8
    BOOL mIsGotRelayData; // +0x9
    BOOL mIsGotStrategy; // +0xa
    BOOL mIsGotSvrAddr; // +0xb
    BOOL mIsCanConnect; // +0xc
    BOOL mIsConnected; // +0xd
    BOOL mIsConnectedDirect; // +0xe
    BOOL mIsSimultaneousCall; // +0xf
    BOOL mIsCanTalk; // +0x10
    BOOL mIsTalked; // +0x11
    BOOL mIsEngineStarted; // +0x12
    BOOL mIsCanSendData; // +0x13
    BOOL mIsPreConnect; // +0x14
    BOOL mIsVideoStarted; // +0x15
    BOOL mIsRecordStarted; // +0x16
    BOOL mIsPreConnectFail; // +0x17
    BOOL mIsVoipAccepted; // +0x18
    BOOL mIsVoipAnswerCgiNetworkFail; // +0x19
    unsigned int uiRingPlayState; // +0x1c
    int mStartTalkFlag; // +0x20
    unsigned int mLastNetType; // +0x24
    NSRecursiveLock * inputVideoRenderLock; // +0x28
    id <IVOIPVideoDeviceDelegate> m_videoDeviceDelegate; // +0x30
    BOOL mNeedSpeedTest; // +0x38
    int mSpeedTestStatus; // +0x3c
    _SpeedTestInfo mSpeedTestInfo; // +0x40
    BOOL mIs_Vcodec2_HWEnc_Enable; // +0x88
    BOOL mIs_H264_HWEnc_Enable; // +0x89
    BOOL mIsOppoOldVer; // +0x8a
    BOOL mIsHWEncEnable; // +0x8b
    BOOL mIsHWEncUsing; // +0x8c
    unsigned int muiHWEncExceptionMask; // +0x90
    unsigned int muiHWDecExceptionMask; // +0x94
    unsigned int muiUnKnowDataNum; // +0x98
    int mHWErrorEncFrmCount; // +0x9c
    unsigned int muiVcodec2HWEncExceptionMask; // +0xa0
    unsigned int muiVcodec2HWDecExceptionMask; // +0xa4
    BOOL mIsHWDecEnable; // +0xa8
    BOOL mIsHWDecUsing; // +0xa9
    int mHWErrorDecFrmCount; // +0xac
    BOOL mIReqFlag; // +0xb0
    BOOL mIsGetRemoteHW; // +0xb1
    BOOL mForceRefreshXPS; // +0xb2
    BOOL mIsStopHWEnc; // +0xb3
    BOOL mIsVcodec2HWDecNow; // +0xb4
    int mPrevFrmType; // +0xb8
    int mHWBR; // +0xbc
    int mHWIGap; // +0xc0
    int mHWWidth; // +0xc4
    int mHWHeight; // +0xc8
    int mHWFps; // +0xcc
    char * mHWYUVbuffer; // +0xd0
    char * mCameraBuf; // +0xd8
    unsigned long long mHWYUVLength; // +0xe0
    __CVBuffer * mPixelBufferDS; // +0xe8
    char * mRealSWYUVBuffer; // +0xf0
    int mRealSWYUVBufferLength; // +0xf8
    CGSize localVideoSize; // +0x100
    CGSize remoteVideoSize; // +0x110
    BOOL remoteIsNotPhone; // +0x120
    BOOL mRemoteIsAndroid; // +0x121
    BOOL mUsingAVCC; // +0x122
    int clipRatio; // +0x124
    BOOL mIsMinimizeView; // +0x128
    unsigned int mNextInviteAvailable; // +0x12c
    opaqueCMFormatDescription * mVTDecFormat; // +0x130
    ISpeedTestChannel * mpSpeedTestChannel; // +0x138
    int mLastHWCodecType; // +0x140
    int local_conn_set_seq; // +0x144
    tagVoipCallInfo mCallinInfo; // +0x148
    int mSimuCallStatus; // +0x178
    unsigned int mRemoteWxVer; // +0x17c
    tagVoipCallInfo mCalloutInfo; // +0x180
    unsigned int[6] cgiRtt; // +0x1b0
    int mInitThermalState; // +0x1c8
    int mThermalState; // +0x1cc
    int mMaxThermalState; // +0x1d0
    unsigned int mInitCpuUsage; // +0x1d4
    unsigned int mCpuUsage; // +0x1d8
    unsigned int mPrevCpuUsage; // +0x1dc
    unsigned int mMaxCpuUsage; // +0x1e0
    unsigned int mIsLowPowerModeEnabled; // +0x1e4
    unsigned int mInitBatteryInfo; // +0x1e8
    unsigned int mBatteryInfo; // +0x1ec
    unsigned int mPrevBatteryInfo; // +0x1f0
    unsigned int mLowBattery; // +0x1f4
    unsigned int mPrevLowBattery; // +0x1f8
    unsigned int mInitDeviceCpuUsage; // +0x1fc
    unsigned int mDeviceCpuUsage; // +0x200
    unsigned int mPrevTotalCpuUsage; // +0x204
    unsigned int mMaxTotalCpuUsage; // +0x208
    unsigned int mInitBatteryChargeInfo; // +0x20c
    unsigned int mBatteryChargeInfo; // +0x210
    unsigned int mTotalBackGroundDuration; // +0x214
    unsigned long long mLastGotoBackGroundTs; // +0x218
    unsigned int mTotalMiniViewDuration; // +0x220
    unsigned long long mLastGotoMiniViewTs; // +0x228
    stSvrCtrlNewS2P_OUT stQoS; // +0x230
    unsigned int mAudioDevicePlayVolume; // +0x240
    VOIPKernelLog * mKernelLog; // +0x248
    BOOL StatReportStatus; // +0x250
    BOOL mSendInviteStatus; // +0x251
    BOOL mEnableRudpAccept; // +0x252
    BOOL mHasAccept; // +0x253
    BOOL mIsVoipAnswer; // +0x254
    BOOL mIsPausedByInterrupt; // +0x255
    BOOL mIsDangerTalk; // +0x256
    BOOL mRemoteBeautyOn; // +0x257
    BOOL mStateOfMimimizeView; // +0x258
    BOOL mIsShouldSendSPS; // +0x259
    BOOL bForceKeyFrame; // +0x25a
    BOOL mIsHWHEVCUsing; // +0x25b
    BOOL mbFrameDroppedTooLong; // +0x25c
    BOOL mHppEnable; // +0x25d
    BOOL isNewSimulCallee; // +0x25e
    BOOL isVideoChangeToAudioMode; // +0x25f
    BOOL mIsInterruptByPhoneCall; // +0x260
    BOOL _isLocalCaptureSuspended; // +0x261
    BOOL _isRemoteCaptureFront; // +0x262
    BOOL _isInBackground; // +0x263
    BOOL _isLocalCaptureBack; // +0x264
    BOOL _isLocalCaptureCheckingActiveContinually; // +0x265
    BOOL _enableVoIPLogSwitch; // +0x266
    BOOL _mEnableDirectRendering; // +0x267
    BOOL _mIsVideoInited; // +0x268
    BOOL _m_usingFrontCameraLastFrame; // +0x269
    BOOL _m_cameraFrontState; // +0x26a
    BOOL _mIsNearEar; // +0x26b
    BOOL _shouldCheckLocalCaptureIsActive; // +0x26c
    BOOL _isPIPDisplaying; // +0x26d
    unsigned int mVoIPType; // +0x270
    unsigned int mTimeCounter; // +0x274
    int mCntTryStartAudioDev; // +0x278
    int mTimeSendAnswer; // +0x27c
    int cap_fps; // +0x280
    int send_fps; // +0x284
    int recv_fps; // +0x288
    int send_kbps; // +0x28c
    int recv_kbps; // +0x290
    int mRemoteRenderCnt; // +0x294
    unsigned int mCaptureFrames; // +0x298
    int mReportUsePreconnect; // +0x29c
    int mReportPreconnectSuccess; // +0x2a0
    unsigned int mEncFrames; // +0x2a4
    int status; // +0x2a8
    int mDialUsedTime; // +0x2ac
    int mCallTime; // +0x2b0
    int mCancelInviteTime; // +0x2b4
    int mAnswerTime; // +0x2b8
    int callResultStatus; // +0x2bc
    int exitAbnormalStatus; // +0x2c0
    int DoubleLinkSwitchReportStatus; // +0x2c4
    unsigned int mIsRemoteUserAbort; // +0x2c8
    unsigned int mIsUserAbort; // +0x2cc
    unsigned int mDoubleLinkSwitchReqCnt; // +0x2d0
    unsigned int mDoubleLinkSwitchSucToDirectCnt; // +0x2d4
    unsigned int mDoubleLinkSwitchSucToRelayCnt; // +0x2d8
    int AudioTsdfBeyond3G; // +0x2dc
    int AudioTsdfEdge; // +0x2e0
    int PassthroughQosAlgorithm; // +0x2e4
    int FastPlayRepair; // +0x2e8
    int bUseNewP2S; // +0x2ec
    int bAudioDTX; // +0x2f0
    int mSwitchInterval; // +0x2f4
    int mSwitchTcpPktCntThreshold; // +0x2f8
    int bEnableRmIOAndS3A; // +0x2fc
    int iAudioEnableSpkec; // +0x300
    int iAudioEnableXnoiseSup; // +0x304
    int iEnableConfigIosMic; // +0x308
    int mHWCloseCmd; // +0x30c
    int mSvrCfgListV; // +0x310
    unsigned int mSwitchFlag; // +0x314
    int mEnableDataAccept; // +0x318
    unsigned int mRudpAcceptTimeoutTh; // +0x31c
    int mLocalQosMaxBRForRelay; // +0x320
    int mQualityRedirectReqCnt; // +0x324
    int mQualityDoRedirectCnt; // +0x328
    unsigned int mWifiNicCnt; // +0x32c
    unsigned int mCellularNicCnt; // +0x330
    unsigned int mFinalCellularNicCnt; // +0x334
    int bIsGotFirstValidSample; // +0x338
    int mLastSwitchTimer; // +0x33c
    unsigned int mInviteId; // +0x340
    int mInitNetType; // +0x344
    int mLastSimCardType; // +0x348
    int mMaxHWEncSize; // +0x34c
    int mOSType; // +0x350
    int mMaxSWEncSize; // +0x354
    int mUseSharpenFilter; // +0x358
    int mUseSharpenFilterBeautyoff; // +0x35c
    int mUse1080pSharpen; // +0x360
    int mUseRetinaRender; // +0x364
    int mVTEncStatus; // +0x368
    int mVTDecStatus; // +0x36c
    int mLeftHWEncFrms; // +0x370
    int mIFrameTemporalID; // +0x374
    int mNewSimuCallRole; // +0x378
    unsigned int tipNetBadNum; // +0x37c
    unsigned int tipOtherSideNetBadNum; // +0x380
    unsigned int _lastWxVer; // +0x384
    int _reportRoomMemberId; // +0x388
    unsigned int _reportVoIPType; // +0x38c
    int _reportButtonStatus; // +0x390
    int _m_switchCameraFrameCnt; // +0x394
    unsigned int _m_cameraChangeToOrientationLastCount; // +0x398
    unsigned int _mVoIPCallKitType; // +0x39c
    unsigned int _mDeviceNearEarTime; // +0x3a0
    unsigned int _mDeviceLastNearEarTime; // +0x3a4
    unsigned int _mUIInterruptStartTime; // +0x3a8
    unsigned int _mUIInterruptEndTime; // +0x3ac
    unsigned int _mUISysInterruptCnt; // +0x3b0
    unsigned int _mUIOtherInterruptCnt; // +0x3b4
    unsigned int _changeToCelluarCount; // +0x3b8
    VOIPVideoRender * inputVideoRender; // +0x3c0
    VOIPVideoRender * outputVideoRender; // +0x3c8
    VOIPVideoRender * smallInputVideoRender; // +0x3d0
    VOIPVideoRender * smallOutputVideoRender; // +0x3d8
    VOIPDialData * mDialData; // +0x3e0
    VOIPComponent * mComponent; // +0x3e8
    AUAudioDevice * mAudioDevice; // +0x3f0
    AVVideoDevice * mVideoDevice; // +0x3f8
    NSRecursiveLock * mAudioEncLock; // +0x400
    NSRecursiveLock * mAudioDecLock; // +0x408
    NSRecursiveLock * mVideoEncLock; // +0x410
    NSRecursiveLock * mVideoP2SLock; // +0x418
    NSRecursiveLock * mVideoDecLock; // +0x420
    NSRecursiveLock * mVideoHWEncLock; // +0x428
    NSRecursiveLock * mVideoHWDecLock; // +0x430
    NSRecursiveLock * mVideoLocalRenderLock; // +0x438
    NSRecursiveLock * mVideoRemoteRenderLock; // +0x440
    NSRecursiveLock * mStartAudioLock; // +0x448
    NSRecursiveLock * mStartVideoLock; // +0x450
    NSRecursiveLock * mStartRecordLock; // +0x458
    NSRecursiveLock * outputVideoRenderLock; // +0x460
    NSRecursiveLock * smallOutputVideoRenderLock; // +0x468
    MMTimer * mVoipTimer; // +0x470
    char * mPreviewBuf; // +0x478
    unsigned long long mSendInviteTime; // +0x480
    unsigned long long mInviteRespTime; // +0x488
    unsigned long long mRecvInviteTime; // +0x490
    unsigned long long mSendShutdownTime; // +0x498
    unsigned long long mRealAcceptCallTime; // +0x4a0
    unsigned long long mStartTalkingTime; // +0x4a8
    unsigned long long mRecvFirstAVDataPacketTime; // +0x4b0
    unsigned long long mRecvFirstVArqReqDataPacketTime; // +0x4b8
    unsigned long long mRecvFirstVArqRespDataPacketTime; // +0x4c0
    unsigned long long mSwitchFlagExt; // +0x4c8
    unsigned long long mFirstPktReceivedTime; // +0x4d0
    unsigned long long mAcceptReceivedTime; // +0x4d8
    unsigned long long mSyncAcceptReceivedTime; // +0x4e0
    unsigned long long mAckedReceivedTime; // +0x4e8
    NSString * mNicUpdateInfo; // +0x4f0
    NSString * mInitSSIDInfo; // +0x4f8
    NSString * mInitBSSIDInfo; // +0x500
    unsigned long long mTalkViewStartTime; // +0x508
    unsigned long long mDecodeFirstPktTime; // +0x510
    unsigned long long mLastDisconnectSysCallTime; // +0x518
    unsigned long long mLastBeginSysCallTime; // +0x520
    unsigned long long mLastBeginNoSysCallTime; // +0x528
    unsigned long long mbIsFirstBeginSysCall; // +0x530
    unsigned long long mbIsFirstBeginNoSysCall; // +0x538
    VOIPSpeedTestChannelAdapter * mSpeedTestAdapter; // +0x540
    NSString * mWarningString; // +0x548
    unsigned long long mDangerRoomId; // +0x550
    unsigned long long mDangerRoomKey; // +0x558
    OpaqueVTCompressionSession * mVTCompressionSession; // +0x560
    OpaqueVTDecompressionSession * mVTDecompressionSession; // +0x568
    __CVBuffer * decodedFrameBuffer; // +0x570
    unsigned long long mLastEncCallbackTs; // +0x578
    XImageViewRenderer * _localViewRenderer; // +0x580
    XImageViewRenderer * _remoteViewRenderer; // +0x588
    XImageContext * _remoteImageContext; // +0x590
    unsigned long long _preferredFPS; // +0x598
    NSString * _remoteSourceDevice; // +0x5a0
    NSString * _remoteSourceDeviceModel; // +0x5a8
    double _remoteCaptureStatusLastSyncTimestamp; // +0x5b0
    unsigned long long _remoteCaptureStatus; // +0x5b8
    double _remoteCaputreFrameRateLastSyncTimestamp; // +0x5c0
    unsigned long long _remoteCaputreFrameRate; // +0x5c8
    double _remoteCapturePositionLastSyncTimestamp; // +0x5d0
    NSString * _reportVirtualBackgroundData; // +0x5d8
    unsigned long long _lastLocalCaptureFrameIndex; // +0x5e0
    double _lastLocalCaptureSuspendedTimestamp; // +0x5e8
    unsigned long long _reportRoomId; // +0x5f0
    long long _reportRoomKey; // +0x5f8
    unsigned long long _openFrom; // +0x600
    NSMutableArray * _mutableObservers; // +0x608
    long long _deviceOrientation; // +0x610
    NSRecursiveLock * _mAudioPlayLock; // +0x618
    unsigned long long _mSendAckTime; // +0x620
    unsigned long long _mAckRespTime; // +0x628
    unsigned long long _mSendAnswerTime; // +0x630
    unsigned long long _mAnswerRespTime; // +0x638
    unsigned long long _mSendVoipHeartBeatTime; // +0x640
    unsigned long long _mSendRedirectTime; // +0x648
    unsigned long long _mRudpAcceptReceivedTime; // +0x650
    long long _m_videoOrientation; // +0x658
    long long _m_cameraOrientation; // +0x660
    long long _m_cameraChangeToOrientation; // +0x668
    CMMotionManager * _m_motionMgr; // +0x670
    NSString * _mRemoteUserName; // +0x678
    unsigned long long _mFirstFrmTs; // +0x680
    double _sessionStartUpTime; // +0x688
    timeval dialStartTime; // +0x690
    timeval mStartTalkTime; // +0x6a0
    DialReport_t dialReport; // +0x6b0
}
- (void)audioDeviceNearEar:(id)arg1;
- (void)audioDeviceFarawayEar:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (long long)calOrientationWithNotify:(int)arg1;
- (float)getVideoDegreesWithOrientation:(long long)arg1;
- (void)RenderRemoteTexture:(__CVBuffer *)arg1;
- (BOOL)createFrameByDefaultWithDefaultBytes:(char *)arg1 width:(long long)arg2 height:(long long)arg3 completion:(id /* block */)arg4;
- (void)createFrameByDefaultWithEventCode:(long long)arg1 param:(int)arg2 type:(int)arg3;
- (void)createFrameByHEVCWithBuffer:(char *)arg1 dataType:(int)arg2 dataLength:(int)arg3;
- (void)InfoNotify:(char *)arg1;
- (void)EventNotify:(long long)arg1 param:(int)arg2 type:(int)arg3;
- (void)DataNotify:(char *)arg1 len:(int)arg2 SendId:(unsigned short)arg3 param:(void *)arg4;
- (void)DataNotify_Arq:(char *)arg1 len:(int)arg2 type:(unsigned char)arg3 SendId:(unsigned short)arg4;
- (void)GetChannelP2SInfo:(char *)arg1 len:(int)arg2;
- (void)SetChannelP2SInfo:(char *)arg1 len:(int)arg2;
- (void)SetChannelS2PInfo:(char *)arg1 len:(int)arg2;
- (void)DataNotify_pp:(char *)arg1 len:(int)arg2 param:(short)arg3 SendId:(unsigned short)arg4;
- (int)OnTransportChannelData:(const ConnId *)arg1 DataType:(int)arg2 pData:(void *)arg3 len:(int)arg4;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)GetFrmType;
- (int)GetHWEncWidth;
- (void)SetHWEncBR:(int)arg1;
- (void)UpdateHWDecSession;
- (void)onGetRemoteStatusRudp:(id)arg1;
- (void)UpdateHWQosParam;
- (int)ReInitHWEnc;
- (void)renderWithFrameIndex:(unsigned long long)arg1 data:(char *)arg2 type:(int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5;
- (int)encodeWithFrameIndex:(unsigned long long)arg1 data:(char *)arg2 type:(int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 hasNoneInterruption:(BOOL *)arg6;
- (float)getRenderImageRotation;
- (void)renderToRemoteView:(__CVBuffer *)arg1;
- (void)renderYuvToLocalView:(__CVBuffer *)arg1;
- (void)renderToLocalView:(id)arg1;
- (void)videoDevice:(id)arg1 didOutputPixelBuffer:(__CVBuffer *)arg2;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5 rgbaTexture:(id)arg6;
- (CGSize)updateRendering:(CGSize)arg1 OrginalSize:(CGSize)arg2 IsLocalVideo:(BOOL)arg3;
- (void)tryStartTalk;
- (void)StartTalk;
- (void)StartRecordAndPlayAudioForVoip;
- (void)StartAudioDataInNewThread;
- (void)StartAudioData;
- (void)StartVideoData;
- (void)StopTalk;
- (void)CloseRoomReqFromTEG:(id)arg1;
- (void)ChannelTransAbnormal:(id)arg1;
- (void)TalkBroken:(id)arg1;
- (void)StopHWEnc:(int)arg1 closeType:(int)arg2;
- (void)StopHWDec:(int)arg1;
- (void)SendLocalNetWorkChangeCmd:(int)arg1;
- (int)EnableAq:(int)arg1 aqBlur:(BOOL)arg2;
- (int)EnableBlur:(int)arg1 aqBlur:(BOOL)arg2;
- (int)DisableCodec:(int)arg1 localClose:(BOOL)arg2 remoteClose:(BOOL)arg3;
- (int)CloseCodec:(int)arg1 localClose:(BOOL)arg2 remoteClose:(BOOL)arg3 isEncoder:(BOOL)arg4;
- (int)RestrictVideoRes:(int)arg1 localClose:(BOOL)arg2 remoteClose:(BOOL)arg3;
- (int)GetVoipRnnNsStatus;
- (void)SyncAudioDevOccupied:(int)arg1 app:(int)arg2;
- (void)SendCloseHWEncCmd:(int)arg1;
- (int)DecFrmError:(BOOL)arg1;
- (void)OnSyncError:(int)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1 DataFlag:(unsigned int)arg2;
- (void)OnGotRemoteConnectData:(id)arg1;
- (void)OnGotRemoteNewConnData:(id)arg1;
- (void)OnGotRemoteRelayData:(id)arg1;
- (void)InitAll;
- (void)resetCameraDevice;
- (void)UnInitAll;
- (void)checkTimeoutInternally;
- (void)checkAcceptTimeout;
- (void)TimerCheck;
- (void)UpdateDeviceStateInfo;
- (void)UpdateAudioDeviceInfo;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)restartAudioDevice;
- (void)interruptVoipByNonPhoneCall;
- (void)interruptVoipByCall:(BOOL)arg1;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)handleEnterBackground;
- (void)handleEnterForeground;
- (void)StartSession;
- (void)StopSession;
- (void)StopSessionWithProtocolErr:(int)arg1;
- (void)SetAudioSvrParams:(id)arg1;
- (void)GotNewConnMultiRelayData:(id)arg1 fromStatRedirect:(BOOL)arg2;
- (void)GotMultiRelayData:(id)arg1;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(BOOL)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCancelInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipAnswerResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipShutdownResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipHeartbeatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipStatReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipRedirectResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleSpeedTestResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleSpeedTestResultResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MakeFakeReport:(id *)arg1;
- (void)SetReportData:(id *)arg1 channelReport:(id *)arg2 engineReport:(id *)arg3 engineExtReport:(id *)arg4;
- (void)SendInviteRequestBy:(id)arg1 InviteType:(unsigned int)arg2 CallType:(unsigned int)arg3;
- (void)SendCancelInviteRequestWithCancelType:(int)arg1;
- (void)SendSimuCancelInviteRequestWithCancelType:(unsigned long long)arg1 roomKey:(unsigned long long)arg2 inviteType:(unsigned int)arg3 cancelType:(unsigned int)arg4;
- (void)SendAnswerRequestBy:(id)arg1 AnswerType:(unsigned int)arg2 forceToVoice:(BOOL)arg3;
- (void)SendShutdownRequestWithReason:(int)arg1;
- (void)SendHeartbeatRequest;
- (BOOL)checkRoomIsAliveWhenTalkingWithCompletion:(id /* block */)arg1;
- (void)SendStatReportRequest;
- (void)SendNewStatReport:(unsigned long long)arg1 memberId:(unsigned int)arg2 dialReport:(id)arg3 channelReport:(id)arg4 engineReport:(id)arg5 engineExtReport:(id)arg6 directConnReport:(vector<std::string, std::allocator<std::string>>)arg7 relayConnReport:(vector<std::string, std::allocator<std::string>>)arg8 engineMPReport:(vector<std::string, std::allocator<std::string>>)arg9 natReport:(list<std::string, std::allocator<std::string>>)arg10;
- (void)SendRedirectRequest:(unsigned int)arg1 SampleArray:(id)arg2 OldNetType:(unsigned int)arg3 NewNetType:(unsigned int)arg4;
- (void)SendSpeedTestReq;
- (void)SendSpeedTestResultReq:(unsigned long long)arg1 ResultArray:(id)arg2;
- (void)tryStartConnect;
- (void)StartConnect;
- (void *)GetRelayConnInfo:(id)arg1;
- (void *)GetDirectConnInfo:(id)arg1;
- (void)StartConnectRelay;
- (void)StartConnectDirect;
- (void)StopConnect;
- (void)ConnectFail:(id)arg1;
- (void)PushRelayData:(id)arg1;
- (int)OnTransportChannelCmd:(const ConnId *)arg1 CmdType:(int)arg2 CmdData:(void *)arg3 len:(int)arg4;
- (void)onAcceptBydata;
- (int)OnTransportChannelEvent:(const ConnId *)arg1 AttrInfo:(const void *)arg2 AttrStat:(const ConnStatInfo *)arg3 Event:(unsigned short)arg4 ErrNo:(int)arg5;
- (unsigned int)GetNetType;
- (unsigned int)GetCellularRadioType;
- (unsigned int)GetDispRate;
- (int)cpuCapacity;
- (void)SetMVEInfo:(struct *)arg1;
- (void)CalcDialUsedTime;
- (void)CalcNewDailUsedTime;
- (void)CalcCallTime;
- (void)CalcNearEarTime;
- (void)SetStatus:(int)arg1 andErrNo:(int)arg2;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)GetCellularIspInfoStr;
- (int)GetNicInfo:(void *)arg1 andFrom:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2;
- (unsigned int)remoteWxVer;
- (id)init;
- (void)dealloc;
- (CGSize)remoteRenderSize;
- (CGSize)localRenderSize;
- (void)resetParams;
- (id)observers;
- (void)appendObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setOutputVideoRender:(id)arg1;
- (void)updateCameraPosToFitDevice;
- (void)setCameraPos:(long long)arg1;
- (void)setInputVideoRender:(id)arg1;
- (id)inputVideoRender;
- (BOOL)mIsMinimizeView;
- (void)setSmallInputVideoRender:(id)arg1;
- (id)smallInputVideoRender;
- (void)setSmallOutputVideoRender:(id)arg1;
- (id)smallOutputVideoRender;
- (void)setVideoDelegate:(id)arg1;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)StartLocalVideo;
- (void)resetVoipRender;
- (void)RealCall:(id)arg1 withCallType:(id)arg2;
- (void)AudioCall:(id)arg1 withCallType:(unsigned int)arg2;
- (void)VideoCall:(id)arg1 withCallType:(unsigned int)arg2;
- (void)CancelCall:(int)arg1;
- (void)BeCanceled;
- (void)RealAccept:(id)arg1 forceToVoice:(BOOL)arg2;
- (void)AcceptAudio:(id)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3;
- (void)AcceptVideo:(id)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3 forceToVoice:(BOOL)arg4;
- (void)Reject:(id)arg1 withRoomId:(unsigned long long)arg2 andKey:(long long)arg3;
- (void)HangupWithReason:(int)arg1 ifIsConnect:(BOOL)arg2;
- (void)HangupWithReason:(int)arg1;
- (int)getNetSpeed:(int *)arg1;
- (BOOL)checkHasChangedToCelluar;
- (void)SetVoipCgiRtt:(int)arg1;
- (unsigned int)getNextInviteAvailable;
- (void)SetLocalVideoEnable:(BOOL)arg1;
- (void)SetLocalVideoEnable:(BOOL)arg1 shouldSendRUDP:(BOOL)arg2;
- (void)SetRemoteVideoEnable:(BOOL)arg1;
- (void)SetMicroPhoneMute:(BOOL)arg1;
- (void)SetSpeakerPhone:(BOOL)arg1;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)notifyAudioDeviceChange:(BOOL)arg1 isWirelessDevice:(BOOL)arg2 isWiredDevice:(BOOL)arg3;
- (void)FlipCamera;
- (BOOL)isCameraFront;
- (void)SetIsCanConnect:(BOOL)arg1;
- (void)SetIsPreConnect:(BOOL)arg1;
- (long long)getRoomKey;
- (unsigned long long)getRoomId;
- (unsigned int)getRoomType;
- (BOOL)getIsTalked;
- (BOOL)isCanSendData;
- (void)StartNetDetect:(BOOL)arg1;
- (void)StopNetDetect;
- (int)SendSpeedTestResult:(void *)arg1 ResultCount:(int)arg2 TotalCount:(int)arg3 TestID:(unsigned long long)arg4;
- (id)getDangerUserTips;
- (BOOL)getHWCap;
- (int)doSimuCallJudge:(id)arg1 isCallin:(BOOL)arg2 inviteType:(int)arg3 roomId:(unsigned long long)arg4 roomKey:(long long)arg5 timeStamp:(long long)arg6;
- (void)onNewSimuCallAutoAccept:(int)arg1 andContact:(id)arg2 withRoomId:(unsigned long long)arg3 andKey:(long long)arg4;
- (id)getMyVoipInviteName;
- (BOOL)isSendAckOrAnswerEnabled;
- (BOOL)isNewSimuCallEnabled;
- (unsigned long long)currentAudioDeviceMode;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)ReachabilityChange:(unsigned int)arg1;
- (int)getVoipMobileSIMType;
- (void)MobileSIMTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (BOOL)shouldShowVoipDoubleLinkSettingSwitch;
- (BOOL)isVoipDoubleLinkSettingOpen;
- (BOOL)isRemoteUsePhone;
- (unsigned int)getCurrentThermalState;
- (float)getSysCpuUsage;
- (BOOL)isBatteryChargeAndLevel:(float *)arg1;
- (void)reportVoipIncomingCallLogWithActionCode:(unsigned int)arg1;
- (void)ReportVirtualBackgroundWithtimeStamp:(id)arg1 endCall:(BOOL)arg2;
- (void)ReportVoIPButtonStatus:(id)arg1 dialStatus:(int)arg2 audioData:(id)arg3 actionResult:(id)arg4 openFrom:(unsigned long long)arg5;
- (void)ReportVoIPButtonAction:(int)arg1 dialStatus:(int)arg2 audioData:(id)arg3 openFrom:(unsigned long long)arg4;
- (void)setVirtualBackground:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)updateCaptureFrameRateToRemote;
- (void)sendLocalCaptureToggleEventToRemote;
- (void)voipAppGotoBackground;
- (void)voipAppBecomeActive;
- (void)voipGotoMiniView;
- (void)voipStopMiniView;
- (void)videoDeviceWillStartSession:(id)arg1;
- (void)videoDeviceDidStartSession:(id)arg1;
- (void)videoDeviceDidToggleCamera:(id)arg1;
- (void)notifyWithData:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)syncRemoteCaptureStatus:(unsigned long long)arg1 withTimestamp:(double)arg2 fromRemote:(BOOL)arg3;
- (void)syncRemoteCaputreFrameRate:(unsigned long long)arg1 timestamp:(double)arg2;
- (void)syncRemoteCapturePositionWithIsFront:(BOOL)arg1 timestamp:(double)arg2;
- (void)checkLocalCaptureActive;
- (void)onLocalCatpureSuspend:(BOOL)arg1;
- (void)onLocalCaptureResume:(BOOL)arg1;
- (void)sendRUDPVoIPCaptureEvent:(int)arg1 timeStamp:(double)arg2;
- (void)sendRUDPVoIPForVideoMode:(unsigned long long)arg1;
- (void)sendRUDPVoIPForUserStatus:(unsigned int)arg1;
- (void)voIPOrientationServiceDidChangeDeviceOrientation;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)voIPOrientationServiceDidChangeMotionOrientation;
- (BOOL)isUsingHWEncode;
- (BOOL)isUsingHWDecode;
- (id)outputVideoRender;
- (void)setMIsMinimizeView:(BOOL)arg1;
- (unsigned int)mVoIPType;
- (void)setMVoIPType:(unsigned int)arg1;
- (id)mDialData;
- (void)setMDialData:(id)arg1;
- (id)mComponent;
- (void)setMComponent:(id)arg1;
- (id)mAudioDevice;
- (void)setMAudioDevice:(id)arg1;
- (id)mVideoDevice;
- (void)setMVideoDevice:(id)arg1;
- (id)mAudioEncLock;
- (void)setMAudioEncLock:(id)arg1;
- (id)mAudioDecLock;
- (void)setMAudioDecLock:(id)arg1;
- (id)mVideoEncLock;
- (void)setMVideoEncLock:(id)arg1;
- (id)mVideoP2SLock;
- (void)setMVideoP2SLock:(id)arg1;
- (id)mVideoDecLock;
- (void)setMVideoDecLock:(id)arg1;
- (id)mVideoHWEncLock;
- (void)setMVideoHWEncLock:(id)arg1;
- (id)mVideoHWDecLock;
- (void)setMVideoHWDecLock:(id)arg1;
- (id)mVideoLocalRenderLock;
- (void)setMVideoLocalRenderLock:(id)arg1;
- (id)mVideoRemoteRenderLock;
- (void)setMVideoRemoteRenderLock:(id)arg1;
- (id)mStartAudioLock;
- (void)setMStartAudioLock:(id)arg1;
- (id)mStartVideoLock;
- (void)setMStartVideoLock:(id)arg1;
- (id)mStartRecordLock;
- (void)setMStartRecordLock:(id)arg1;
- (id)inputVideoRenderLock;
- (void)setInputVideoRenderLock:(id)arg1;
- (id)outputVideoRenderLock;
- (void)setOutputVideoRenderLock:(id)arg1;
- (id)smallOutputVideoRenderLock;
- (void)setSmallOutputVideoRenderLock:(id)arg1;
- (id)mVoipTimer;
- (void)setMVoipTimer:(id)arg1;
- (unsigned int)mTimeCounter;
- (void)setMTimeCounter:(unsigned int)arg1;
- (int)mCntTryStartAudioDev;
- (void)setMCntTryStartAudioDev:(int)arg1;
- (int)mTimeSendAnswer;
- (void)setMTimeSendAnswer:(int)arg1;
- (int)cap_fps;
- (void)setCap_fps:(int)arg1;
- (int)send_fps;
- (void)setSend_fps:(int)arg1;
- (int)recv_fps;
- (void)setRecv_fps:(int)arg1;
- (int)send_kbps;
- (void)setSend_kbps:(int)arg1;
- (int)recv_kbps;
- (void)setRecv_kbps:(int)arg1;
- (int)mRemoteRenderCnt;
- (void)setMRemoteRenderCnt:(int)arg1;
- (char *)mPreviewBuf;
- (void)setMPreviewBuf:(char *)arg1;
- (unsigned int)mCaptureFrames;
- (void)setMCaptureFrames:(unsigned int)arg1;
- (int)mReportUsePreconnect;
- (void)setMReportUsePreconnect:(int)arg1;
- (int)mReportPreconnectSuccess;
- (void)setMReportPreconnectSuccess:(int)arg1;
- (unsigned int)mEncFrames;
- (void)setMEncFrames:(unsigned int)arg1;
- (timeval)dialStartTime;
- (void)setDialStartTime:(timeval)arg1;
- (DialReport_t)dialReport;
- (void)setDialReport:(DialReport_t)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (unsigned long long)mSendInviteTime;
- (void)setMSendInviteTime:(unsigned long long)arg1;
- (unsigned long long)mInviteRespTime;
- (void)setMInviteRespTime:(unsigned long long)arg1;
- (unsigned long long)mRecvInviteTime;
- (void)setMRecvInviteTime:(unsigned long long)arg1;
- (timeval)mStartTalkTime;
- (void)setMStartTalkTime:(timeval)arg1;
- (int)mDialUsedTime;
- (void)setMDialUsedTime:(int)arg1;
- (int)mCallTime;
- (void)setMCallTime:(int)arg1;
- (int)mCancelInviteTime;
- (void)setMCancelInviteTime:(int)arg1;
- (int)mAnswerTime;
- (void)setMAnswerTime:(int)arg1;
- (int)callResultStatus;
- (void)setCallResultStatus:(int)arg1;
- (int)exitAbnormalStatus;
- (void)setExitAbnormalStatus:(int)arg1;
- (unsigned long long)mSendShutdownTime;
- (void)setMSendShutdownTime:(unsigned long long)arg1;
- (BOOL)StatReportStatus;
- (void)setStatReportStatus:(BOOL)arg1;
- (int)DoubleLinkSwitchReportStatus;
- (void)setDoubleLinkSwitchReportStatus:(int)arg1;
- (BOOL)mSendInviteStatus;
- (void)setMSendInviteStatus:(BOOL)arg1;
- (unsigned int)mIsRemoteUserAbort;
- (void)setMIsRemoteUserAbort:(unsigned int)arg1;
- (unsigned int)mIsUserAbort;
- (void)setMIsUserAbort:(unsigned int)arg1;
- (unsigned long long)mRealAcceptCallTime;
- (void)setMRealAcceptCallTime:(unsigned long long)arg1;
- (unsigned long long)mStartTalkingTime;
- (void)setMStartTalkingTime:(unsigned long long)arg1;
- (unsigned long long)mRecvFirstAVDataPacketTime;
- (void)setMRecvFirstAVDataPacketTime:(unsigned long long)arg1;
- (unsigned long long)mRecvFirstVArqReqDataPacketTime;
- (void)setMRecvFirstVArqReqDataPacketTime:(unsigned long long)arg1;
- (unsigned long long)mRecvFirstVArqRespDataPacketTime;
- (void)setMRecvFirstVArqRespDataPacketTime:(unsigned long long)arg1;
- (unsigned int)mDoubleLinkSwitchReqCnt;
- (void)setMDoubleLinkSwitchReqCnt:(unsigned int)arg1;
- (unsigned int)mDoubleLinkSwitchSucToDirectCnt;
- (void)setMDoubleLinkSwitchSucToDirectCnt:(unsigned int)arg1;
- (unsigned int)mDoubleLinkSwitchSucToRelayCnt;
- (void)setMDoubleLinkSwitchSucToRelayCnt:(unsigned int)arg1;
- (unsigned int)muiHWEncExceptionMask;
- (void)setMuiHWEncExceptionMask:(unsigned int)arg1;
- (unsigned int)muiUnKnowDataNum;
- (void)setMuiUnKnowDataNum:(unsigned int)arg1;
- (int)AudioTsdfBeyond3G;
- (void)setAudioTsdfBeyond3G:(int)arg1;
- (int)AudioTsdfEdge;
- (void)setAudioTsdfEdge:(int)arg1;
- (int)PassthroughQosAlgorithm;
- (void)setPassthroughQosAlgorithm:(int)arg1;
- (int)FastPlayRepair;
- (void)setFastPlayRepair:(int)arg1;
- (int)bUseNewP2S;
- (void)setBUseNewP2S:(int)arg1;
- (int)bAudioDTX;
- (void)setBAudioDTX:(int)arg1;
- (int)mSwitchInterval;
- (void)setMSwitchInterval:(int)arg1;
- (int)mSwitchTcpPktCntThreshold;
- (void)setMSwitchTcpPktCntThreshold:(int)arg1;
- (int)bEnableRmIOAndS3A;
- (void)setBEnableRmIOAndS3A:(int)arg1;
- (int)iAudioEnableSpkec;
- (void)setIAudioEnableSpkec:(int)arg1;
- (int)iAudioEnableXnoiseSup;
- (void)setIAudioEnableXnoiseSup:(int)arg1;
- (int)iEnableConfigIosMic;
- (void)setIEnableConfigIosMic:(int)arg1;
- (int)mHWCloseCmd;
- (void)setMHWCloseCmd:(int)arg1;
- (int)mSvrCfgListV;
- (void)setMSvrCfgListV:(int)arg1;
- (unsigned int)mSwitchFlag;
- (void)setMSwitchFlag:(unsigned int)arg1;
- (unsigned long long)mSwitchFlagExt;
- (void)setMSwitchFlagExt:(unsigned long long)arg1;
- (int)mEnableDataAccept;
- (void)setMEnableDataAccept:(int)arg1;
- (BOOL)mEnableRudpAccept;
- (void)setMEnableRudpAccept:(BOOL)arg1;
- (unsigned int)mRudpAcceptTimeoutTh;
- (void)setMRudpAcceptTimeoutTh:(unsigned int)arg1;
- (int)mLocalQosMaxBRForRelay;
- (void)setMLocalQosMaxBRForRelay:(int)arg1;
- (int)mQualityRedirectReqCnt;
- (void)setMQualityRedirectReqCnt:(int)arg1;
- (int)mQualityDoRedirectCnt;
- (void)setMQualityDoRedirectCnt:(int)arg1;
- (unsigned long long)mFirstPktReceivedTime;
- (void)setMFirstPktReceivedTime:(unsigned long long)arg1;
- (unsigned long long)mAcceptReceivedTime;
- (void)setMAcceptReceivedTime:(unsigned long long)arg1;
- (unsigned long long)mSyncAcceptReceivedTime;
- (void)setMSyncAcceptReceivedTime:(unsigned long long)arg1;
- (unsigned long long)mAckedReceivedTime;
- (void)setMAckedReceivedTime:(unsigned long long)arg1;
- (unsigned int)mWifiNicCnt;
- (void)setMWifiNicCnt:(unsigned int)arg1;
- (unsigned int)mCellularNicCnt;
- (void)setMCellularNicCnt:(unsigned int)arg1;
- (unsigned int)mFinalCellularNicCnt;
- (void)setMFinalCellularNicCnt:(unsigned int)arg1;
- (id)mNicUpdateInfo;
- (void)setMNicUpdateInfo:(id)arg1;
- (id)mInitSSIDInfo;
- (void)setMInitSSIDInfo:(id)arg1;
- (id)mInitBSSIDInfo;
- (void)setMInitBSSIDInfo:(id)arg1;
- (unsigned long long)mTalkViewStartTime;
- (void)setMTalkViewStartTime:(unsigned long long)arg1;
- (unsigned long long)mDecodeFirstPktTime;
- (void)setMDecodeFirstPktTime:(unsigned long long)arg1;
- (unsigned long long)mLastDisconnectSysCallTime;
- (void)setMLastDisconnectSysCallTime:(unsigned long long)arg1;
- (unsigned long long)mLastBeginSysCallTime;
- (void)setMLastBeginSysCallTime:(unsigned long long)arg1;
- (unsigned long long)mLastBeginNoSysCallTime;
- (void)setMLastBeginNoSysCallTime:(unsigned long long)arg1;
- (unsigned long long)mbIsFirstBeginSysCall;
- (void)setMbIsFirstBeginSysCall:(unsigned long long)arg1;
- (unsigned long long)mbIsFirstBeginNoSysCall;
- (void)setMbIsFirstBeginNoSysCall:(unsigned long long)arg1;
- (int)bIsGotFirstValidSample;
- (void)setBIsGotFirstValidSample:(int)arg1;
- (int)mLastSwitchTimer;
- (void)setMLastSwitchTimer:(int)arg1;
- (unsigned int)mInviteId;
- (void)setMInviteId:(unsigned int)arg1;
- (BOOL)mHasAccept;
- (void)setMHasAccept:(BOOL)arg1;
- (BOOL)mIsVoipAnswer;
- (void)setMIsVoipAnswer:(BOOL)arg1;
- (VOIPSpeedTestChannelAdapter *)mSpeedTestAdapter;
- (void)setMSpeedTestAdapter:(VOIPSpeedTestChannelAdapter *)arg1;
- (int)mInitNetType;
- (void)setMInitNetType:(int)arg1;
- (int)mLastSimCardType;
- (void)setMLastSimCardType:(int)arg1;
- (int)mMaxHWEncSize;
- (void)setMMaxHWEncSize:(int)arg1;
- (int)mOSType;
- (void)setMOSType:(int)arg1;
- (int)mMaxSWEncSize;
- (void)setMMaxSWEncSize:(int)arg1;
- (BOOL)mIsPausedByInterrupt;
- (void)setMIsPausedByInterrupt:(BOOL)arg1;
- (BOOL)mIsDangerTalk;
- (void)setMIsDangerTalk:(BOOL)arg1;
- (id)mWarningString;
- (void)setMWarningString:(id)arg1;
- (unsigned long long)mDangerRoomId;
- (void)setMDangerRoomId:(unsigned long long)arg1;
- (unsigned long long)mDangerRoomKey;
- (void)setMDangerRoomKey:(unsigned long long)arg1;
- (int)mUseSharpenFilter;
- (void)setMUseSharpenFilter:(int)arg1;
- (int)mUseSharpenFilterBeautyoff;
- (void)setMUseSharpenFilterBeautyoff:(int)arg1;
- (int)mUse1080pSharpen;
- (void)setMUse1080pSharpen:(int)arg1;
- (int)mUseRetinaRender;
- (void)setMUseRetinaRender:(int)arg1;
- (BOOL)mRemoteBeautyOn;
- (void)setMRemoteBeautyOn:(BOOL)arg1;
- (BOOL)mStateOfMimimizeView;
- (void)setMStateOfMimimizeView:(BOOL)arg1;
- (OpaqueVTCompressionSession *)mVTCompressionSession;
- (void)setMVTCompressionSession:(OpaqueVTCompressionSession *)arg1;
- (OpaqueVTDecompressionSession *)mVTDecompressionSession;
- (void)setMVTDecompressionSession:(OpaqueVTDecompressionSession *)arg1;
- (int)mVTEncStatus;
- (void)setMVTEncStatus:(int)arg1;
- (int)mVTDecStatus;
- (void)setMVTDecStatus:(int)arg1;
- (BOOL)mIsShouldSendSPS;
- (void)setMIsShouldSendSPS:(BOOL)arg1;
- (int)mLeftHWEncFrms;
- (void)setMLeftHWEncFrms:(int)arg1;
- (BOOL)bForceKeyFrame;
- (void)setBForceKeyFrame:(BOOL)arg1;
- (__CVBuffer *)decodedFrameBuffer;
- (void)setDecodedFrameBuffer:(__CVBuffer *)arg1;
- (BOOL)mIsHWHEVCUsing;
- (void)setMIsHWHEVCUsing:(BOOL)arg1;
- (unsigned long long)mLastEncCallbackTs;
- (void)setMLastEncCallbackTs:(unsigned long long)arg1;
- (BOOL)mbFrameDroppedTooLong;
- (void)setMbFrameDroppedTooLong:(BOOL)arg1;
- (int)mIFrameTemporalID;
- (void)setMIFrameTemporalID:(int)arg1;
- (BOOL)mHppEnable;
- (void)setMHppEnable:(BOOL)arg1;
- (BOOL)isNewSimulCallee;
- (void)setIsNewSimulCallee:(BOOL)arg1;
- (int)mNewSimuCallRole;
- (void)setMNewSimuCallRole:(int)arg1;
- (BOOL)mIsVideoStarted;
- (BOOL)mIsRecordStarted;
- (unsigned int)tipNetBadNum;
- (void)setTipNetBadNum:(unsigned int)arg1;
- (unsigned int)tipOtherSideNetBadNum;
- (void)setTipOtherSideNetBadNum:(unsigned int)arg1;
- (id)mKernelLog;
- (void)setMKernelLog:(id)arg1;
- (BOOL)isVideoChangeToAudioMode;
- (void)setIsVideoChangeToAudioMode:(BOOL)arg1;
- (BOOL)mIsInterruptByPhoneCall;
- (void)setMIsInterruptByPhoneCall:(BOOL)arg1;
- (id)localViewRenderer;
- (void)setLocalViewRenderer:(id)arg1;
- (id)remoteViewRenderer;
- (void)setRemoteViewRenderer:(id)arg1;
- (id)remoteImageContext;
- (void)setRemoteImageContext:(id)arg1;
- (unsigned long long)preferredFPS;
- (void)setPreferredFPS:(unsigned long long)arg1;
- (BOOL)isLocalCaptureSuspended;
- (void)setIsLocalCaptureSuspended:(BOOL)arg1;
- (id)remoteSourceDevice;
- (void)setRemoteSourceDevice:(id)arg1;
- (id)remoteSourceDeviceModel;
- (void)setRemoteSourceDeviceModel:(id)arg1;
- (double)remoteCaptureStatusLastSyncTimestamp;
- (void)setRemoteCaptureStatusLastSyncTimestamp:(double)arg1;
- (unsigned long long)remoteCaptureStatus;
- (void)setRemoteCaptureStatus:(unsigned long long)arg1;
- (double)remoteCaputreFrameRateLastSyncTimestamp;
- (void)setRemoteCaputreFrameRateLastSyncTimestamp:(double)arg1;
- (unsigned long long)remoteCaputreFrameRate;
- (void)setRemoteCaputreFrameRate:(unsigned long long)arg1;
- (double)remoteCapturePositionLastSyncTimestamp;
- (void)setRemoteCapturePositionLastSyncTimestamp:(double)arg1;
- (BOOL)isRemoteCaptureFront;
- (void)setIsRemoteCaptureFront:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id)reportVirtualBackgroundData;
- (void)setReportVirtualBackgroundData:(id)arg1;
- (unsigned long long)lastLocalCaptureFrameIndex;
- (void)setLastLocalCaptureFrameIndex:(unsigned long long)arg1;
- (BOOL)isLocalCaptureBack;
- (void)setIsLocalCaptureBack:(BOOL)arg1;
- (BOOL)isLocalCaptureCheckingActiveContinually;
- (void)setIsLocalCaptureCheckingActiveContinually:(BOOL)arg1;
- (double)lastLocalCaptureSuspendedTimestamp;
- (void)setLastLocalCaptureSuspendedTimestamp:(double)arg1;
- (unsigned int)lastWxVer;
- (void)setLastWxVer:(unsigned int)arg1;
- (unsigned long long)reportRoomId;
- (void)setReportRoomId:(unsigned long long)arg1;
- (long long)reportRoomKey;
- (void)setReportRoomKey:(long long)arg1;
- (int)reportRoomMemberId;
- (void)setReportRoomMemberId:(int)arg1;
- (unsigned int)reportVoIPType;
- (void)setReportVoIPType:(unsigned int)arg1;
- (int)reportButtonStatus;
- (void)setReportButtonStatus:(int)arg1;
- (unsigned long long)openFrom;
- (void)setOpenFrom:(unsigned long long)arg1;
- (id)mutableObservers;
- (void)setMutableObservers:(id)arg1;
- (long long)deviceOrientation;
- (void)setDeviceOrientation:(long long)arg1;
- (id)mAudioPlayLock;
- (void)setMAudioPlayLock:(id)arg1;
- (unsigned long long)mSendAckTime;
- (void)setMSendAckTime:(unsigned long long)arg1;
- (unsigned long long)mAckRespTime;
- (void)setMAckRespTime:(unsigned long long)arg1;
- (unsigned long long)mSendAnswerTime;
- (void)setMSendAnswerTime:(unsigned long long)arg1;
- (unsigned long long)mAnswerRespTime;
- (void)setMAnswerRespTime:(unsigned long long)arg1;
- (unsigned long long)mSendVoipHeartBeatTime;
- (void)setMSendVoipHeartBeatTime:(unsigned long long)arg1;
- (unsigned long long)mSendRedirectTime;
- (void)setMSendRedirectTime:(unsigned long long)arg1;
- (BOOL)enableVoIPLogSwitch;
- (void)setEnableVoIPLogSwitch:(BOOL)arg1;
- (BOOL)mEnableDirectRendering;
- (void)setMEnableDirectRendering:(BOOL)arg1;
- (unsigned long long)mRudpAcceptReceivedTime;
- (void)setMRudpAcceptReceivedTime:(unsigned long long)arg1;
- (BOOL)mIsVideoInited;
- (void)setMIsVideoInited:(BOOL)arg1;
- (long long)m_videoOrientation;
- (void)setM_videoOrientation:(long long)arg1;
- (long long)m_cameraOrientation;
- (void)setM_cameraOrientation:(long long)arg1;
- (BOOL)m_usingFrontCameraLastFrame;
- (void)setM_usingFrontCameraLastFrame:(BOOL)arg1;
- (BOOL)m_cameraFrontState;
- (void)setM_cameraFrontState:(BOOL)arg1;
- (int)m_switchCameraFrameCnt;
- (void)setM_switchCameraFrameCnt:(int)arg1;
- (long long)m_cameraChangeToOrientation;
- (void)setM_cameraChangeToOrientation:(long long)arg1;
- (unsigned int)m_cameraChangeToOrientationLastCount;
- (void)setM_cameraChangeToOrientationLastCount:(unsigned int)arg1;
- (id)m_motionMgr;
- (void)setM_motionMgr:(id)arg1;
- (unsigned int)mVoIPCallKitType;
- (void)setMVoIPCallKitType:(unsigned int)arg1;
- (unsigned int)mDeviceNearEarTime;
- (void)setMDeviceNearEarTime:(unsigned int)arg1;
- (unsigned int)mDeviceLastNearEarTime;
- (void)setMDeviceLastNearEarTime:(unsigned int)arg1;
- (BOOL)mIsNearEar;
- (void)setMIsNearEar:(BOOL)arg1;
- (unsigned int)mUIInterruptStartTime;
- (void)setMUIInterruptStartTime:(unsigned int)arg1;
- (unsigned int)mUIInterruptEndTime;
- (void)setMUIInterruptEndTime:(unsigned int)arg1;
- (unsigned int)mUISysInterruptCnt;
- (void)setMUISysInterruptCnt:(unsigned int)arg1;
- (unsigned int)mUIOtherInterruptCnt;
- (void)setMUIOtherInterruptCnt:(unsigned int)arg1;
- (id)mRemoteUserName;
- (void)setMRemoteUserName:(id)arg1;
- (unsigned long long)mFirstFrmTs;
- (void)setMFirstFrmTs:(unsigned long long)arg1;
- (unsigned int)changeToCelluarCount;
- (void)setChangeToCelluarCount:(unsigned int)arg1;
- (double)sessionStartUpTime;
- (void)setSessionStartUpTime:(double)arg1;
- (BOOL)shouldCheckLocalCaptureIsActive;
- (void)setShouldCheckLocalCaptureIsActive:(BOOL)arg1;
- (BOOL)isPIPDisplaying;
- (void)setIsPIPDisplaying:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

