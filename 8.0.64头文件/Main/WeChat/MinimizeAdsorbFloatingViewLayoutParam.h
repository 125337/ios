@interface MinimizeAdsorbFloatingViewLayoutParam : NSObject
{
    BOOL _animated; // +0x8
    unsigned long long _positionType; // +0x10
    unsigned long long _contentType; // +0x18
    double _duration; // +0x20
    CGSize _outerContentSize; // +0x28
    UIEdgeInsets _safeAreaInsets; // +0x38
}
+ (id)genLayoutParamWithPositionType:(unsigned long long)arg1 contentType:(unsigned long long)arg2 outerContentSize:(CGSize)arg3 safeAreaInsets:(UIEdgeInsets)arg4 animated:(BOOL)arg5 duration:(double)arg6;
- (unsigned long long)positionType;
- (void)setPositionType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (CGSize)outerContentSize;
- (void)setOuterContentSize:(CGSize)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (UIEdgeInsets)safeAreaInsets;
- (void)setSafeAreaInsets:(UIEdgeInsets)arg1;
@end
