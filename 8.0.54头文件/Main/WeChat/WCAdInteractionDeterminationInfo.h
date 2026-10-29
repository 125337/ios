@interface WCAdInteractionDeterminationInfo : NSObject <NSCoding>
{
    NSString * _determinationId; // +0x8
    unsigned long long _determinationType; // +0x10
    NSString * _resourceId; // +0x18
    double _triggerPercentage; // +0x20
    CGRect _positionArea; // +0x28
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)canBeClicked;
- (BOOL)canBeInteractived;
- (id)determinationId;
- (void)setDeterminationId:(id)arg1;
- (unsigned long long)determinationType;
- (void)setDeterminationType:(unsigned long long)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (CGRect)positionArea;
- (void)setPositionArea:(CGRect)arg1;
- (double)triggerPercentage;
- (void)setTriggerPercentage:(double)arg1;
- (void).cxx_destruct;
@end

