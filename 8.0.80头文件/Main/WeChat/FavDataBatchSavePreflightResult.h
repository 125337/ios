@interface FavDataBatchSavePreflightResult : NSObject
{
    BOOL _isStorageInsufficient; // +0x8
    NSArray * _savedItems; // +0x10
    NSArray * _pendingItems; // +0x18
    NSArray * _itemsReadyToSave; // +0x20
    NSDate * _latestSavedAlbumDate; // +0x28
    unsigned long long _pendingItemsTotalSize; // +0x30
    unsigned long long _availableStorageSize; // +0x38
}
- (id)initWithSavedItems:(id)arg1 pendingItems:(id)arg2 itemsReadyToSave:(id)arg3 latestSavedAlbumDate:(id)arg4 pendingItemsTotalSize:(unsigned long long)arg5 availableStorageSize:(unsigned long long)arg6 isStorageInsufficient:(BOOL)arg7;
- (id)savedItems;
- (void)setSavedItems:(id)arg1;
- (id)pendingItems;
- (void)setPendingItems:(id)arg1;
- (id)itemsReadyToSave;
- (void)setItemsReadyToSave:(id)arg1;
- (id)latestSavedAlbumDate;
- (void)setLatestSavedAlbumDate:(id)arg1;
- (unsigned long long)pendingItemsTotalSize;
- (void)setPendingItemsTotalSize:(unsigned long long)arg1;
- (unsigned long long)availableStorageSize;
- (void)setAvailableStorageSize:(unsigned long long)arg1;
- (BOOL)isStorageInsufficient;
- (void)setIsStorageInsufficient:(BOOL)arg1;
- (void).cxx_destruct;
@end
