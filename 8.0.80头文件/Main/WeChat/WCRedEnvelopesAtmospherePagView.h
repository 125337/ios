@interface WCRedEnvelopesAtmospherePagView : UIView <PAGViewListener, WCPayWebPagViewDelegate>
{
    BOOL _shouldStopAtNextLoop; // +0x8
    WCRedEnvelopesControlData * _m_data; // +0x10
    WCPayWebPagView * _atmospherePagView; // +0x18
    double _bottomY; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 bottomY:(double)arg3;
- (void)initView;
- (void)layoutSubviews;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)stop;
- (void)playPag;
- (void)playDetailPag;
- (void)stopAndRemove;
- (void)fadeStopAndRemove;
- (void)onAnimationEnd:(id)arg1;
- (id)demoPagFile;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)atmospherePagView;
- (void)setAtmospherePagView:(id)arg1;
- (BOOL)shouldStopAtNextLoop;
- (void)setShouldStopAtNextLoop:(BOOL)arg1;
- (double)bottomY;
- (void)setBottomY:(double)arg1;
- (void).cxx_destruct;
@end
