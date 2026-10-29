@interface MMLiveGiftResourcesAvailabilityResult : NSObject
{
    NSArray * _missingGifts; // +0x8
    NSArray * _missingResources; // +0x10
    NSArray * _availableResources; // +0x18
    NSArray * _resourceDownloadWorkItems; // +0x20
}
- (id)missingGifts;
- (void)setMissingGifts:(id)arg1;
- (id)missingResources;
- (void)setMissingResources:(id)arg1;
- (id)availableResources;
- (void)setAvailableResources:(id)arg1;
- (id)resourceDownloadWorkItems;
- (void)setResourceDownloadWorkItems:(id)arg1;
- (void).cxx_destruct;
@end

