@interface PublishedMpPoiProfileData : NSObject
{
    NSString * _coverUrl; // +0x8
    long long _coverWidth; // +0x10
    long long _coverHeight; // +0x18
    NSString * _title; // +0x20
    NSString * _nickName; // +0x28
    NSString * _avatar; // +0x30
}
+ (id)makeWithCoverUrl:(id)arg1 coverWidth:(long long)arg2 coverHeight:(long long)arg3 title:(id)arg4 nickName:(id)arg5 avatar:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (long long)coverWidth;
- (void)setCoverWidth:(long long)arg1;
- (long long)coverHeight;
- (void)setCoverHeight:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (void).cxx_destruct;
@end
