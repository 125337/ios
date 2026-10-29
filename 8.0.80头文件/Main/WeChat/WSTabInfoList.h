@interface WSTabInfoList : NSObject <NSCopying>
{
    long long _jumpCategoryInFutrue; // +0x8
    NSArray * _tabs; // +0x10
}
+ (id)sharedInstance;
- (id)initWithParams:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)lastTabsCount;
- (void)setLastTabsCount:(unsigned int)arg1;
- (id)lastTabsIdentifier;
- (void)setLastTabsIdentifier:(id)arg1;
- (long long)lastSelectedTabCategory;
- (void)setLastSelectedTabCategory:(long long)arg1;
- (long long)lastSelectedFinderEntryType;
- (id)genTabsIdentifier;
- (void)cacheCurrentTabsInfo;
- (id)k1kTabs;
- (long long)topStoriesCategoryIdForTab:(long long)arg1;
- (id)tabInfoForCategory:(long long)arg1;
- (long long)indexForCategory:(long long)arg1;
- (id)tabInfoForReddotPath:(id)arg1;
- (id)tabInfoForFinderTabType:(int)arg1;
- (BOOL)hasNewlifeTab;
- (BOOL)hasLongVideoTab;
- (void)configureJumpCategory:(int)arg1;
- (long long)jumpCategoryInFutrue;
- (void)setJumpCategoryInFutrue:(long long)arg1;
- (id)tabs;
- (void)setTabs:(id)arg1;
- (void).cxx_destruct;
@end
