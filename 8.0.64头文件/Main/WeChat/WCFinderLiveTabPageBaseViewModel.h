@interface WCFinderLiveTabPageBaseViewModel : NSObject
{
    long long _scene; // +0x8
    NSArray * _liveTabList; // +0x10
    NSString * _title; // +0x18
    unsigned long long _hideTabs; // +0x20
    unsigned long long _prefechTabPullType; // +0x28
    unsigned long long _prefechPreTabPullType; // +0x30
    unsigned long long _prefechNextTabPullType; // +0x38
}
- (BOOL)checkLoadLocalLiveTabsCache;
- (void)checkSyncToLocalLiveTabsCache:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)shouldCacheTabWithScene:(unsigned long long)arg1;
- (void)updateVmWith:(id)arg1;
- (BOOL)isEqualWith:(id)arg1;
- (BOOL)hasTabDataUpdated:(id)arg1;
- (unsigned long long)prefechTabPullType;
- (unsigned long long)prefechPreTabPullType;
- (unsigned long long)prefechNextTabPullType;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)liveTabList;
- (void)setLiveTabList:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)hideTabs;
- (void)setHideTabs:(unsigned long long)arg1;
- (void)setPrefechTabPullType:(unsigned long long)arg1;
- (void)setPrefechPreTabPullType:(unsigned long long)arg1;
- (void)setPrefechNextTabPullType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
