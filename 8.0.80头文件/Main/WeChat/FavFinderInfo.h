@interface FavFinderInfo : NSObject
{
    long long _favItemLocalId; // +0x8
    NSString * _tid; // +0x10
    NSString * _coverUrl; // +0x18
    NSNumber * _coverWidth; // +0x20
    NSNumber * _coverHeight; // +0x28
    NSString * _title; // +0x30
    NSString * _nickname; // +0x38
    NSString * _headUrl; // +0x40
    NSNumber * _videoDuration; // +0x48
    NSNumber * _likeCount; // +0x50
    NSNumber * _authIconType; // +0x58
    NSString * _authIconUrl; // +0x60
}
+ (id)makeWithFavItemLocalId:(long long)arg1 tid:(id)arg2 coverUrl:(id)arg3 coverWidth:(id)arg4 coverHeight:(id)arg5 title:(id)arg6 nickname:(id)arg7 headUrl:(id)arg8 videoDuration:(id)arg9 likeCount:(id)arg10 authIconType:(id)arg11 authIconUrl:(id)arg12;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)favItemLocalId;
- (void)setFavItemLocalId:(long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)coverWidth;
- (void)setCoverWidth:(id)arg1;
- (id)coverHeight;
- (void)setCoverHeight:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)videoDuration;
- (void)setVideoDuration:(id)arg1;
- (id)likeCount;
- (void)setLikeCount:(id)arg1;
- (id)authIconType;
- (void)setAuthIconType:(id)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (void).cxx_destruct;
@end
