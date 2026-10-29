@interface MMFinderLiveConnectMicPKForegroundGiftContentView : UIView
{
    PAGView * _pagView; // +0x8
    RfxPagView * _rfxPAGView; // +0x10
    double _heightPercent; // +0x18
    double _widthHeightRatio; // +0x20
}
- (id)initWithPAGFile:(id)arg1;
- (id)initWithRfxPAGFile:(id)arg1;
- (void)commonInitWithSize:(CGSize)arg1;
- (id)getPAGView;
- (void)layoutSubviews;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)rfxPAGView;
- (void)setRfxPAGView:(id)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (double)widthHeightRatio;
- (void)setWidthHeightRatio:(double)arg1;
- (void).cxx_destruct;
@end

