@interface WCOutPhoneContact : NSObject
{
    BOOL isWeChatFriend; // +0x8
    NSString * nickname; // +0x10
    NSString * nicknamePinYin; // +0x18
    NSString * nicknamePinYinShort; // +0x20
    NSDictionary * phoneWithLabels; // +0x28
    NSDictionary * phoneToMd5Dic; // +0x30
    NSString * mmNickname; // +0x38
    NSString * mmUsername; // +0x40
    NSString * bigHeadImgUrl; // +0x48
    NSString * smallHeadImgUrl; // +0x50
    NSString * mainCountryCode; // +0x58
    NSString * mainPurePhoneNum; // +0x60
}
- (id)initWithMMPhoneContact:(id)arg1;
- (id)initWithWCOutRecentCallItem:(id)arg1;
- (id)initWithWCOutPhoneContact:(id)arg1;
- (BOOL)isWeChatUser;
- (BOOL)isAdressBookContact;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)nicknamePinYin;
- (void)setNicknamePinYin:(id)arg1;
- (id)nicknamePinYinShort;
- (void)setNicknamePinYinShort:(id)arg1;
- (id)phoneWithLabels;
- (void)setPhoneWithLabels:(id)arg1;
- (id)phoneToMd5Dic;
- (void)setPhoneToMd5Dic:(id)arg1;
- (id)mmNickname;
- (void)setMmNickname:(id)arg1;
- (id)mmUsername;
- (void)setMmUsername:(id)arg1;
- (id)bigHeadImgUrl;
- (void)setBigHeadImgUrl:(id)arg1;
- (id)smallHeadImgUrl;
- (void)setSmallHeadImgUrl:(id)arg1;
- (id)mainCountryCode;
- (void)setMainCountryCode:(id)arg1;
- (id)mainPurePhoneNum;
- (void)setMainPurePhoneNum:(id)arg1;
- (BOOL)isWeChatFriend;
- (void)setIsWeChatFriend:(BOOL)arg1;
- (void).cxx_destruct;
@end
