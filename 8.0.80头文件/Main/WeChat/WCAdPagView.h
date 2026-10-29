@interface WCAdPagView : MMUIView <PAGViewListener>
{
    id <WCAdPagViewDelegate> _delegate; // +0x8
    WCAdPagInfo * _pagInfo; // +0x10
    WCAdPagViewConfig * _config; // +0x18
    WCAdURLImageView * _thumbView; // +0x20
    PAGView * _pagView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 pagInfo:(id)arg2 config:(id)arg3;
- (void)initView;
- (id)thumbView;
- (void)initPagView;
- (void)play;
- (void)pause;
- (void)stop;
- (void)layoutSubviews;
- (long long)fetchContentModeFromScaleMode:(int)arg1;
- (void)onAnimationUpdate:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pagInfo;
- (void)setPagInfo:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void)setThumbView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (void).cxx_destruct;
@end
