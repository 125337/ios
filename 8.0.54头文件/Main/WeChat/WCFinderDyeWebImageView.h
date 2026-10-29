@interface WCFinderDyeWebImageView : UIImageView
{
    NSURL * _url; // +0x8
    NSURL * _darkURL; // +0x10
    UIColor * _color; // +0x18
    NSURL * _displayUrl; // +0x20
}
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 color:(id)arg3;
- (void)reloadImage;
- (void)setupImage:(id)arg1 withUrl:(id)arg2;
- (id)dyeImage:(id)arg1 color:(id)arg2;
- (CGSize)dyeSizeForImage:(id)arg1;
- (id)currentUrl;
- (id)currentFormatUrl;
- (id)currentDisplayColor;
- (id)urlAppendColor:(id)arg1 color:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)darkURL;
- (void)setDarkURL:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)displayUrl;
- (void)setDisplayUrl:(id)arg1;
- (void).cxx_destruct;
@end

