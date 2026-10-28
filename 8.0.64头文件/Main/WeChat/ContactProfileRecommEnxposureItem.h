@interface ContactProfileRecommEnxposureItem : NSObject <PBCoding>
{
    NSMutableSet * _setEnxposureRemark; // +0x8
    NSMutableSet * _setEnxposurePhone; // +0x10
    NSMutableSet * _setEnxposureImageMsgLocalId; // +0x18
}
+ (void)PBArrayAdd_setEnxposureRemark;
+ (void)PBArrayAdd_setEnxposurePhone;
+ (void)PBArrayAdd_setEnxposureImageMsgLocalId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)setEnxposureRemark;
- (void)setSetEnxposureRemark:(id)arg1;
- (id)setEnxposurePhone;
- (void)setSetEnxposurePhone:(id)arg1;
- (id)setEnxposureImageMsgLocalId;
- (void)setSetEnxposureImageMsgLocalId:(id)arg1;
- (void).cxx_destruct;
@end
