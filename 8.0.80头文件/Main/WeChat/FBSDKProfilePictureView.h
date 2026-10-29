@interface FBSDKProfilePictureView : UIView
{
    BOOL _hasProfileImage; // +0x8
    UIImageView * _imageView; // +0x10
    FBSDKProfilePictureViewState * _lastState; // +0x18
    BOOL _needsImageUpdate; // +0x20
    BOOL _placeholderImageIsValid; // +0x21
    unsigned long long _pictureMode; // +0x28
    NSString * _profileID; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setBounds:(CGRect)arg1;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setProfileID:(id)arg1;
- (void)setNeedsImageUpdate;
- (void)_accessTokenDidChangeNotification:(id)arg1;
- (void)_configureProfilePictureView;
- (BOOL)_imageShouldFit;
- (CGSize)_imageSize:(BOOL)arg1 scale:(double)arg2;
- (void)_needsImageUpdate;
- (void)_setPlaceholderImage;
- (void)_updateImageWithData:(id)arg1 state:(id)arg2;
- (unsigned long long)pictureMode;
- (void)setPictureMode:(unsigned long long)arg1;
- (id)profileID;
- (void).cxx_destruct;
@end
