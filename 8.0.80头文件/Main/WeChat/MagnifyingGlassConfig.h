@interface MagnifyingGlassConfig : NSObject
{
    BOOL _hiddenSearchHeader; // +0x8
    unsigned long long _scene; // +0x10
    double _halfPageHeightRatio; // +0x18
}
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (double)halfPageHeightRatio;
- (void)setHalfPageHeightRatio:(double)arg1;
- (BOOL)hiddenSearchHeader;
- (void)setHiddenSearchHeader:(BOOL)arg1;
@end
