@interface NewTipsConfig : NSObject <PBCoding>
{
    BOOL _bShowParentTips; // +0x8
    unsigned int _tipsId; // +0xc
    unsigned long long _type; // +0x10
    NSString * _uniqueId; // +0x18
    NSString * _filterClassName; // +0x20
}
+ (void)PBArrayAdd_tipsId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_uniqueId;
+ (void)PBArrayAdd_filterClassName;
+ (void)PBArrayAdd_bShowParentTips;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)generateNewTipsFilter;
- (BOOL)filterTipsWhenReceiveXml:(id)arg1;
- (BOOL)canShowTipsWithTipsInfo:(id)arg1;
- (id)description;
- (unsigned int)tipsId;
- (void)setTipsId:(unsigned int)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)filterClassName;
- (void)setFilterClassName:(id)arg1;
- (BOOL)bShowParentTips;
- (void)setBShowParentTips:(BOOL)arg1;
- (void).cxx_destruct;
@end

