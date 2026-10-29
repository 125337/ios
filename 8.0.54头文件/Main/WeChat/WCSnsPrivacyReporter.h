@interface WCSnsPrivacyReporter : NSObject
{
    NSMutableSet * _cachedMemeberSet; // +0x8
    NSMutableSet * _initialMemberSet; // +0x10
    NSMutableSet * _importFromGroupSet; // +0x18
    NSMutableSet * _importFromSelectSet; // +0x20
    NSMutableSet * _removedMemberSet; // +0x28
    unsigned int _startTime; // +0x30
    unsigned int _stayTimeInSec; // +0x34
    BOOL _bOutsider; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)beginSetting;
- (void)setInitailMembers:(id)arg1;
- (void)importFromGroupMembers:(id)arg1;
- (void)importFromSelectMembers:(id)arg1;
- (void)disselecteMember:(id)arg1;
- (id)formatUsrs:(id)arg1;
- (void)finishByCancel:(BOOL)arg1;
- (BOOL)bOutsider;
- (void)setBOutsider:(BOOL)arg1;
- (void).cxx_destruct;
@end

