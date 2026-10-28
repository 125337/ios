@interface ChatbotVideoUnit : NSObject <AVVideoDeviceDelegate, AVVideoDeviceSessionDelegate, AVVideoDataSource, MMConfSDKVideoHWencDelegate>
{
    char * cameraBuf; // +0x8
    int cameraBufSize; // +0x10
    int _capW; // +0x14
    int _capH; // +0x18
    int[1] _encStatusList; // +0x1c
    MMConfSDKVideoHWenc *[1] _hwEncoderList; // +0x20
    BOOL[1] _isHW2SW_encode; // +0x28
    int _hwEncStatus; // +0x2c
    __CVBuffer * _videoPixelBuffer; // +0x30
    int _lastVideoPlaneWidth; // +0x38
    int _lastVideoPlaneHeight; // +0x3c
    BOOL _isSWEncUsing; // +0x40
    BOOL _isFrontCamera; // +0x41
    unsigned int _scene; // +0x44
    AVVideoDevice * _m_videoDevice; // +0x48
    id <ChatbotVideoUnitDelegate> _delegate; // +0x50
    NSRecursiveLock * _m_videoEncLock; // +0x58
    unsigned long long _hasPushFrameCount; // +0x60
    unsigned long long _photoCount; // +0x68
    unsigned long long _photoTimeStamp; // +0x70
}
+ (id)GetFrameIntoImage:(char *)arg1 isFrontCamera:(BOOL)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)startVideoDevice:(unsigned int)arg1;
- (void)stopVideoDevice;
- (void)releaseResource;
- (void)doQosCtrl:(unsigned int)arg1 height:(unsigned int)arg2;
- (int)sendVideoData:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (unsigned int)changeOrientationIntoRemoteRotateDegree;
- (id)getSEIDataForPhoto;
- (void)onFlipCamera;
- (double)maxZoomFactor;
- (void)zoomFactor:(double)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(BOOL)arg3;
- (void)videoDevice:(id)arg1 didChangeRotation:(int)arg2;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)onVideoSessionRecvFirstFrame;
- (void)videoDevice:(id)arg1 didOutputPixelBuffer:(__CVBuffer *)arg2;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5 rgbaTexture:(id)arg6 auxiliaryInfo:(id)arg7;
- (int)GetFrmType;
- (void)didPushFrame;
- (int)gotEncodedData:(id)arg1 isKeyFrame:(BOOL)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(BOOL)arg5;
- (int)gotXpsData:(id)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(BOOL)arg4;
- (int)gotEncodeErrCode:(int)arg1 encIdx:(int)arg2;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (id)m_videoDevice;
- (void)setM_videoDevice:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_videoEncLock;
- (void)setM_videoEncLock:(id)arg1;
- (unsigned long long)hasPushFrameCount;
- (void)setHasPushFrameCount:(unsigned long long)arg1;
- (unsigned long long)photoCount;
- (void)setPhotoCount:(unsigned long long)arg1;
- (unsigned long long)photoTimeStamp;
- (void)setPhotoTimeStamp:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
