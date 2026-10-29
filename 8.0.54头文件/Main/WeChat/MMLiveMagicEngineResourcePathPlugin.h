@interface MMLiveMagicEngineResourcePathPlugin : NSObject <MMFinderLiveResPathManagerProtocol>
{
    NSString * _rootId; // +0x8
    NSString * _suffixName; // +0x10
}
- (id)initWithRootId:(id)arg1 suffixName:(id)arg2;
- (id)cacheFolder;
- (id)tempCacheFolder;
- (id)cachePath:(id)arg1;
- (id)resPath:(id)arg1;
- (id)unzipPath:(id)arg1;
- (id)zipPath:(id)arg1;
- (id)rootId;
- (void)setRootId:(id)arg1;
- (id)suffixName;
- (void)setSuffixName:(id)arg1;
- (void).cxx_destruct;
@end

