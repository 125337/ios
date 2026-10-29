@interface FavMediaAlbumIndexService : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mediaAlbumIndexMMKV; // +0x8
    NSString * _mediaAlbumIndexAccountIdentifier; // +0x10
    NSObject<OS_dispatch_queue> * _mediaAlbumIndexQueue; // +0x18
}
- (id)init;
- (id)mediaFingerprintKeyForDataType:(long long)arg1 dataSize:(unsigned long long)arg2 dataMd5:(id)arg3;
- (id)mediaFingerprintKeysForDataTypes:(id)arg1 dataSizes:(id)arg2 dataMd5s:(id)arg3;
- (BOOL)setAssetLocalIdentifier:(id)arg1 forMediaFingerprintKey:(id)arg2;
- (id)assetLocalIdentifierForMediaFingerprintKey:(id)arg1;
- (void)removeAssetLocalIdentifierForMediaFingerprintKey:(id)arg1;
- (id)assetLocalIdentifiersForMediaFingerprintKeys:(id)arg1;
- (void)invalidateMediaFingerprintKeys:(id)arg1;
- (id)mediaAlbumIndexMMKVLocked;
- (id)normalizedDataMD5:(id)arg1;
- (id)mediaAlbumIndexMMKV;
- (void)setMediaAlbumIndexMMKV:(id)arg1;
- (id)mediaAlbumIndexAccountIdentifier;
- (void)setMediaAlbumIndexAccountIdentifier:(id)arg1;
- (id)mediaAlbumIndexQueue;
- (void)setMediaAlbumIndexQueue:(id)arg1;
- (void).cxx_destruct;
@end
