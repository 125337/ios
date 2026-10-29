@interface VideoWriter : NSObject
{
    Ptr<cv::VideoWriter> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::VideoWriter>)arg1;
+ (int)fourcc:(char)arg1 c2:(char)arg2 c3:(char)arg3 c4:(char)arg4;
- (id)initWithNativePtr:(Ptr<cv::VideoWriter>)arg1;
- (id)init;
- (id)initWithFilename:(id)arg1 fourcc:(int)arg2 fps:(double)arg3 frameSize:(id)arg4 isColor:(BOOL)arg5;
- (id)initWithFilename:(id)arg1 fourcc:(int)arg2 fps:(double)arg3 frameSize:(id)arg4;
- (id)initWithFilename:(id)arg1 apiPreference:(int)arg2 fourcc:(int)arg3 fps:(double)arg4 frameSize:(id)arg5 isColor:(BOOL)arg6;
- (id)initWithFilename:(id)arg1 apiPreference:(int)arg2 fourcc:(int)arg3 fps:(double)arg4 frameSize:(id)arg5;
- (id)initWithFilename:(id)arg1 fourcc:(int)arg2 fps:(double)arg3 frameSize:(id)arg4 params:(id)arg5;
- (id)initWithFilename:(id)arg1 apiPreference:(int)arg2 fourcc:(int)arg3 fps:(double)arg4 frameSize:(id)arg5 params:(id)arg6;
- (BOOL)open:(id)arg1 fourcc:(int)arg2 fps:(double)arg3 frameSize:(id)arg4 isColor:(BOOL)arg5;
- (BOOL)open:(id)arg1 fourcc:(int)arg2 fps:(double)arg3 frameSize:(id)arg4;
- (BOOL)open:(id)arg1 apiPreference:(int)arg2 fourcc:(int)arg3 fps:(double)arg4 frameSize:(id)arg5 isColor:(BOOL)arg6;
- (BOOL)open:(id)arg1 apiPreference:(int)arg2 fourcc:(int)arg3 fps:(double)arg4 frameSize:(id)arg5;
- (BOOL)open:(id)arg1 fourcc:(int)arg2 fps:(double)arg3 frameSize:(id)arg4 params:(id)arg5;
- (BOOL)open:(id)arg1 apiPreference:(int)arg2 fourcc:(int)arg3 fps:(double)arg4 frameSize:(id)arg5 params:(id)arg6;
- (BOOL)isOpened;
- (void)write:(id)arg1;
- (BOOL)set:(int)arg1 value:(double)arg2;
- (double)get:(int)arg1;
- (id)getBackendName;
- (Ptr<cv::VideoWriter>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
