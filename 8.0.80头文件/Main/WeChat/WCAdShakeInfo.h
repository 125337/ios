@interface WCAdShakeInfo : NSObject <NSCoding>
{
    WCAdInteractionCoverInfo * _coverInfo; // +0x8
    double _triggerGForce; // +0x10
    NSString * _simpleTransitionAnimationUrl; // +0x18
    NSString * _simpleTransitionAnimationMD5; // +0x20
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isSimpleAnimationInfoValid;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (double)triggerGForce;
- (void)setTriggerGForce:(double)arg1;
- (id)simpleTransitionAnimationUrl;
- (void)setSimpleTransitionAnimationUrl:(id)arg1;
- (id)simpleTransitionAnimationMD5;
- (void)setSimpleTransitionAnimationMD5:(id)arg1;
- (void).cxx_destruct;
@end
