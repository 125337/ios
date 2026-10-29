@interface ContactProfileRecommEnxposureItem : NSObject <PBCoding>
{
    unsigned int _enxposureCount; // +0x8
    NSMutableSet * _setEnxposureRemark; // +0x10
    NSMutableSet * _setEnxposurePhone; // +0x18
    NSMutableSet * _setEnxposureImageMsgLocalId; // +0x20
}
+ (void)PBArrayAdd_setEnxposureRemark;
+ (void)PBArrayAdd_setEnxposurePhone;
+ (void)PBArrayAdd_setEnxposureImageMsgLocalId;
+ (void)PBArrayAdd_enxposureCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)setEnxposureRemark;
- (void)setSetEnxposureRemark:(id)arg1;
- (id)setEnxposurePhone;
- (void)setSetEnxposurePhone:(id)arg1;
- (id)setEnxposureImageMsgLocalId;
- (void)setSetEnxposureImageMsgLocalId:(id)arg1;
- (unsigned int)enxposureCount;
- (void)setEnxposureCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
