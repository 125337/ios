@interface FlutterDrawable : NSObject <FlutterMetalDrawable>
{
    FlutterTexture * _texture; // +0x8
    FlutterMetalLayer * _layer; // +0x10
    unsigned long long _drawableId; // +0x18
    BOOL _presented; // +0x20
}
- (id)initWithTexture:(id)arg1 layer:(id)arg2 drawableId:(unsigned long long)arg3;
- (id)texture;
- (id)layer;
- (unsigned long long)drawableID;
- (double)presentedTime;
- (void)present;
- (void)dealloc;
- (void)addPresentedHandler:(id /* block */)arg1;
- (void)presentAtTime:(double)arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)flutterPrepareForPresent:(id)arg1;
- (void).cxx_destruct;
@end

