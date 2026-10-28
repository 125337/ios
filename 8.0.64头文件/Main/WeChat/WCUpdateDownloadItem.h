@interface WCUpdateDownloadItem : NSObject
{
    NSString * _baseID; // +0x8
    NSString * _pid; // +0x10
    NSString * _filePath; // +0x18
    ResourceMeta * _resMeta; // +0x20
    NSMutableArray * _customInfos; // +0x28
}
- (id)baseID;
- (void)setBaseID:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)resMeta;
- (void)setResMeta:(id)arg1;
- (id)customInfos;
- (void)setCustomInfos:(id)arg1;
- (void).cxx_destruct;
@end
