@interface MMLiveCameraCastingAdapter : MMLiveCaptureAdapter <MMConfSDKVideoHWencDelegate>
{
    MMConfSDKVideoHWenc * _hwEncoder; // +0x8
    unsigned short _frameCnt; // +0x10
    struct _localDataHeader; // +0x12
    double _lastLogTime; // +0x20
    unsigned long long _statsticTotalBytes; // +0x28
    unsigned int _statsticToatlFrmCnt; // +0x30
    int _targetBitrate; // +0x34
    int _bitrateUpLimiter; // +0x38
    int _bitrateDownLimiter; // +0x3c
    int _currentBitrate; // +0x40
    BOOL _shouldResetBitrate; // +0x44
    id <MMFinderLiveTaskCameraCastingDelegate> _castingDelegate; // +0x48
}
+ (id)convertAVCCToAnnexB:(id)arg1;
- (void)initEncoderIfNeeded;
- (id)init;
- (void)dealloc;
- (id)initWithEffectManager:(id)arg1;
- (void)sendData:(id)arg1;
- (id)MuxVideoDataWrap:(id)arg1;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (int)gotEncodedData:(id)arg1 isKeyFrame:(BOOL)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(BOOL)arg5;
- (int)gotXpsData:(id)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(BOOL)arg4;
- (id)castingDelegate;
- (void)setCastingDelegate:(id)arg1;
- (void).cxx_destruct;
@end
