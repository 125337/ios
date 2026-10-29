@interface OpenIMContactExtendItemCodePB : NSObject <PBCoding>
{
    BOOL _hadShowSucceedContactWindow; // +0x8
    BOOL _hadSucceedContact; // +0x9
}
+ (void)PBArrayAdd_hadShowSucceedContactWindow;
+ (void)PBArrayAdd_hadSucceedContact;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)hadShowSucceedContactWindow;
- (void)setHadShowSucceedContactWindow:(BOOL)arg1;
- (BOOL)hadSucceedContact;
- (void)setHadSucceedContact:(BOOL)arg1;
@end
