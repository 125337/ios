@interface MSEMessageMetaDataImageItem : NSObject <PBCoding>
{
    NSString * _toUsername; // +0x8
    NSString * _imageUrl; // +0x10
}
+ (void)PBArrayAdd_toUsername;
+ (void)PBArrayAdd_imageUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

