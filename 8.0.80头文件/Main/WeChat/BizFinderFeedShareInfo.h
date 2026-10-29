@interface BizFinderFeedShareInfo : NSObject
{
    NSString * _objectId; // +0x8
    NSString * _nonceId; // +0x10
    NSString * _exportId; // +0x18
    NSString * _username; // +0x20
    NSString * _nickname; // +0x28
    NSString * _avatarUrl; // +0x30
    NSString * _desc; // +0x38
    NSString * _coverUrl; // +0x40
    NSNumber * _mediaType; // +0x48
    NSNumber * _mediaWidth; // +0x50
    NSNumber * _mediaHeight; // +0x58
    NSNumber * _videoDuration; // +0x60
    NSString * _sessionBuffer; // +0x68
}
+ (id)makeWithObjectId:(id)arg1 nonceId:(id)arg2 exportId:(id)arg3 username:(id)arg4 nickname:(id)arg5 avatarUrl:(id)arg6 desc:(id)arg7 coverUrl:(id)arg8 mediaType:(id)arg9 mediaWidth:(id)arg10 mediaHeight:(id)arg11 videoDuration:(id)arg12 sessionBuffer:(id)arg13;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)mediaType;
- (void)setMediaType:(id)arg1;
- (id)mediaWidth;
- (void)setMediaWidth:(id)arg1;
- (id)mediaHeight;
- (void)setMediaHeight:(id)arg1;
- (id)videoDuration;
- (void)setVideoDuration:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end
