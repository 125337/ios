@interface MMWebImageButton : MMUIButton <MMImageLoaderObserver>
{
    UIImage * _defaultImage; // +0x8
    NSURL * _url; // +0x10
}
+ (id /* block */)zz_create;
+ (BOOL)CanLoadImage:(id)arg1;
- (id)zz_setup;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)setImageURL:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
@end

