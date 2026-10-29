@interface LinkStyle : TextStyle
{
    NSString * _nsUrl; // +0x80
    NSString * _nsSourceUrl; // +0x88
    unsigned long long _eDataDectorType; // +0x90
    BOOL _bDrawsUnderLine; // +0x98
    BOOL _bBackgroundEnabled; // +0x99
    UIColor * _oHighlightedColor; // +0xa0
    unsigned long long _jumpType; // +0xa8
    LinkWeAppJumpWrap * _weappJumpWrap; // +0xb0
}
- (id)init;
- (BOOL)isSelectable;
- (BOOL)hasSameLinkTargetWith:(id)arg1;
- (void)drawInContext:(CGContext *)arg1;
- (id)nsUrl;
- (void)setNsUrl:(id)arg1;
- (id)nsSourceUrl;
- (void)setNsSourceUrl:(id)arg1;
- (unsigned long long)eDataDectorType;
- (void)setEDataDectorType:(unsigned long long)arg1;
- (BOOL)bDrawsUnderLine;
- (void)setBDrawsUnderLine:(BOOL)arg1;
- (BOOL)bBackgroundEnabled;
- (void)setBBackgroundEnabled:(BOOL)arg1;
- (id)oHighlightedColor;
- (void)setOHighlightedColor:(id)arg1;
- (unsigned long long)jumpType;
- (void)setJumpType:(unsigned long long)arg1;
- (id)weappJumpWrap;
- (void)setWeappJumpWrap:(id)arg1;
- (void).cxx_destruct;
@end

