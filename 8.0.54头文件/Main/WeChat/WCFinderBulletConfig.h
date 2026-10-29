@interface WCFinderBulletConfig : NSObject
{
    BOOL _ignoreEmptyTouch; // +0x8
    double _gap; // +0x10
    unsigned long long _lines; // +0x18
    double _runDuration; // +0x20
    double _playRate; // +0x28
    double _videoDuration; // +0x30
    id /* block */ _touchAction; // +0x38
    NSArray * _ignoreTouchAreas; // +0x40
    double _lineSpacing; // +0x48
    WCFinderBulletStyleConfig * _defaultStyle; // +0x50
    id /* block */ _itemConfigs; // +0x58
}
- (double)gap;
- (void)setGap:(double)arg1;
- (unsigned long long)lines;
- (void)setLines:(unsigned long long)arg1;
- (double)runDuration;
- (void)setRunDuration:(double)arg1;
- (double)playRate;
- (void)setPlayRate:(double)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (id /* block */)touchAction;
- (void)setTouchAction:(id /* block */)arg1;
- (BOOL)ignoreEmptyTouch;
- (void)setIgnoreEmptyTouch:(BOOL)arg1;
- (id)ignoreTouchAreas;
- (void)setIgnoreTouchAreas:(id)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (id)defaultStyle;
- (void)setDefaultStyle:(id)arg1;
- (id /* block */)itemConfigs;
- (void)setItemConfigs:(id /* block */)arg1;
- (void).cxx_destruct;
@end

