@interface MMLiveVideoFrameWidgetObj : NSObject
{
    NSString * _instanceId; // +0x8
    UIImage * _contentImage; // +0x10
    CGPoint _normalizedCenter; // +0x18
    CGPoint _normalizedAnchorPoint; // +0x28
    struct _transformDescription; // +0x38
}
- (id)initWithInstanceId:(id)arg1;
- (BOOL)isValid;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (CGPoint)normalizedCenter;
- (void)setNormalizedCenter:(CGPoint)arg1;
- (CGPoint)normalizedAnchorPoint;
- (void)setNormalizedAnchorPoint:(CGPoint)arg1;
- (struct)transformDescription;
- (void)setTransformDescription:(struct)arg1;
- (id)contentImage;
- (void)setContentImage:(id)arg1;
- (void).cxx_destruct;
@end
