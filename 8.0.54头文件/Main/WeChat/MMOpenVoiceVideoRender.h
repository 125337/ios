@interface MMOpenVoiceVideoRender : MMOpenVoiceVideoBase
{
    unsigned int frameCount; // +0x8
    BOOL _notifyFirstFrame; // +0xc
    int _objectFit; // +0x10
    int _rotation; // +0x14
    NSObject<OS_dispatch_queue> * _queue; // +0x18
    OpenVoiceVideoRender * _videoRender; // +0x20
    long long _lastOrientation; // +0x28
}
- (id)init;
- (void)dealloc;
- (int)initView:(int)arg1 openId:(id)arg2 dic:(id)arg3 queue:(id)arg4;
- (int)updateView:(int)arg1 dic:(id)arg2;
- (void)fpsTimerCheck;
- (void)render:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 rotation:(int)arg5;
- (__CVBuffer *)copyDataFromBuffer:(const char *)arg1 toYUVPixelBufferWithWidth:(unsigned long long)arg2 Height:(unsigned long long)arg3;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)videoRender;
- (void)setVideoRender:(id)arg1;
- (int)objectFit;
- (void)setObjectFit:(int)arg1;
- (int)rotation;
- (void)setRotation:(int)arg1;
- (BOOL)notifyFirstFrame;
- (void)setNotifyFirstFrame:(BOOL)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

