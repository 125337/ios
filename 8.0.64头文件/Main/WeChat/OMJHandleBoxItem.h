@interface OMJHandleBoxItem : NSObject
{
    UIImage * _image; // +0x8
    long long _corner; // +0x10
    unsigned long long _actionType; // +0x18
    SEL _action; // +0x20
    id _target; // +0x28
    CGSize _imageSize; // +0x30
    CGSize _touchSize; // +0x40
}
- (id)initWithImage:(id)arg1 imageSize:(CGSize)arg2 corner:(long long)arg3 actionType:(unsigned long long)arg4;
- (id)initWithImage:(id)arg1 imageSize:(CGSize)arg2 corner:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)description;
- (id)image;
- (CGSize)imageSize;
- (CGSize)touchSize;
- (void)setTouchSize:(CGSize)arg1;
- (long long)corner;
- (unsigned long long)actionType;
- (SEL)action;
- (id)target;
- (void).cxx_destruct;
@end
