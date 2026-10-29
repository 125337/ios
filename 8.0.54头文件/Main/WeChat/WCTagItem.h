@interface WCTagItem : NSObject
{
    long long _type; // +0x8
    NSString * _imageName; // +0x10
    UIColor * _imageColor; // +0x18
    id /* block */ _imageCreateAction; // +0x20
    id /* block */ _itemViewCreateAction; // +0x28
    CGSize _size; // +0x30
}
- (id)initWithType:(long long)arg1 size:(CGSize)arg2;
- (id)initWithType:(long long)arg1 size:(CGSize)arg2 itemViewCreateAction:(id /* block */)arg3;
- (id)initWithType:(long long)arg1 size:(CGSize)arg2 imageCreateAction:(id /* block */)arg3;
- (id)initWithType:(long long)arg1 size:(CGSize)arg2 imageName:(id)arg3 imageColor:(id)arg4;
- (id)initWithType:(long long)arg1 size:(CGSize)arg2 imageUrl:(id)arg3;
- (double)getWidthByHeight:(double)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (id)imageName;
- (void)setImageName:(id)arg1;
- (id)imageColor;
- (void)setImageColor:(id)arg1;
- (id /* block */)imageCreateAction;
- (void)setImageCreateAction:(id /* block */)arg1;
- (id /* block */)itemViewCreateAction;
- (void)setItemViewCreateAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

