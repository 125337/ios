@interface WCCanvasLongPressCoverView : UIView <WCCanvasImageLoaderObserver>
{
    double _duration; // +0x8
    long long _spriteType; // +0x10
    long long _spriteSizeType; // +0x18
    NSString * _spriteImageUrl; // +0x20
    UIImage * _spriteImage; // +0x28
    NSMutableArray * _spriteImages; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 duration:(double)arg2 spriteType:(long long)arg3 spriteSizeType:(long long)arg4 spriteImageUrl:(id)arg5;
- (void)dealloc;
- (void)setSpriteImage:(id)arg1;
- (void)generateSpriteImages;
- (void)beginSpriteAnimation;
- (void)beginSpriteAnimationForVerticalMovingFromTop:(BOOL)arg1;
- (void)beginSpriteAnimationForSpin;
- (void)beginSpriteAnimationForHorizontalMoving;
- (unsigned int)generateSpriteCountForDensity;
- (unsigned int)generateRandomNumFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)generateRandomCenterForView:(id)arg1;
- (id)generateDelayArrayWithCapacity:(unsigned long long)arg1;
- (CGRect)fetchCoreFrameForView:(id)arg1;
- (id)fetchImageForUrl:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (long long)spriteType;
- (void)setSpriteType:(long long)arg1;
- (long long)spriteSizeType;
- (void)setSpriteSizeType:(long long)arg1;
- (id)spriteImageUrl;
- (void)setSpriteImageUrl:(id)arg1;
- (id)spriteImage;
- (id)spriteImages;
- (void)setSpriteImages:(id)arg1;
- (void).cxx_destruct;
@end

