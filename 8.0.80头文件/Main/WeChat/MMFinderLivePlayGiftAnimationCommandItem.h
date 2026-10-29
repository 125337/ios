@interface MMFinderLivePlayGiftAnimationCommandItem : NSObject
{
    MMFinderLivePlayGiftAnimationCommandResource * _animation; // +0x8
    MMFinderLivePlayGiftAnimationCommandResource * _soundEffect; // +0x10
    MMLiveHapticsPattern * _hapticsPattern; // +0x18
}
+ (id)itemWithAnimation:(id)arg1 extension:(id)arg2;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (id)soundEffect;
- (void)setSoundEffect:(id)arg1;
- (id)hapticsPattern;
- (void)setHapticsPattern:(id)arg1;
- (void).cxx_destruct;
@end
