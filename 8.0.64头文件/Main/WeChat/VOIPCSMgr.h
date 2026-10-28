@interface VOIPCSMgr : MMUserService <IAUAudioDeviceExt, INetworkStatusMgrExt, CNetworkStatusExt, PBMessageObserverDelegate, MMServiceProtocol, AVVideoDeviceSessionDelegate, AVVideoDataSource, AUAudioDataSource, ISysCallCheckExt>
{
    BOOL mIsInterrupted; // +0x8
    BOOL mIsGotRelayData; // +0x9
    BOOL mIsGotStrategy; // +0xa
    BOOL mIsGotSvrAddr; // +0xb
    BOOL mIsCanConnect; // +0xc
    BOOL mIsConnected; // +0xd
    BOOL mIsCanTalk; // +0xe
    BOOL mIsTalked; // +0xf
    BOOL mIsEngineStarted; // +0x10
    BOOL mIsCanSendData; // +0x11
    BOOL mIsPreConnect; // +0x12
    BOOL mIsVideoStarted; // +0x13
    BOOL mIsAudioStarted; // +0x14
    BOOL mIsRecordStarted; // +0x15
    BOOL mIsPreConnectFail; // +0x16
    id <IVOIPVideoDeviceDelegate> m_videoDeviceDelegate; // +0x18
    BOOL mIsHWEncEnable; // +0x20
    BOOL mIsHWEncUsing; // +0x21
    unsigned int muiHWDecExceptionMask; // +0x24
    int mHWErrorEncFrmCount; // +0x28
    BOOL mIsHWDecEnable; // +0x2c
    BOOL mIsHWDecUsing; // +0x2d
    int mHWErrorDecFrmCount; // +0x30
    BOOL mIReqFlag; // +0x34
    BOOL mIsGetRemoteHW; // +0x35
    BOOL mIsStopHWEnc; // +0x36
    int mPrevFrmType; // +0x38
    int mHWBR; // +0x3c
    int mHWIGap; // +0x40
    int mHWFps; // +0x44
    int mHWWidth; // +0x48
    int mHWHeight; // +0x4c
    char * mHWYUVbuffer; // +0x50
    char * mCameraBuf; // +0x58
    unsigned long long mHWYUVLength; // +0x60
    __CVBuffer * mPixelBufferDS; // +0x68
    unsigned int mLastNetType; // +0x70
    BOOL m_usingFrontCameraLastFrame; // +0x74
    BOOL mSendInviteStatus; // +0x75
    BOOL mIsVideoInited; // +0x76
    BOOL mHasAccept; // +0x77
    BOOL mNeedHeartBeat; // +0x78
    BOOL mFromFaceAuth; // +0x79
    BOOL mFromJSAPI; // +0x7a
    BOOL _mIsShouldSendSPS; // +0x7b
    BOOL _bForceKeyFrame; // +0x7c
    unsigned int mCaptureFrames; // +0x80
    int send_fps; // +0x84
    int recv_fps; // +0x88
    int cap_fps; // +0x8c
    int recv_kbps; // +0x90
    int send_kbps; // +0x94
    int mVTEncStatus; // +0x98
    int mVTDecStatus; // +0x9c
    int mCntTryStartAudioDev; // +0xa0
    unsigned int m_cameraChangeToOrientationLastCount; // +0xa4
    int mDialUsedTime; // +0xa8
    int mChannelConnectedTime; // +0xac
    int mCallTime; // +0xb0
    int mCancelInviteTime; // +0xb4
    int mAnswerTime; // +0xb8
    int AudioTsdfBeyond3G; // +0xbc
    int AudioTsdfEdge; // +0xc0
    int PassthroughQosAlgorithm; // +0xc4
    int FastPlayRepair; // +0xc8
    int bUseNewP2S; // +0xcc
    int bAudioDTX; // +0xd0
    int bEnableRmIOAndS3A; // +0xd4
    int iAudioEnableSpkec; // +0xd8
    int iAudioEnableXnoiseSup; // +0xdc
    int mHWCloseCmd; // +0xe0
    int mInitNetType; // +0xe4
    unsigned int mLastNetworkStatus; // +0xe8
    int exitAbnormalStatus; // +0xec
    int mOSType; // +0xf0
    int mMaxHWEncSize; // +0xf4
    int mMaxSWEncSize; // +0xf8
    unsigned int mNextInviteTimestamp; // +0xfc
    int callResultStatus; // +0x100
    unsigned int mNotifySeq; // +0x104
    unsigned int muiHWEncExceptionMask; // +0x108
    unsigned int mCalleeMemberId; // +0x10c
    unsigned int _mInviteId; // +0x110
    unsigned int _mVoIPType; // +0x114
    int _status; // +0x118
    unsigned int _mIsRemoteUserAbort; // +0x11c
    unsigned int _mIsUserAbort; // +0x120
    unsigned int _mMaxBitRateCS; // +0x124
    unsigned int _mMaxFPSCS; // +0x128
    unsigned int _mTimeCounter; // +0x12c
    int _mLeftHWEncFrms; // +0x130
    char * mPreviewBuf; // +0x138
    long long m_videoOrientation; // +0x140
    long long m_cameraOrientation; // +0x148
    long long m_cameraChangeToOrientation; // +0x150
    unsigned long long mSendInviteTime; // +0x158
    unsigned long long mRecvInviteTime; // +0x160
    unsigned long long mStartTalkingTime; // +0x168
    unsigned long long mRecvFirstAVDataPacketTime; // +0x170
    unsigned long long mRecvFirstVArqReqDataPacketTime; // +0x178
    unsigned long long mRecvFirstVArqRespDataPacketTime; // +0x180
    AVVideoDevice * mVideoDevice; // +0x188
    MMTimer * mVoipTimer; // +0x190
    MMTimer * mVoipCSCallingTimer; // +0x198
    NSArray * _mVoipCSAddrList; // +0x1a0
    NSData * _mLocalCapInfo; // +0x1a8
    NSData * _mRemoteCapInfo; // +0x1b0
    NSData * _mCallContext; // +0x1b8
    AUAudioDevice * _mAudioDevice; // +0x1c0
    CContact * _mContact; // +0x1c8
    VOIPVideoRender * _inputVideoRender; // +0x1d0
    VOIPVideoRender * _outputVideoRender; // +0x1d8
    VOIPDialData * _mDialData; // +0x1e0
    VOIPComponent * _mComponent; // +0x1e8
    NSRecursiveLock * _mAudioEncLock; // +0x1f0
    NSRecursiveLock * _mAudioDecLock; // +0x1f8
    NSRecursiveLock * _mAudioPlayLock; // +0x200
    NSRecursiveLock * _mVideoEncLock; // +0x208
    NSRecursiveLock * _mVideoP2SLock; // +0x210
    NSRecursiveLock * _mVideoDecLock; // +0x218
    NSRecursiveLock * _mVideoHWEncLock; // +0x220
    NSRecursiveLock * _mVideoHWDecLock; // +0x228
    NSRecursiveLock * _mVideoLocalRenderLock; // +0x230
    NSRecursiveLock * _mVideoRemoteRenderLock; // +0x238
    NSRecursiveLock * _inputVideoRenderLock; // +0x240
    NSRecursiveLock * _outputVideoRenderLock; // +0x248
    NSRecursiveLock * _mStartVideoLock; // +0x250
    NSRecursiveLock * _mStartAudioLock; // +0x258
    NSRecursiveLock * _mStartRecordLock; // +0x260
    CMMotionManager * _m_motionMgr; // +0x268
    OpaqueVTCompressionSession * _mVTCompressionSession; // +0x270
    OpaqueVTDecompressionSession * _mVTDecompressionSession; // +0x278
    opaqueCMFormatDescription * _mVTDecFormat; // +0x280
    id /* block */ _m_endEventBlock; // +0x288
    timeval mStartTalkTime; // +0x290
    DialReport_t _dialReport; // +0x2a0
}
- (unsigned int)getNetworkType;
- (void)SetCSReportData:(id *)arg1 voipCS3rdReport:(id *)arg2 channelReport:(id *)arg3 engineReport:(id *)arg4;
- (void)StartAudioData;
- (void)StartAudioDataInNewThread;
- (void)StartRecordAndPlayAudioForVoip;
- (void)StartVideoData;
- (int)ReInitHWEnc;
- (void)SendCloseHWEncCmd:(int)arg1;
- (int)GetHWEncWidth;
- (void)SetMVEInfo:(struct *)arg1;
- (void)StartCSEngine;
- (void)StopCSEngine;
- (void)audioDeviceNearEar:(id)arg1;
- (void)audioDeviceFarawayEar:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)setCameraPos:(long long)arg1;
- (void)updateCameraPosToFitDevice;
- (void)resetCameraDevice;
- (void)StartLocalVideo;
- (BOOL)isCameraFront;
- (void)FlipCamera;
- (void)SetMicroPhoneMute:(BOOL)arg1;
- (int)InitVoipCSChannel;
- (void)StartCSConnect;
- (void)StopCSConnect;
- (int)OnCSChannelEvent:(unsigned short)arg1 ErrNo:(int)arg2;
- (void)TalkBroken:(id)arg1;
- (void)ConnectFail:(id)arg1;
- (void)StartCSTalk;
- (void)StopCSTalk;
- (int)OnTransportChannelData:(int)arg1 pData:(void *)arg2 len:(int)arg3;
- (void)OnCSVoipNotify:(id)arg1;
- (void)DataNotify:(char *)arg1 len:(int)arg2 param:(void *)arg3;
- (void)DataNotify_Arq:(char *)arg1 len:(int)arg2 type:(unsigned char)arg3;
- (void)DataNotify_pp:(char *)arg1 len:(int)arg2 param:(short)arg3;
- (id)init;
- (void)dealloc;
- (void)SendVoipCSInviteReqBy:(id)arg1 appid:(id)arg2;
- (void)SendVoipCSHangupReqBy:(id)arg1 reason:(unsigned int)arg2;
- (void)SendVoipCSSyncReqBy:(unsigned int)arg1;
- (void)SendVoipCSHeartBeatReq;
- (void)SendVoipCSRedirectReq;
- (void)HandleVoipCSInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSHangupResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSHeartBeatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSRedirectResp:(id)arg1 Event:(unsigned int)arg2;
- (void)GetLocalCapInfoWithVoipType:(unsigned int)arg1;
- (void)VoipCSSyncWithRoomId:(unsigned long long)arg1 roomKey:(unsigned long long)arg2 syncSeq:(unsigned int)arg3 MemberId:(unsigned int)arg4 status:(unsigned int)arg5 substatus:(unsigned int)arg6 cap:(const void *)arg7 capLen:(unsigned long long)arg8;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)RealCall:(id)arg1 withCallType:(id)arg2 appid:(id)arg3;
- (void)AudioCall:(id)arg1 withCallType:(unsigned int)arg2 appid:(id)arg3;
- (void)VideoCall:(id)arg1 withCallType:(unsigned int)arg2 appid:(id)arg3;
- (void)Hangup:(unsigned int)arg1;
- (void)SetCallContext:(id)arg1;
- (unsigned long long)getRoomKey;
- (unsigned long long)getRoomId;
- (unsigned int)getRoomType;
- (unsigned int)getNotifySeq;
- (BOOL)getIsTalked;
- (void)onVideoSessionStartComplete;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)StartSession;
- (void)CancelCall:(int)arg1;
- (void)handleEnterBackground;
- (void)handleEnterForeground;
- (void)CalcNewDailUsedTime;
- (void)SetStatus:(int)arg1 andErrNo:(int)arg2;
- (void)setVideoDelegate:(id)arg1;
- (void)RenderTexture:(__CVBuffer *)arg1;
- (void)InfoNotify:(char *)arg1;
- (void)EventNotify:(long long)arg1 param:(int)arg2 type:(int)arg3;
- (int)DecFrmError;
- (void)SetHWEncBR:(int)arg1;
- (void)UpdateHWDecSession;
- (void)UpdateHWQosParam;
- (void)StopHWEnc;
- (void)StopHWDec;
- (void)TimerCheck;
- (void)StartHeartBeat;
- (void)StopHeartBeat;
- (void)StopSession;
- (void)StopSessionWithProtocolErr:(int)arg1;
- (void)videoDevice:(id)arg1 didOutputPixelBuffer:(__CVBuffer *)arg2;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5 rgbaTexture:(id)arg6 auxiliaryInfo:(id)arg7;
- (int)GetFrmType;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)BeginInterruption;
- (char *)mPreviewBuf;
- (void)setMPreviewBuf:(char *)arg1;
- (unsigned int)mCaptureFrames;
- (void)setMCaptureFrames:(unsigned int)arg1;
- (int)send_fps;
- (void)setSend_fps:(int)arg1;
- (int)recv_fps;
- (void)setRecv_fps:(int)arg1;
- (int)cap_fps;
- (void)setCap_fps:(int)arg1;
- (int)recv_kbps;
- (void)setRecv_kbps:(int)arg1;
- (int)send_kbps;
- (void)setSend_kbps:(int)arg1;
- (int)mVTEncStatus;
- (void)setMVTEncStatus:(int)arg1;
- (int)mVTDecStatus;
- (void)setMVTDecStatus:(int)arg1;
- (int)mCntTryStartAudioDev;
- (void)setMCntTryStartAudioDev:(int)arg1;
- (long long)m_videoOrientation;
- (void)setM_videoOrientation:(long long)arg1;
- (long long)m_cameraOrientation;
- (void)setM_cameraOrientation:(long long)arg1;
- (BOOL)m_usingFrontCameraLastFrame;
- (void)setM_usingFrontCameraLastFrame:(BOOL)arg1;
- (long long)m_cameraChangeToOrientation;
- (void)setM_cameraChangeToOrientation:(long long)arg1;
- (unsigned int)m_cameraChangeToOrientationLastCount;
- (void)setM_cameraChangeToOrientationLastCount:(unsigned int)arg1;
- (unsigned long long)mSendInviteTime;
- (void)setMSendInviteTime:(unsigned long long)arg1;
- (BOOL)mSendInviteStatus;
- (void)setMSendInviteStatus:(BOOL)arg1;
- (unsigned long long)mRecvInviteTime;
- (void)setMRecvInviteTime:(unsigned long long)arg1;
- (timeval)mStartTalkTime;
- (void)setMStartTalkTime:(timeval)arg1;
- (int)mDialUsedTime;
- (void)setMDialUsedTime:(int)arg1;
- (int)mChannelConnectedTime;
- (void)setMChannelConnectedTime:(int)arg1;
- (int)mCallTime;
- (void)setMCallTime:(int)arg1;
- (int)mCancelInviteTime;
- (void)setMCancelInviteTime:(int)arg1;
- (int)mAnswerTime;
- (void)setMAnswerTime:(int)arg1;
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
- (int)bEnableRmIOAndS3A;
- (void)setBEnableRmIOAndS3A:(int)arg1;
- (int)iAudioEnableSpkec;
- (void)setIAudioEnableSpkec:(int)arg1;
- (int)iAudioEnableXnoiseSup;
- (void)setIAudioEnableXnoiseSup:(int)arg1;
- (int)mHWCloseCmd;
- (void)setMHWCloseCmd:(int)arg1;
- (unsigned long long)mStartTalkingTime;
- (void)setMStartTalkingTime:(unsigned long long)arg1;
- (int)mInitNetType;
- (void)setMInitNetType:(int)arg1;
- (unsigned int)mLastNetworkStatus;
- (void)setMLastNetworkStatus:(unsigned int)arg1;
- (int)exitAbnormalStatus;
- (void)setExitAbnormalStatus:(int)arg1;
- (BOOL)mIsVideoInited;
- (void)setMIsVideoInited:(BOOL)arg1;
- (unsigned long long)mRecvFirstAVDataPacketTime;
- (void)setMRecvFirstAVDataPacketTime:(unsigned long long)arg1;
- (unsigned long long)mRecvFirstVArqReqDataPacketTime;
- (void)setMRecvFirstVArqReqDataPacketTime:(unsigned long long)arg1;
- (unsigned long long)mRecvFirstVArqRespDataPacketTime;
- (void)setMRecvFirstVArqRespDataPacketTime:(unsigned long long)arg1;
- (int)mOSType;
- (void)setMOSType:(int)arg1;
- (int)mMaxHWEncSize;
- (void)setMMaxHWEncSize:(int)arg1;
- (int)mMaxSWEncSize;
- (void)setMMaxSWEncSize:(int)arg1;
- (id)mVideoDevice;
- (void)setMVideoDevice:(id)arg1;
- (unsigned int)mNextInviteTimestamp;
- (void)setMNextInviteTimestamp:(unsigned int)arg1;
- (int)callResultStatus;
- (void)setCallResultStatus:(int)arg1;
- (id)mVoipTimer;
- (void)setMVoipTimer:(id)arg1;
- (id)mVoipCSCallingTimer;
- (void)setMVoipCSCallingTimer:(id)arg1;
- (BOOL)mHasAccept;
- (void)setMHasAccept:(BOOL)arg1;
- (unsigned int)mNotifySeq;
- (void)setMNotifySeq:(unsigned int)arg1;
- (unsigned int)muiHWEncExceptionMask;
- (void)setMuiHWEncExceptionMask:(unsigned int)arg1;
- (BOOL)mNeedHeartBeat;
- (void)setMNeedHeartBeat:(BOOL)arg1;
- (unsigned int)mCalleeMemberId;
- (void)setMCalleeMemberId:(unsigned int)arg1;
- (BOOL)mFromFaceAuth;
- (void)setMFromFaceAuth:(BOOL)arg1;
- (BOOL)mFromJSAPI;
- (void)setMFromJSAPI:(BOOL)arg1;
- (unsigned int)mInviteId;
- (void)setMInviteId:(unsigned int)arg1;
- (unsigned int)mVoIPType;
- (void)setMVoIPType:(unsigned int)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)mVoipCSAddrList;
- (void)setMVoipCSAddrList:(id)arg1;
- (id)mLocalCapInfo;
- (void)setMLocalCapInfo:(id)arg1;
- (id)mRemoteCapInfo;
- (void)setMRemoteCapInfo:(id)arg1;
- (id)mCallContext;
- (void)setMCallContext:(id)arg1;
- (id)mAudioDevice;
- (void)setMAudioDevice:(id)arg1;
- (id)mContact;
- (void)setMContact:(id)arg1;
- (id)inputVideoRender;
- (void)setInputVideoRender:(id)arg1;
- (id)outputVideoRender;
- (void)setOutputVideoRender:(id)arg1;
- (id)mDialData;
- (void)setMDialData:(id)arg1;
- (id)mComponent;
- (void)setMComponent:(id)arg1;
- (unsigned int)mIsRemoteUserAbort;
- (void)setMIsRemoteUserAbort:(unsigned int)arg1;
- (unsigned int)mIsUserAbort;
- (void)setMIsUserAbort:(unsigned int)arg1;
- (DialReport_t)dialReport;
- (void)setDialReport:(DialReport_t)arg1;
- (id)mAudioEncLock;
- (void)setMAudioEncLock:(id)arg1;
- (id)mAudioDecLock;
- (void)setMAudioDecLock:(id)arg1;
- (id)mAudioPlayLock;
- (void)setMAudioPlayLock:(id)arg1;
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
- (id)inputVideoRenderLock;
- (void)setInputVideoRenderLock:(id)arg1;
- (id)outputVideoRenderLock;
- (void)setOutputVideoRenderLock:(id)arg1;
- (id)mStartVideoLock;
- (void)setMStartVideoLock:(id)arg1;
- (id)mStartAudioLock;
- (void)setMStartAudioLock:(id)arg1;
- (id)mStartRecordLock;
- (void)setMStartRecordLock:(id)arg1;
- (id)m_motionMgr;
- (void)setM_motionMgr:(id)arg1;
- (unsigned int)mMaxBitRateCS;
- (void)setMMaxBitRateCS:(unsigned int)arg1;
- (unsigned int)mMaxFPSCS;
- (void)setMMaxFPSCS:(unsigned int)arg1;
- (unsigned int)mTimeCounter;
- (void)setMTimeCounter:(unsigned int)arg1;
- (OpaqueVTCompressionSession *)mVTCompressionSession;
- (void)setMVTCompressionSession:(OpaqueVTCompressionSession *)arg1;
- (OpaqueVTDecompressionSession *)mVTDecompressionSession;
- (void)setMVTDecompressionSession:(OpaqueVTDecompressionSession *)arg1;
- (opaqueCMFormatDescription *)mVTDecFormat;
- (void)setMVTDecFormat:(opaqueCMFormatDescription *)arg1;
- (BOOL)mIsShouldSendSPS;
- (void)setMIsShouldSendSPS:(BOOL)arg1;
- (int)mLeftHWEncFrms;
- (void)setMLeftHWEncFrms:(int)arg1;
- (BOOL)bForceKeyFrame;
- (void)setBForceKeyFrame:(BOOL)arg1;
- (id /* block */)m_endEventBlock;
- (void)setM_endEventBlock:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
