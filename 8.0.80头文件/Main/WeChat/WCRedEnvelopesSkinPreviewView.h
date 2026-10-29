@interface WCRedEnvelopesSkinPreviewView : UIView
{
    BOOL _isWidgetSkin; // +0x8
    BOOL _isRecommendMode; // +0x9
    WCPayWebImageView * _skinImageView; // +0x10
    NSString * _imageURL; // +0x18
}
- (id)initWithImageURL:(id)arg1 isWidgetSkin:(BOOL)arg2 isRecommendMode:(BOOL)arg3;
- (void)setupViews;
- (id)skinImageView;
- (void)setSkinImageView:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (BOOL)isWidgetSkin;
- (void)setIsWidgetSkin:(BOOL)arg1;
- (BOOL)isRecommendMode;
- (void)setIsRecommendMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
