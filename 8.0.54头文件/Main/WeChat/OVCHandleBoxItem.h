@interface OVCHandleBoxItem : NSObject
{
    UIImage * _image; // +0x8
    long long _corner; // +0x10
    SEL _action; // +0x18
    id _target; // +0x20
    CGSize _imageSize; // +0x28
}
- (id)initWithImage:(id)arg1 imageSize:(CGSize)arg2 corner:(long long)arg3;
- (id)initWithImage:(id)arg1 imageSize:(CGSize)arg2 corner:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)image;
- (CGSize)imageSize;
- (long long)corner;
- (SEL)action;
- (id)target;
- (void).cxx_destruct;
@end

