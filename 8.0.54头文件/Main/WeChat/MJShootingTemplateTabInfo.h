@interface MJShootingTemplateTabInfo : NSObject <PBCoding, NSCopying>
{
    unsigned int _tabType; // +0x8
    unsigned long long _tabId; // +0x10
    NSString * _tabName; // +0x18
    NSArray * _tags; // +0x20
}
+ (void)PBArrayAdd_tabId;
+ (void)PBArrayAdd_tabName;
+ (void)PBArrayAdd_tags;
+ (void)PBArrayAdd_tabType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithTemplateTab:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)tabId;
- (void)setTabId:(unsigned long long)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (id)tags;
- (void)setTags:(id)arg1;
- (unsigned int)tabType;
- (void)setTabType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

