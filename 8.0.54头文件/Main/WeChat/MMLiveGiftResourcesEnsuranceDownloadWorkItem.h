@interface MMLiveGiftResourcesEnsuranceDownloadWorkItem : NSObject
{
    MMLiveGiftResourceDescriptor * _resourceDescriptor; // +0x8
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    NSString * _fileUri; // +0x18
    NSString * _fileMd5Hash; // +0x20
}
- (id)initWithResourceDescriptor:(id)arg1 giftItem:(id)arg2;
- (long long)resourceType;
- (id)resourceId;
- (id)resourceDescriptor;
- (void)setResourceDescriptor:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)fileUri;
- (void)setFileUri:(id)arg1;
- (id)fileMd5Hash;
- (void)setFileMd5Hash:(id)arg1;
- (void).cxx_destruct;
@end

