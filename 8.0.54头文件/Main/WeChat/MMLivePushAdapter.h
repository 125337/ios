@interface MMLivePushAdapter : MMLiveCaptureAdapter
{
    BOOL _isHEVCUsing; // +0x8
    BOOL _forceHEVCMixing; // +0x9
    BOOL _isInRoom; // +0xa
    BOOL _isBlackStreamEnabled; // +0xb
    BOOL _isAudioRoomMode; // +0xc
    BOOL _isAudioMuteAll; // +0xd
    BOOL _isVideoMuteAll; // +0xe
    unsigned int _videoGop; // +0x10
    id <MMLivePushAdapterDelegate> _pushDelegate; // +0x18
    TRTCCloud * _trtcInstance; // +0x20
    unsigned long long _currentVideoSourceType; // +0x28
    UIView * _videoView; // +0x30
    UIView * _viewForCapturing; // +0x38
    MMLiveVideoEncParam * _videoEncConfigForAnchorCloudMixture; // +0x40
    MMLiveAudio3AParamConfig * _audio3AParam; // +0x48
    MMLivePushParams * _pushParams; // +0x50
    NSString * _pushUrl; // +0x58
    MMLivePushMediaConfig * _mediaConfig; // +0x60
    NSMutableDictionary * _allRemoteUsersDict; // +0x68
    NSMutableSet * _allRemoteUsersSet; // +0x70
}
- (id)initWithParams:(id)arg1 effectManager:(id)arg2 andLiveCapture:(id)arg3;
- (void)initDefaultData;
- (void)updateVideoSourceType:(unsigned long long)arg1 isVideoEnabled:(BOOL)arg2 isAudioEnabled:(BOOL)arg3 andIsFrontCamera:(BOOL)arg4;
- (void)enterRoom;
- (void)exitRoom;
- (void)updatePushURL:(id)arg1;
- (void)switchCamera;
- (void)switchCameraWithCompletionHandler:(id /* block */)arg1;
- (void)setVideoEncoderParam:(id)arg1;
- (void)setVideoEncoderParam:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)setVideoEncoderParamWithWidth:(unsigned int)arg1 andHeight:(unsigned int)arg2;
- (void)setCustomVideoEncoderParam:(int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 fps:(int)arg4 bitrate:(int)arg5 minbitrate:(int)arg6 gop:(int)arg7;
- (void)setHEVCUsing:(BOOL)arg1 forceMixing:(BOOL)arg2;
- (void)updateHevcEncodeEnabled:(BOOL)arg1;
- (void)setVideoEncGop:(unsigned int)arg1;
- (void)setVideoEnabled:(BOOL)arg1;
- (void)setVideoEnabled:(BOOL)arg1 destroyRender:(BOOL)arg2;
- (void)setVideoMuted:(BOOL)arg1;
- (void)setResolutionMode:(long long)arg1;
- (void)switchVideoSourceTo:(unsigned long long)arg1;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)enableBlackStream:(BOOL)arg1;
- (BOOL)isVideoEnabled;
- (void)setVideoToolboxSetting:(id)arg1;
- (int)videoEncodeFps;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setAudioMuted:(BOOL)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setVolumeEvaluationEnabled:(BOOL)arg1;
- (void)setVadDetectionEnabled:(BOOL)arg1;
- (void)updateWXAudio3AParam:(BOOL)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1 withVadDetection:(BOOL)arg2;
- (void)setStereoDirection:(BOOL)arg1;
- (void)setAudioCaptureVolume:(long long)arg1;
- (BOOL)isAudioEnabled;
- (id)mutableRemoteUsersDict;
- (id)remoteUsersList;
- (id)remoteUserIdList;
- (void)addRemoteUser:(id)arg1 withRoomId:(id)arg2;
- (void)addOrUpdateRemoteUser:(id)arg1 withRoomId:(id)arg2;
- (void)removeRemoteUser:(id)arg1;
- (BOOL)isRemoteUserInRoom:(id)arg1;
- (void)updateRemoteUser:(id)arg1 isVideoEnabled:(BOOL)arg2;
- (void)updateRemoteUser:(id)arg1 isAudioEnabled:(BOOL)arg2;
- (void)updateRemoteUser:(id)arg1 isVideoMuted:(BOOL)arg2;
- (void)updateRemoteUser:(id)arg1 isAudioMuted:(BOOL)arg2;
- (void)updateAllRemoteUsersVideoMuted:(BOOL)arg1;
- (void)updateAllRemoteUsersAudioMuted:(BOOL)arg1;
- (void)updateRemoteUser:(id)arg1 fillMode:(long long)arg2;
- (long long)getRemoteUserFillMode:(id)arg1;
- (void)updateRemoteUser:(id)arg1 rotation:(long long)arg2;
- (void)updateRemoteUser:(id)arg1 volume:(long long)arg2;
- (id)getRemoteUserConfig:(id)arg1;
- (void)startRemoteVideo:(id)arg1 withView:(id)arg2;
- (void)stopRemoteVideo:(id)arg1;
- (void)notifyRemoteUsersChanged;
- (void)notifyRemoteUsersVideoSettingChanged;
- (void)updateMixTranscodingConfig:(id)arg1;
- (BOOL)sendCustomMessage:(id)arg1;
- (BOOL)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (void)sendSEIMessageData:(id)arg1;
- (void)playMusic:(int)arg1 path:(id)arg2 publish:(BOOL)arg3 startBlock:(id /* block */)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)pausePlayMusic:(int)arg1;
- (void)resumePlayMusic:(int)arg1;
- (void)stopPlayMusic:(int)arg1;
- (BOOL)isLiveAudience;
- (void)startLocalAudio;
- (void)stopLocalAudio;
- (void)startLocalVideo;
- (void)stopLocalVideo;
- (void)stopLocalVideoAndDestoryRenderView:(BOOL)arg1;
- (id)setExperimentConfig:(id)arg1 params:(id)arg2;
- (id)jsonStringFromDict:(id)arg1;
- (id)jsonDictFromString:(id)arg1;
- (id)pushDelegate;
- (void)setPushDelegate:(id)arg1;
- (id)trtcInstance;
- (void)setTrtcInstance:(id)arg1;
- (unsigned long long)currentVideoSourceType;
- (void)setCurrentVideoSourceType:(unsigned long long)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (id)viewForCapturing;
- (void)setViewForCapturing:(id)arg1;
- (BOOL)isHEVCUsing;
- (void)setIsHEVCUsing:(BOOL)arg1;
- (BOOL)forceHEVCMixing;
- (void)setForceHEVCMixing:(BOOL)arg1;
- (id)videoEncConfigForAnchorCloudMixture;
- (void)setVideoEncConfigForAnchorCloudMixture:(id)arg1;
- (BOOL)isInRoom;
- (void)setIsInRoom:(BOOL)arg1;
- (unsigned int)videoGop;
- (void)setVideoGop:(unsigned int)arg1;
- (id)audio3AParam;
- (void)setAudio3AParam:(id)arg1;
- (BOOL)isBlackStreamEnabled;
- (void)setIsBlackStreamEnabled:(BOOL)arg1;
- (BOOL)isAudioRoomMode;
- (void)setIsAudioRoomMode:(BOOL)arg1;
- (BOOL)isAudioMuteAll;
- (void)setIsAudioMuteAll:(BOOL)arg1;
- (BOOL)isVideoMuteAll;
- (void)setIsVideoMuteAll:(BOOL)arg1;
- (id)pushParams;
- (void)setPushParams:(id)arg1;
- (id)pushUrl;
- (void)setPushUrl:(id)arg1;
- (id)mediaConfig;
- (void)setMediaConfig:(id)arg1;
- (id)allRemoteUsersDict;
- (void)setAllRemoteUsersDict:(id)arg1;
- (id)allRemoteUsersSet;
- (void)setAllRemoteUsersSet:(id)arg1;
- (void).cxx_destruct;
@end

