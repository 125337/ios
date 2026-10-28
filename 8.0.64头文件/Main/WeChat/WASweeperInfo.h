@interface WASweeperInfo : NSObject
{
    unsigned int _appServiceType; // +0x8
    unsigned int _lastLaunchAppTime; // +0xc
    unsigned long long _cacheSize; // +0x10
    id /* block */ _cleanBlock; // +0x18
    NSString * _nsAppID; // +0x20
    NSString * _nsUsrname; // +0x28
    NSString * _nsNickName; // +0x30
    unsigned long long _type; // +0x38
    NSMutableArray * _arrFolderPaths; // +0x40
    NSMutableArray * _childSweeperInfo; // +0x48
    WASweeperPublicDataInfo * _publicDataInfo; // +0x50
}
- (unsigned long long)cacheSize;
- (void)setCacheSize:(unsigned long long)arg1;
- (id /* block */)cleanBlock;
- (void)setCleanBlock:(id /* block */)arg1;
- (id)nsAppID;
- (void)setNsAppID:(id)arg1;
- (id)nsUsrname;
- (void)setNsUsrname:(id)arg1;
- (id)nsNickName;
- (void)setNsNickName:(id)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned int)lastLaunchAppTime;
- (void)setLastLaunchAppTime:(unsigned int)arg1;
- (id)arrFolderPaths;
- (void)setArrFolderPaths:(id)arg1;
- (id)childSweeperInfo;
- (void)setChildSweeperInfo:(id)arg1;
- (id)publicDataInfo;
- (void)setPublicDataInfo:(id)arg1;
- (void).cxx_destruct;
@end
