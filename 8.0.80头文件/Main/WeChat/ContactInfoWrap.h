@interface ContactInfoWrap : NSObject
{
    NSString * _nickname; // +0x8
    NSString * _headImgUrl; // +0x10
    NSString * _headImgPath; // +0x18
    NSString * _contactId; // +0x20
}
+ (id)makeWithNickname:(id)arg1 headImgUrl:(id)arg2 headImgPath:(id)arg3 contactId:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)headImgPath;
- (void)setHeadImgPath:(id)arg1;
- (id)contactId;
- (void)setContactId:(id)arg1;
- (void).cxx_destruct;
@end
