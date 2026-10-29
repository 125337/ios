@interface WCAdURLTintColorImageView : UIImageView <WCCanvasImageLoaderObserver>
{
    BOOL _useCdn; // +0x8
    unsigned int _downloadScene; // +0xc
    NSString * _url; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setImageWithUrl:(id)arg1 tintColor:(id)arg2;
- (void)setImageWithUrl:(id)arg1 tintColor:(id)arg2 scene:(unsigned int)arg3 useCdn:(BOOL)arg4;
- (id)fetchImageForUrl:(id)arg1;
- (void)updateImageContent;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)downloadScene;
- (void)setDownloadScene:(unsigned int)arg1;
- (BOOL)useCdn;
- (void)setUseCdn:(BOOL)arg1;
- (void).cxx_destruct;
@end

