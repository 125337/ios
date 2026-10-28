@interface MMFinderLiveFansGroupRightInfo : NSObject
{
    unsigned int _level; // +0x8
    NSString * _desc; // +0x10
    NSString * _imageUrlString; // +0x18
    NSString * _imageUrlStringDark; // +0x20
    NSString * _imageUrlStringLight; // +0x28
}
+ (id)infoWithLevel:(unsigned int)arg1 desc:(id)arg2 imageUrlString:(id)arg3 imageUrlStringDark:(id)arg4 imageUrlStringLight:(id)arg5;
- (unsigned int)level;
- (void)setLevel:(unsigned int)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)imageUrlString;
- (void)setImageUrlString:(id)arg1;
- (id)imageUrlStringDark;
- (void)setImageUrlStringDark:(id)arg1;
- (id)imageUrlStringLight;
- (void)setImageUrlStringLight:(id)arg1;
- (void).cxx_destruct;
@end
