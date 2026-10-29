@interface COpenIMInfo : NSObject <PBCoding>
{
    unsigned int _customInfoVisible; // +0x8
    unsigned int _resSubType; // +0xc
    unsigned int _kefuType; // +0x10
    NSString * _openIMDescId; // +0x18
    NSArray * _customItems; // +0x20
    NSArray * _customToolBarItems; // +0x28
    NSString * _finderUsername; // +0x30
    unsigned long long _flags; // +0x38
    NSString * _exposedId; // +0x40
    NSString * _customInfo; // +0x48
    NSString * _customToolBarInfo; // +0x50
}
+ (void)PBArrayAdd_customInfoVisible;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_resSubType;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_exposedId;
+ (void)PBArrayAdd_kefuType;
+ (void)PBArrayAdd_customToolBarInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)customItems;
- (void)setCustomInfo:(id)arg1;
- (id)customToolBarItems;
- (void)setCustomToolBarInfo:(id)arg1;
- (id)openIMDescId;
- (void)setOpenIMDescId:(id)arg1;
- (unsigned int)customInfoVisible;
- (void)setCustomInfoVisible:(unsigned int)arg1;
- (void)setCustomItems:(id)arg1;
- (void)setCustomToolBarItems:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned int)resSubType;
- (void)setResSubType:(unsigned int)arg1;
- (unsigned long long)flags;
- (void)setFlags:(unsigned long long)arg1;
- (id)exposedId;
- (void)setExposedId:(id)arg1;
- (id)customInfo;
- (unsigned int)kefuType;
- (void)setKefuType:(unsigned int)arg1;
- (id)customToolBarInfo;
- (void).cxx_destruct;
@end

