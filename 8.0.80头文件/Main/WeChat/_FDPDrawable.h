@interface _FDPDrawable : NSObject <FlutterMetalDrawable>
{
    unsigned long long _drawableId; // +0x8
    FlutterMetalDrawableProvider * _provider; // +0x10
    BOOL _presented; // +0x18
    _FDPTexture * _wrapper; // +0x20
}
- (id)initWithTexture:(id)arg1 provider:(id)arg2 drawableId:(unsigned long long)arg3;
- (id)texture;
- (id)layer;
- (unsigned long long)drawableID;
- (double)presentedTime;
- (void)present;
- (void)addPresentedHandler:(id /* block */)arg1;
- (void)presentAtTime:(double)arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)flutterPrepareForPresent:(id)arg1;
- (id)wrapper;
- (BOOL)presented;
- (void)setPresented:(BOOL)arg1;
- (void).cxx_destruct;
@end
