@interface MMFinderLiveKSKitLyricStyle : NSObject <NSCopying>
{
    BOOL _isVertical; // +0x8
    BOOL _disableAlphaWhenPrepare; // +0x9
    UIColor * _lyricColor; // +0x10
    double _lyricInset; // +0x18
    unsigned long long _lyricAlignment; // +0x20
    double _lyricDefaultColorAlpha; // +0x28
}
+ (id)defaultStyle;
+ (id)mergeKSKitLyricStyle:(id)arg1 withLiveNewMusicLyricStyle:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isVertical;
- (void)setIsVertical:(BOOL)arg1;
- (id)lyricColor;
- (void)setLyricColor:(id)arg1;
- (double)lyricInset;
- (void)setLyricInset:(double)arg1;
- (unsigned long long)lyricAlignment;
- (void)setLyricAlignment:(unsigned long long)arg1;
- (double)lyricDefaultColorAlpha;
- (void)setLyricDefaultColorAlpha:(double)arg1;
- (BOOL)disableAlphaWhenPrepare;
- (void)setDisableAlphaWhenPrepare:(BOOL)arg1;
- (void).cxx_destruct;
@end
