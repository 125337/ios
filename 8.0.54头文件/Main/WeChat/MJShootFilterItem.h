@interface MJShootFilterItem : MJSegmentAdjustmentValueItem
{
    float _intensity; // +0x8
    OMJMaterialInfo * _material; // +0x10
    NSString * _filterID; // +0x18
    NSString * _name; // +0x20
    NSURL * _iconURL; // +0x28
}
+ (id)createEmptyItem;
- (id)initWithMaterial:(id)arg1;
- (BOOL)isEmptyItem;
- (id)material;
- (void)setMaterial:(id)arg1;
- (id)filterID;
- (void)setFilterID:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (float)intensity;
- (void)setIntensity:(float)arg1;
- (void).cxx_destruct;
@end

