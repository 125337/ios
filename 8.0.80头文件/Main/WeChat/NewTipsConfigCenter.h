@interface NewTipsConfigCenter : NSObject
{
    NSMutableDictionary * _dictNewTipsConfig; // +0x8
    NSMutableSet * _xlabNewTipsConfig; // +0x10
}
- (void)registerNewTipsCenter;
- (void)deleteUselessConfigFile;
- (id)init;
- (id)getNewTipsConfigWithTipsId:(unsigned int)arg1;
- (id)getDictNewTipsConfig;
- (id)getXLabNewTipsConfig;
- (void)registerLocalTips:(unsigned int)arg1 UID:(id)arg2;
- (void)registerLocalTips:(unsigned int)arg1 UID:(id)arg2 FilterClass:(id)arg3;
- (void)registerDynamicTips:(unsigned int)arg1;
- (void)registerDynamicTips:(unsigned int)arg1 FilterClass:(id)arg2;
- (void)registerInteractiveTips:(unsigned int)arg1;
- (void)registerInteractiveTips:(unsigned int)arg1 FilterClass:(id)arg2;
- (void)registerXLabTips:(id)arg1;
- (id)getConfigWithId:(unsigned int)arg1 Type:(unsigned long long)arg2 FilterClass:(id)arg3;
- (id)GetRootPathOfNewTips;
- (id)GetPathOfNewTipsConfig;
- (id)dictNewTipsConfig;
- (void)setDictNewTipsConfig:(id)arg1;
- (id)xlabNewTipsConfig;
- (void)setXlabNewTipsConfig:(id)arg1;
- (void).cxx_destruct;
@end
