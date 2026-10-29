@interface TingPAGCoverController : NSObject <MMImageLoaderObserver>
{
    id <TingPAGCoverControllerDelegate> _delegate; // +0x8
    TingCoverInfo * _coverInfo; // +0x10
    UIColor * _oCoverBgColor; // +0x18
    PAGFile * _tmplFile; // +0x20
    NSMutableArray * _arrCoverUrl; // +0x28
    TingPAGImageView * _bindPagPlayer; // +0x30
}
+ (void)applyPAGImage:(id)arg1 forIndex:(unsigned long long)arg2 tmpl:(id)arg3;
- (id)initWithCoverInfo:(id)arg1;
- (void)updateCoverInfo:(id)arg1;
- (void)bindPAGView:(id)arg1;
- (void)unbindPAGView;
- (void)resetDefaultImages;
- (void)starRequestTmplCoverUrls;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onFetchImage:(id)arg1 indexes:(id)arg2 url:(id)arg3;
- (void)flush;
- (void)freeCache;
- (id)pagFileFromCoverInfo:(id)arg1;
- (id)pagFilePathFromCoverInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (id)oCoverBgColor;
- (void)setOCoverBgColor:(id)arg1;
- (id)tmplFile;
- (void)setTmplFile:(id)arg1;
- (id)arrCoverUrl;
- (void)setArrCoverUrl:(id)arg1;
- (id)bindPagPlayer;
- (void)setBindPagPlayer:(id)arg1;
- (void).cxx_destruct;
@end

