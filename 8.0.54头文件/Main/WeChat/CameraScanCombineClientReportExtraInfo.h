@interface CameraScanCombineClientReportExtraInfo : NSObject
{
    long long _modelVersion; // +0x8
    long long _itemStatus; // +0x10
    long long _itemCategoryId; // +0x18
    long long _imageEncodeType; // +0x20
    long long _imageEncodeSize; // +0x28
}
- (long long)modelVersion;
- (void)setModelVersion:(long long)arg1;
- (long long)itemStatus;
- (void)setItemStatus:(long long)arg1;
- (long long)itemCategoryId;
- (void)setItemCategoryId:(long long)arg1;
- (long long)imageEncodeType;
- (void)setImageEncodeType:(long long)arg1;
- (long long)imageEncodeSize;
- (void)setImageEncodeSize:(long long)arg1;
@end

