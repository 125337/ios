@interface WANativeViewPointerEvent : NSObject
{
    long long _viewId; // +0x8
    long long _type; // +0x10
    long long _embedderId; // +0x18
    long long _timeStampMicrosecond; // +0x20
    CGPoint _position; // +0x28
}
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)embedderId;
- (void)setEmbedderId:(long long)arg1;
- (long long)timeStampMicrosecond;
- (void)setTimeStampMicrosecond:(long long)arg1;
- (CGPoint)position;
- (void)setPosition:(CGPoint)arg1;
@end

