@interface BizAttrSyncCtrl : MMObject <PBCoding>
{
    unsigned long long _requestInterval; // +0x8
}
+ (void)PBArrayAdd_requestInterval;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)requestInterval;
- (void)setRequestInterval:(unsigned long long)arg1;
@end
