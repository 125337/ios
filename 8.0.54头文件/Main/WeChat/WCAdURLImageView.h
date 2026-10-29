@interface WCAdURLImageView : UIImageView <WCCanvasImageLoaderObserver>
{
    BOOL _useCdn; // +0x8
    unsigned int _downloadScene; // +0xc
    id <WCAdURLImageViewDelegate> _delegate; // +0x10
    NSString * _url; // +0x18
    NSString * _urlDark; // +0x20
}
+ (BOOL)isImageForUrlExistInCache:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setImageWithUrl:(id)arg1;
- (void)setImageWithUrl:(id)arg1 scene:(unsigned int)arg2 useCdn:(BOOL)arg3;
- (void)setImageWithUrl:(id)arg1 darkUrl:(id)arg2;
- (void)setImageWithUrl:(id)arg1 darkUrl:(id)arg2 scene:(unsigned int)arg3 useCdn:(BOOL)arg4;
- (id)fetchImageForUrl:(id)arg1;
- (void)updateImageContent;
- (void)setDefaultImageWithImageName:(id)arg1;
- (void)setDefaultImageWithImageName:(id)arg1 darkImageName:(id)arg2;
- (void)updateImageContentWithLightImage:(id)arg1 darkImage:(id)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)urlDark;
- (void)setUrlDark:(id)arg1;
- (unsigned int)downloadScene;
- (void)setDownloadScene:(unsigned int)arg1;
- (BOOL)useCdn;
- (void)setUseCdn:(BOOL)arg1;
- (void).cxx_destruct;
@end

