@interface MMFinderLiveFeedStreamBarrageConfig : NSObject
{
    BOOL _enableTouchAction; // +0x8
    BOOL _ignoreEmptyTouch; // +0x9
    double _preContentWidth; // +0x10
    double _gap; // +0x18
    double _lineSpacing; // +0x20
    unsigned long long _lines; // +0x28
    unsigned long long _displayMilliseconds; // +0x30
    MMFinderLiveFeedStreamBarrageStyleConfig * _styleConfig; // +0x38
}
+ (id)defaultConfig;
- (double)preContentWidth;
- (void)setPreContentWidth:(double)arg1;
- (double)gap;
- (void)setGap:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (unsigned long long)lines;
- (void)setLines:(unsigned long long)arg1;
- (BOOL)enableTouchAction;
- (void)setEnableTouchAction:(BOOL)arg1;
- (BOOL)ignoreEmptyTouch;
- (void)setIgnoreEmptyTouch:(BOOL)arg1;
- (unsigned long long)displayMilliseconds;
- (void)setDisplayMilliseconds:(unsigned long long)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (void).cxx_destruct;
@end
