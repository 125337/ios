@interface MMAssetMessageUUIDMgr : MMRootService <MMServiceProtocol>
{
    OrderedDictionary * _assetIDToMessageUUIDMap; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
+ (id)getPathOfMessageUUIDCache;
- (void)onServiceInit;
- (void)asyncSetMessageUUID:(id)arg1 forAssetID:(id)arg2;
- (id)messageUUIDForAssetID:(id)arg1;
- (id)decodeOrCreateAssetIDToMessageUUIDMapFromFile:(id)arg1;
- (void)encodeAssetIDToMessageUUIDMap:(id)arg1 toFilePath:(id)arg2;
- (id)assetIDToMessageUUIDMap;
- (void)setAssetIDToMessageUUIDMap:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end

