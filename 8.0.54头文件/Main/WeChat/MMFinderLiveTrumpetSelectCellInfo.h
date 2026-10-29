@interface MMFinderLiveTrumpetSelectCellInfo : NSObject
{
    NSString * _title; // +0x8
    NSString * _subtitle; // +0x10
    NSString * _headerImageURL; // +0x18
    NSNumber * _accountType; // +0x20
    NSNumber * _privacyType; // +0x28
    NSNumber * _selectedAccountType; // +0x30
    NSNumber * _selectedPrivacyType; // +0x38
    unsigned long long _type; // +0x40
}
- (BOOL)isAccount;
- (BOOL)isCreation;
- (BOOL)isPrivacy;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)headerImageURL;
- (void)setHeaderImageURL:(id)arg1;
- (id)accountType;
- (void)setAccountType:(id)arg1;
- (id)privacyType;
- (void)setPrivacyType:(id)arg1;
- (id)selectedAccountType;
- (void)setSelectedAccountType:(id)arg1;
- (id)selectedPrivacyType;
- (void)setSelectedPrivacyType:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

