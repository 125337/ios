@interface BTFeedbackPanelCoordinateParams : NSObject
{
    double _pannelViewWidth; // +0x8
    unsigned long long _pannelViewAlignType; // +0x10
    double _pannelViewAlignMargin; // +0x18
    double _downsidePanelY; // +0x20
    double _upsidePanelY; // +0x28
    double _indicatorViewX; // +0x30
}
- (double)pannelViewWidth;
- (void)setPannelViewWidth:(double)arg1;
- (unsigned long long)pannelViewAlignType;
- (void)setPannelViewAlignType:(unsigned long long)arg1;
- (double)pannelViewAlignMargin;
- (void)setPannelViewAlignMargin:(double)arg1;
- (double)downsidePanelY;
- (void)setDownsidePanelY:(double)arg1;
- (double)upsidePanelY;
- (void)setUpsidePanelY:(double)arg1;
- (double)indicatorViewX;
- (void)setIndicatorViewX:(double)arg1;
@end

