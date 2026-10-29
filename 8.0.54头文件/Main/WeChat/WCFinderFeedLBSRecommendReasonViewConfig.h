@interface WCFinderFeedLBSRecommendReasonViewConfig : NSObject
{
    BOOL _haveSplit; // +0x8
    BOOL _forceUnbold; // +0x9
    double _fontSize; // +0x10
    UIColor * _textColor; // +0x18
    unsigned long long _lineLimit; // +0x20
}
+ (id)titleConfig;
+ (id)summaryConfig;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (BOOL)haveSplit;
- (void)setHaveSplit:(BOOL)arg1;
- (unsigned long long)lineLimit;
- (void)setLineLimit:(unsigned long long)arg1;
- (BOOL)forceUnbold;
- (void)setForceUnbold:(BOOL)arg1;
- (void).cxx_destruct;
@end

