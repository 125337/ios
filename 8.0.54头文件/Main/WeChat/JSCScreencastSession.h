@interface JSCScreencastSession : NSObject
{
    JSCTarget * _target; // +0x8
    int _frameId; // +0x10
    vector<bool, std::allocator<bool>> _framesAcked; // +0x18
    int _frameInterval; // +0x30
    NSString * _format; // +0x38
    int _quality; // +0x40
    int _maxWidth; // +0x44
    int _maxHeight; // +0x48
    NSTimer * _timerCookie; // +0x50
    int _deviceWidth; // +0x58
    int _deviceHeight; // +0x5c
    int _offsetTop; // +0x60
    int _pageScaleFactor; // +0x64
    int _scrollOffsetX; // +0x68
    int _scrollOffsetY; // +0x6c
}
- (id)initWithTarget:(id)arg1 format:(id)arg2 quality:(int)arg3 maxWidth:(int)arg4 maxHeight:(int)arg5;
- (void)dispose;
- (void)start;
- (void)stop;
- (void)ackFrame:(int)arg1;
- (void)recordingLoop;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

