@interface MMAnimatedImagePlayConfig : NSObject <NSCopying>
{
    BOOL _needCache; // +0x8
    BOOL _asyncLoadFirstFrame; // +0x9
    unsigned int _animationRepeatCount; // +0xc
    double _maxCacheWidth; // +0x10
    unsigned long long _playMode; // +0x18
    unsigned long long _playEndBehavior; // +0x20
    id <MMAnimatedImagePlayObserver> _observer; // +0x28
}
+ (id)defaultConfig;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)needCache;
- (void)setNeedCache:(BOOL)arg1;
- (double)maxCacheWidth;
- (void)setMaxCacheWidth:(double)arg1;
- (BOOL)asyncLoadFirstFrame;
- (void)setAsyncLoadFirstFrame:(BOOL)arg1;
- (unsigned long long)playMode;
- (void)setPlayMode:(unsigned long long)arg1;
- (unsigned int)animationRepeatCount;
- (void)setAnimationRepeatCount:(unsigned int)arg1;
- (unsigned long long)playEndBehavior;
- (void)setPlayEndBehavior:(unsigned long long)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void).cxx_destruct;
@end
