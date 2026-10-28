@interface MPPageImageSaveContext : NSObject
{
    BOOL _saveAfterDecodeOnly; // +0x8
    BOOL _saveToExternalCache; // +0x9
    NSString * _pageDataKeyURL; // +0x10
    NSString * _imageURL; // +0x18
}
- (id)pageDataKeyURL;
- (void)setPageDataKeyURL:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (BOOL)saveAfterDecodeOnly;
- (void)setSaveAfterDecodeOnly:(BOOL)arg1;
- (BOOL)saveToExternalCache;
- (void)setSaveToExternalCache:(BOOL)arg1;
- (void).cxx_destruct;
@end
