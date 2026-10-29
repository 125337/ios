@interface ContactsFilterState : NSObject <NSCopying>
{
    long long _permissionIndex; // +0x8
    long long _timeIndex; // +0x10
    long long _startYear; // +0x18
    long long _startMonth; // +0x20
    long long _endYear; // +0x28
    long long _endMonth; // +0x30
    long long _lastChatTimeIndex; // +0x38
    long long _lastChatStartYear; // +0x40
    long long _lastChatStartMonth; // +0x48
    long long _lastChatEndYear; // +0x50
    long long _lastChatEndMonth; // +0x58
    NSSet * _sourceSceneSet; // +0x60
    ContactTagData * _tagData; // +0x68
}
- (BOOL)isAllUnlimited;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)permissionIndex;
- (void)setPermissionIndex:(long long)arg1;
- (long long)timeIndex;
- (void)setTimeIndex:(long long)arg1;
- (long long)startYear;
- (void)setStartYear:(long long)arg1;
- (long long)startMonth;
- (void)setStartMonth:(long long)arg1;
- (long long)endYear;
- (void)setEndYear:(long long)arg1;
- (long long)endMonth;
- (void)setEndMonth:(long long)arg1;
- (long long)lastChatTimeIndex;
- (void)setLastChatTimeIndex:(long long)arg1;
- (long long)lastChatStartYear;
- (void)setLastChatStartYear:(long long)arg1;
- (long long)lastChatStartMonth;
- (void)setLastChatStartMonth:(long long)arg1;
- (long long)lastChatEndYear;
- (void)setLastChatEndYear:(long long)arg1;
- (long long)lastChatEndMonth;
- (void)setLastChatEndMonth:(long long)arg1;
- (id)sourceSceneSet;
- (void)setSourceSceneSet:(id)arg1;
- (id)tagData;
- (void)setTagData:(id)arg1;
- (void).cxx_destruct;
@end
