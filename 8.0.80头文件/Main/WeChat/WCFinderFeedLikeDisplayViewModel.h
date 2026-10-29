@interface WCFinderFeedLikeDisplayViewModel : NSObject
{
    BOOL _isLikeAnimating; // +0x8
    BOOL _hasShowCarousel; // +0x9
    BOOL _isLikedByCurrentClick; // +0xa
    BOOL _isUnlikedByCurrentClick; // +0xb
    unsigned long long _likeRandomValue; // +0x10
    unsigned long long _comboCount; // +0x18
}
- (void)setIsLikeAnimating:(BOOL)arg1;
- (BOOL)isLikeAnimating;
- (unsigned long long)likeRandomValue;
- (void)setLikeRandomValue:(unsigned long long)arg1;
- (unsigned long long)comboCount;
- (void)setComboCount:(unsigned long long)arg1;
- (BOOL)hasShowCarousel;
- (void)setHasShowCarousel:(BOOL)arg1;
- (BOOL)isLikedByCurrentClick;
- (void)setIsLikedByCurrentClick:(BOOL)arg1;
- (BOOL)isUnlikedByCurrentClick;
- (void)setIsUnlikedByCurrentClick:(BOOL)arg1;
@end
