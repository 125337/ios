@interface MJShootComposingImageInputDetector : NSObject
{
    unique_ptr<FaceKit::Face3DTracker, std::default_delete<FaceKit::Face3DTracker>> _face3DTracker; // +0x8
    unique_ptr<wevision::XFace, std::default_delete<wevision::XFace>> _xFace; // +0x10
    FaceRequest _faceRequest; // +0x18
    BOOL _isReady; // +0x60
    id <MJShootComposingImageInputDetectorDelegate> _delegate; // +0x68
}
- (void)dealloc;
- (void)prepareDetector;
- (void)processWithSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)processWithImage:(id)arg1;
- (void)destroy;
- (BOOL)setupFace3DTracker;
- (void)configureFaceRequest;
- (id)processImage:(void *)arg1 width:(int)arg2 height:(int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isReady;
- (void)setIsReady:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
