@interface QBrandPromotionImageTask : NSObject
{
    NSURLSessionDataTask * _task; // +0x8
    NSMutableSet * _imageOwners; // +0x10
}
- (id)init;
- (void)addImageOwner:(id)arg1;
- (void)removeImageOwner:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)imageOwners;
- (void)setImageOwners:(id)arg1;
- (void).cxx_destruct;
@end

