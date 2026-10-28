@interface CameraScanCombineClientReportExtraInfo : NSObject
{
    long long _modelVersion; // +0x8
    long long _itemStatus; // +0x10
    long long _itemCategoryId; // +0x18
    long long _imageEncodeType; // +0x20
    long long _imageEncodeSize; // +0x28
    long long _responseId; // +0x30
    long long _itemSource; // +0x38
    long long _similarfilter; // +0x40
    long long _actionBiz; // +0x48
    NSString * _ext; // +0x50
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
- (long long)responseId;
- (void)setResponseId:(long long)arg1;
- (long long)itemSource;
- (void)setItemSource:(long long)arg1;
- (long long)similarfilter;
- (void)setSimilarfilter:(long long)arg1;
- (long long)actionBiz;
- (void)setActionBiz:(long long)arg1;
- (id)ext;
- (void)setExt:(id)arg1;
- (void).cxx_destruct;
@end
