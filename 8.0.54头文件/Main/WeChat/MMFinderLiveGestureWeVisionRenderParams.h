@interface MMFinderLiveGestureWeVisionRenderParams : NSObject
{
    NSString * _gestureId; // +0x8
    NSString * _instanceId; // +0x10
    double _translationX; // +0x18
    double _translationY; // +0x20
    double _rotation; // +0x28
    double _scale; // +0x30
}
- (id)description;
- (id)gestureId;
- (void)setGestureId:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (double)translationX;
- (void)setTranslationX:(double)arg1;
- (double)translationY;
- (void)setTranslationY:(double)arg1;
- (double)rotation;
- (void)setRotation:(double)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (void).cxx_destruct;
@end

