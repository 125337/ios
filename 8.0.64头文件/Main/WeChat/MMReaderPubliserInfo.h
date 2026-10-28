@interface MMReaderPubliserInfo : NSObject <NSCopying>
{
    BOOL _showFollowButton; // +0x8
    unsigned int _headType; // +0xc
    unsigned int _nicknameType; // +0x10
    NSString * _headImg; // +0x18
    NSString * _nickname; // +0x20
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)showFollowButton;
- (void)setShowFollowButton:(BOOL)arg1;
- (unsigned int)headType;
- (void)setHeadType:(unsigned int)arg1;
- (id)headImg;
- (void)setHeadImg:(id)arg1;
- (unsigned int)nicknameType;
- (void)setNicknameType:(unsigned int)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (void).cxx_destruct;
@end
