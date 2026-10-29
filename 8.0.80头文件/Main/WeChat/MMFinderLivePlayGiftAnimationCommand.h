@interface MMFinderLivePlayGiftAnimationCommand : NSObject
{
    unsigned int _triggerType; // +0x8
    NSString * _correlationId; // +0x10
    MMFinderLivePlayGiftAnimationCommandItem * _portraitAnimation; // +0x18
    MMFinderLivePlayGiftAnimationCommandItem * _landscapeAnimation; // +0x20
    NSData * _businessBuff; // +0x28
}
+ (id)giftAnimationPlayCommandWithBackendMessage:(id)arg1;
- (id)init;
- (id)initWithPortraitAnimation:(id)arg1 portraitAnimationExtension:(id)arg2 landscapeAnimation:(id)arg3 landscapeAnimationExtension:(id)arg4 triggerType:(unsigned int)arg5 businessBuffer:(id)arg6;
- (id)correlationId;
- (void)setCorrelationId:(id)arg1;
- (id)portraitAnimation;
- (void)setPortraitAnimation:(id)arg1;
- (id)landscapeAnimation;
- (void)setLandscapeAnimation:(id)arg1;
- (unsigned int)triggerType;
- (void)setTriggerType:(unsigned int)arg1;
- (id)businessBuff;
- (void)setBusinessBuff:(id)arg1;
- (void).cxx_destruct;
@end
