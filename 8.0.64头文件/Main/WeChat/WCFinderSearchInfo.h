@interface WCFinderSearchInfo : NSObject
{
    WCFinderContact * _contact; // +0x8
    NSString * _normalNickName; // +0x10
    NSMutableArray * _nameHightkeywords; // +0x18
    NSString * _normalSignature; // +0x20
    NSMutableArray * _signatureHightkeywords; // +0x28
    unsigned long long _fansCount; // +0x30
    unsigned long long _friendFollowCount; // +0x38
    NSString * _normalAuthProfession; // +0x40
    NSMutableArray * _professionHightkeywords; // +0x48
}
+ (id)finderSearchInfo:(id)arg1;
- (void)processHighlightNickName:(id)arg1;
- (void)processHighlightSignature:(id)arg1;
- (void)processHighlightProfession:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)normalNickName;
- (void)setNormalNickName:(id)arg1;
- (id)nameHightkeywords;
- (void)setNameHightkeywords:(id)arg1;
- (id)normalSignature;
- (void)setNormalSignature:(id)arg1;
- (id)signatureHightkeywords;
- (void)setSignatureHightkeywords:(id)arg1;
- (unsigned long long)fansCount;
- (void)setFansCount:(unsigned long long)arg1;
- (unsigned long long)friendFollowCount;
- (void)setFriendFollowCount:(unsigned long long)arg1;
- (id)normalAuthProfession;
- (void)setNormalAuthProfession:(id)arg1;
- (id)professionHightkeywords;
- (void)setProfessionHightkeywords:(id)arg1;
- (void).cxx_destruct;
@end
