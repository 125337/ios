@interface _FDPTexture : NSObject
{
    BOOL _waitingForCompletion; // +0x8
    id <MTLTexture> _texture; // +0x10
    IOSurface * _surface; // +0x18
    double _presentedTime; // +0x20
}
- (id)initWithTexture:(id)arg1 surface:(id)arg2;
- (id)texture;
- (id)surface;
- (BOOL)waitingForCompletion;
- (void)setWaitingForCompletion:(BOOL)arg1;
- (double)presentedTime;
- (void)setPresentedTime:(double)arg1;
- (void).cxx_destruct;
@end
