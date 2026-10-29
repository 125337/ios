@interface WCAdFinderFollowInfo : NSObject <NSCoding>
{
    NSString * _finderUsername; // +0x8
    NSString * _finderAvatar; // +0x10
    NSString * _finderNickname; // +0x18
    NSString * _finderDesc; // +0x20
    NSString * _finderFollowingBtnTitle; // +0x28
    NSString * _finderExportId; // +0x30
    NSString * _finderObjectNonceId; // +0x38
    long long _friendFollowCount; // +0x40
    long long _finderFeedCount; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderAvatar;
- (void)setFinderAvatar:(id)arg1;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (id)finderDesc;
- (void)setFinderDesc:(id)arg1;
- (id)finderFollowingBtnTitle;
- (void)setFinderFollowingBtnTitle:(id)arg1;
- (id)finderExportId;
- (void)setFinderExportId:(id)arg1;
- (id)finderObjectNonceId;
- (void)setFinderObjectNonceId:(id)arg1;
- (long long)friendFollowCount;
- (void)setFriendFollowCount:(long long)arg1;
- (long long)finderFeedCount;
- (void)setFinderFeedCount:(long long)arg1;
- (void).cxx_destruct;
@end

