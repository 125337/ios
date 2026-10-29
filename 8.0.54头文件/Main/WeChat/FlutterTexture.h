@interface FlutterTexture : NSObject
{
    id <MTLTexture> _texture; // +0x8
    IOSurface * _surface; // +0x10
    double _presentedTime; // +0x18
    BOOL waitingForCompletion; // +0x20
}
- (id)initWithTexture:(id)arg1 surface:(id)arg2;
- (id)texture;
- (id)surface;
- (double)presentedTime;
- (void)setPresentedTime:(double)arg1;
- (BOOL)waitingForCompletion;
- (void)setWaitingForCompletion:(BOOL)arg1;
- (void).cxx_destruct;
@end

