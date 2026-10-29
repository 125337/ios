@interface MMLiveWevisionWidgetObj : NSObject <NSCopying>
{
    NSString * _instanceId; // +0x8
    UIImage * _contentImage; // +0x10
    CGPoint _normalizedAnchorPoint; // +0x18
    CGRect _normalizedFrame; // +0x28
    struct _transformDescription; // +0x48
}
+ (BOOL)isNormalizedAnchorPointValid:(CGPoint)arg1;
- (id)initWithInstanceId:(id)arg1;
- (BOOL)isValid;
- (void)setNormalizedAnchorPoint:(CGPoint)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)contentImage;
- (void)setContentImage:(id)arg1;
- (CGRect)normalizedFrame;
- (void)setNormalizedFrame:(CGRect)arg1;
- (CGPoint)normalizedAnchorPoint;
- (struct)transformDescription;
- (void)setTransformDescription:(struct)arg1;
- (void).cxx_destruct;
@end

