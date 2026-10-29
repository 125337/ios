@interface MMFinderLiveGestureHandDetectionLuaMessageItemModel : NSObject
{
    long long _luaObjectId; // +0x8
    unsigned long long _unixEpochTimestamp; // +0x10
    NSString * _gestureId; // +0x18
    NSString * _instanceId; // +0x20
    double _translationX; // +0x28
    double _translationY; // +0x30
    double _rotation; // +0x38
    double _scale; // +0x40
}
- (long long)luaObjectId;
- (void)setLuaObjectId:(long long)arg1;
- (unsigned long long)unixEpochTimestamp;
- (void)setUnixEpochTimestamp:(unsigned long long)arg1;
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

