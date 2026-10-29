@interface EnterpriseSearchContactCellData : NSObject
{
    unsigned int _matchField; // +0x8
    NSString * _userName; // +0x10
    NSString * _displayName; // +0x18
    NSString * _headImageUrl; // +0x20
    NSString * _matchText; // +0x28
    NSArray * _keywords; // +0x30
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (unsigned int)matchField;
- (void)setMatchField:(unsigned int)arg1;
- (id)matchText;
- (void)setMatchText:(id)arg1;
- (id)keywords;
- (void)setKeywords:(id)arg1;
- (void).cxx_destruct;
@end

