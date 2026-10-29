@interface _TtC9WeAppCore32WAReportCapsuleMutationEventItem : WAReportBaseItem
{
    long long action; // +0x8
    long long type; // +0x10
    long long coexistType; // +0x18
}
+ (long long)trans2CapsuleTypeWithState:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)coexistType;
- (void)setCoexistType:(long long)arg1;
- (int)reportID;
- (id)reportString;
- (id)init;
@end
