@interface MMLiveSyndicateMemberDiff : NSObject
{
    unsigned long long _type; // +0x8
    WCFinderContact * _memberContact; // +0x10
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)memberContact;
- (void)setMemberContact:(id)arg1;
- (void).cxx_destruct;
@end
