@interface OMJAssetInfoStatistics : NSObject
{
    SharedPtr<XMJAssetInfoStatistics> _backingAssetInfoStatistics; // +0x8
}
- (void)dealloc;
- (id)init;
- (void)addMediaFiles:(id)arg1 fromScene:(long long)arg2 isFinal:(BOOL)arg3;
- (void)removeFinalMediaFiles;
- (void)removeAllMediaFilesFromScene:(long long)arg1;
- (void)removeMediaFiles:(id)arg1 fromScene:(long long)arg2;
- (void)reset;
- (id)toBinaryBuffer;
- (BOOL)loadBinaryBuffer:(id)arg1;
- (id)toJSONString;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
