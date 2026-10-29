@interface MMDiskExptConfig : NSObject
{
    NSMutableDictionary * _configDic; // +0x8
}
- (id)init;
- (void)loadAllExptConfig;
- (id)getCacheKeyFromFullPath:(id)arg1;
- (int)getStoreTimeFromExpt:(id)arg1;
- (id)configDic;
- (void)setConfigDic:(id)arg1;
- (void).cxx_destruct;
@end

