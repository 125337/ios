@interface TextStatePublishIconReportItem : NSObject <PBCoding>
{
    unsigned int _iconType; // +0x8
    unsigned int _isFromRecentUse; // +0xc
    NSString * _iconId; // +0x10
    NSString * _iconCustomDescription; // +0x18
}
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_iconCustomDescription;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_isFromRecentUse;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithIcon:(id)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (id)iconCustomDescription;
- (void)setIconCustomDescription:(id)arg1;
- (unsigned int)iconType;
- (void)setIconType:(unsigned int)arg1;
- (unsigned int)isFromRecentUse;
- (void)setIsFromRecentUse:(unsigned int)arg1;
- (void).cxx_destruct;
@end

