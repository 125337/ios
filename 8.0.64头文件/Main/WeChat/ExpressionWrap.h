@interface ExpressionWrap : NSObject
{
    NSString * _key; // +0x8
    NSDictionary * _descDic; // +0x10
    NSString * _imagePath; // +0x18
    NSString * _imageName; // +0x20
    UIImage * _image; // +0x28
}
- (id)loadImage;
- (id)key;
- (void)setKey:(id)arg1;
- (id)descDic;
- (void)setDescDic:(id)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)imageName;
- (void)setImageName:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end
