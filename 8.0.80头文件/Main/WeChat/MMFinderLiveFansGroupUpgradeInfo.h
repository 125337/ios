@interface MMFinderLiveFansGroupUpgradeInfo : NSObject
{
    BOOL _isFull; // +0x8
    NSString * _title; // +0x10
    NSString * _upgradeCondition; // +0x18
    NSString * _intimacyIncCount; // +0x20
    NSString * _upgradeStatus; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)upgradeCondition;
- (void)setUpgradeCondition:(id)arg1;
- (id)intimacyIncCount;
- (void)setIntimacyIncCount:(id)arg1;
- (id)upgradeStatus;
- (void)setUpgradeStatus:(id)arg1;
- (BOOL)isFull;
- (void)setIsFull:(BOOL)arg1;
- (void).cxx_destruct;
@end
