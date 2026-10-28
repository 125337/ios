@interface VoIPConfSDKUserMap : NSObject
{
    NSArray * _riskUserInfos; // +0x8
    NSArray * _validUserInfos; // +0x10
}
+ (id)userMapWithUserInfos:(id)arg1;
- (id)initWithRiskUserInfos:(id)arg1 validUserInfos:(id)arg2;
- (id)riskUserNames;
- (id)riskUserInfos;
- (void)setRiskUserInfos:(id)arg1;
- (id)validUserInfos;
- (void)setValidUserInfos:(id)arg1;
- (void).cxx_destruct;
@end
