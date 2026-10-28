@interface FlutterActionBarItem : NSObject
{
    BOOL _isRightItem; // +0x8
    UIBarButtonItem * _barBtnItem; // +0x10
    UIImage * _image; // +0x18
    UIView * _containerView; // +0x20
    UIImageView * _imageView; // +0x28
}
- (id)init;
- (void)setImage:(id)arg1;
- (id)barBtnItem;
- (void)setBarBtnItem:(id)arg1;
- (BOOL)isRightItem;
- (void)setIsRightItem:(BOOL)arg1;
- (id)image;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
