@interface WCAdPagView : MMUIView <PAGViewListener>
{
    WCAdPagInfo * _pagInfo; // +0x8
    WCAdPagViewConfig * _config; // +0x10
    WCAdURLImageView * _thumbView; // +0x18
    PAGView * _pagView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 pagInfo:(id)arg2 config:(id)arg3;
- (void)initView;
- (id)thumbView;
- (void)initPagView;
- (void)play;
- (void)pause;
- (void)stop;
- (long long)fetchContentModeFromScaleMode:(int)arg1;
- (void)onAnimationUpdate:(id)arg1;
- (id)pagInfo;
- (void)setPagInfo:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void)setThumbView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (void).cxx_destruct;
@end
