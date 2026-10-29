@interface TingPagCoverView : UIView <MMImageLoaderObserver, MMWebImageViewDelegate>
{
    id <TingPagCoverViewDelegate> _delegate; // +0x8
    TingCoverInfo * _viewModel; // +0x10
    PAGView * _pagView; // +0x18
    PAGFile * _tmplFile; // +0x20
    UIView * _highlightedMaskView; // +0x28
}
+ (void)applyPAGImage:(id)arg1 forIndex:(unsigned long long)arg2 tmpl:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)initPagView;
- (void)initHighlighedView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)freeCache;
- (void)prepareForReuse;
- (void)applyCoverInfo:(id)arg1;
- (BOOL)checkoutCoversIsEqual:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)reloadWithPAGFile:(id)arg1;
- (void)starRequestTmplCoverUrls;
- (void)startLoadImgFromLocal;
- (unsigned long long)maxFetchingCount;
- (BOOL)isLegalPAGCoverStyle:(unsigned int)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onFetchImage:(id)arg1 indexes:(id)arg2 url:(id)arg3;
- (void)ImageDidFail:(id)arg1;
- (void)flush;
- (id)pagFile;
- (id)pagFileFromCoverInfo:(id)arg1;
- (id)pagFilePathFromCoverInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)tmplFile;
- (void)setTmplFile:(id)arg1;
- (id)highlightedMaskView;
- (void)setHighlightedMaskView:(id)arg1;
- (void).cxx_destruct;
@end
