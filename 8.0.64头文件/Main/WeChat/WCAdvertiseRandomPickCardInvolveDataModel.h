@interface WCAdvertiseRandomPickCardInvolveDataModel : NSObject
{
    NSString * _numberRequestParams; // +0x8
    NSString * _involvedCountInfo; // +0x10
    NSString * _collectedCountInfo; // +0x18
}
- (BOOL)isValid;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (id)involvedCountInfo;
- (void)setInvolvedCountInfo:(id)arg1;
- (id)collectedCountInfo;
- (void)setCollectedCountInfo:(id)arg1;
- (void).cxx_destruct;
@end
