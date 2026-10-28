@interface MJFilterAdjustmentValueItem : MJSegmentAdjustmentValueItem
{
    float _intensity; // +0x1c
    NSString * _filterID; // +0x20
    NSString * _options; // +0x28
    NSString * _name; // +0x30
    NSURL * _iconURL; // +0x38
    OMJMaterialInfo * _material; // +0x40
}
- (id)initWithMaterial:(id)arg1;
- (id)options;
- (id)name;
- (BOOL)isEmpty;
- (id)filterID;
- (void)setFilterID:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setName:(id)arg1;
- (float)intensity;
- (void)setIntensity:(float)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)material;
- (void)setMaterial:(id)arg1;
- (void).cxx_destruct;
@end
