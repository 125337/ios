@interface WCAdTwinTurboPagView : MMUIView
{
    id <WCAdPagViewDelegate> _delegate; // +0x8
    WCAdPagInfo * _pagInfo; // +0x10
    WCAdPagInfo * _pagDarkInfo; // +0x18
    WCAdPagViewConfig * _config; // +0x20
    WCAdRepeatLimitedPagView * _pagView; // +0x28
    WCAdRepeatLimitedPagView * _pagDarkView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 pagInfo:(id)arg2 pagDarkInfo:(id)arg3 config:(id)arg4;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)pagView;
- (id)pagDarkView;
- (void)setDelegate:(id)arg1;
- (void)play;
- (void)pause;
- (void)stop;
- (BOOL)isPagFileReady;
- (void)preloadPagComposition;
- (void)preloadPagCompositionFor:(id)arg1;
- (void)updateSubviewsVisibility;
- (void)resumePagViewPlayState;
- (id)fetchPreferPAGView;
- (id)fetchOppositePAGViewAgainst:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegate;
- (id)pagInfo;
- (void)setPagInfo:(id)arg1;
- (id)pagDarkInfo;
- (void)setPagDarkInfo:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void)setPagView:(id)arg1;
- (void)setPagDarkView:(id)arg1;
- (void).cxx_destruct;
@end
