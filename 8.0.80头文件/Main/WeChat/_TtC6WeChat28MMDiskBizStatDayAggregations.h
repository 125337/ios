@interface _TtC6WeChat28MMDiskBizStatDayAggregations : NSObject <PBCoding>
{
    MMDiskBizStatAggregation * lessThan1; // +0x8
    MMDiskBizStatAggregation * between1To3; // +0x10
    MMDiskBizStatAggregation * between3To7; // +0x18
    MMDiskBizStatAggregation * between7To15; // +0x20
    MMDiskBizStatAggregation * between15To30; // +0x28
    MMDiskBizStatAggregation * between30To90; // +0x30
    MMDiskBizStatAggregation * between90To180; // +0x38
    MMDiskBizStatAggregation * between180To360; // +0x40
    MMDiskBizStatAggregation * moreThan360; // +0x48
}
+ (void)PBArrayAdd_lessThan1;
+ (void)PBArrayAdd_between1To3;
+ (void)PBArrayAdd_between3To7;
+ (void)PBArrayAdd_between7To15;
+ (void)PBArrayAdd_between15To30;
+ (void)PBArrayAdd_between30To90;
+ (void)PBArrayAdd_between90To180;
+ (void)PBArrayAdd_between180To360;
+ (void)PBArrayAdd_moreThan360;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)lessThan1;
- (void)setLessThan1:(id)arg1;
- (id)between1To3;
- (void)setBetween1To3:(id)arg1;
- (id)between3To7;
- (void)setBetween3To7:(id)arg1;
- (id)between7To15;
- (void)setBetween7To15:(id)arg1;
- (id)between15To30;
- (void)setBetween15To30:(id)arg1;
- (id)between30To90;
- (void)setBetween30To90:(id)arg1;
- (id)between90To180;
- (void)setBetween90To180:(id)arg1;
- (id)between180To360;
- (void)setBetween180To360:(id)arg1;
- (id)moreThan360;
- (void)setMoreThan360:(id)arg1;
- (id)aggregationForInterval:(double)arg1;
- (void)add:(id)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
