@interface DefaultBGImageModel : NSObject <YYModel>
{
    NSString * _objectID; // +0x8
    NSString * _imageUrl; // +0x10
}
- (id)toBuffer;
- (id)fromBuffer:(id)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (void).cxx_destruct;
@end
