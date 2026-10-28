@interface MMFinderLiveFansGroupMemberSectionInfo : NSObject <NSCopying>
{
    unsigned int _memberCount; // +0x8
    unsigned int _superfanCount; // +0xc
    unsigned int _selfIntimacyToPrevRank; // +0x10
    unsigned int _selfRank; // +0x14
    NSMutableArray * _contactList; // +0x18
    unsigned long long _currentVersion; // +0x20
    FinderLiveContact * _selfContact; // +0x28
}
- (void)appendContactList:(id)arg1;
- (void)resetContactList:(id)arg1;
- (id)getFansGroupName;
- (BOOL)isEqual:(id)arg1;
- (id)contactList;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setContactList:(id)arg1;
- (unsigned int)memberCount;
- (void)setMemberCount:(unsigned int)arg1;
- (unsigned int)superfanCount;
- (void)setSuperfanCount:(unsigned int)arg1;
- (unsigned long long)currentVersion;
- (void)setCurrentVersion:(unsigned long long)arg1;
- (id)selfContact;
- (void)setSelfContact:(id)arg1;
- (unsigned int)selfIntimacyToPrevRank;
- (void)setSelfIntimacyToPrevRank:(unsigned int)arg1;
- (unsigned int)selfRank;
- (void)setSelfRank:(unsigned int)arg1;
- (void).cxx_destruct;
@end
