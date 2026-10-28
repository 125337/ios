@interface WCAdFinderLiveNoticeInfo : NSObject <NSCoding>
{
    NSString * _finderUsername; // +0x8
    NSString * _finderLiveNoticeId; // +0x10
    NSString * _finderAvatar; // +0x18
    NSString * _finderNickname; // +0x20
    NSString * _finderLiveTitle; // +0x28
    NSString * _finderLiveDesc; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderLiveNoticeId;
- (void)setFinderLiveNoticeId:(id)arg1;
- (id)finderAvatar;
- (void)setFinderAvatar:(id)arg1;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (id)finderLiveTitle;
- (void)setFinderLiveTitle:(id)arg1;
- (id)finderLiveDesc;
- (void)setFinderLiveDesc:(id)arg1;
- (void).cxx_destruct;
@end
