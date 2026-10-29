@interface WCFinderGetLiveTabsInfo : NSObject <PBCoding>
{
    NSArray * _liveTabList; // +0x8
    NSString * _title; // +0x10
    unsigned long long _hideTabs; // +0x18
    unsigned long long _prefechTabPullType; // +0x20
    unsigned long long _prefechPreTabPullType; // +0x28
    unsigned long long _prefechNextTabPullType; // +0x30
    NSArray * _navTabList; // +0x38
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_hideTabs;
+ (void)PBArrayAdd_prefechTabPullType;
+ (void)PBArrayAdd_prefechPreTabPullType;
+ (void)PBArrayAdd_prefechNextTabPullType;
+ (void)PBArrayAdd_liveTabList;
+ (void)PBArrayAdd_navTabList;
+ (void)initialize;
+ (id)finderGetLiveTabsInfoFrom:(id)arg1;
- (id)getPBPropertyTable;
- (id)recommendTabInfo;
- (id)liveTabList;
- (void)setLiveTabList:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)hideTabs;
- (void)setHideTabs:(unsigned long long)arg1;
- (unsigned long long)prefechTabPullType;
- (void)setPrefechTabPullType:(unsigned long long)arg1;
- (unsigned long long)prefechPreTabPullType;
- (void)setPrefechPreTabPullType:(unsigned long long)arg1;
- (unsigned long long)prefechNextTabPullType;
- (void)setPrefechNextTabPullType:(unsigned long long)arg1;
- (id)navTabList;
- (void)setNavTabList:(id)arg1;
- (void).cxx_destruct;
@end
