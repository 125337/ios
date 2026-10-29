@interface NewLifeGlobalFavoriteTransferInfo : NSObject
{
    unsigned int _commentScene; // +0x8
    unsigned int _userVersion; // +0xc
    NSString * _nonceId; // +0x10
    NSString * _sessionBuffer; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _contextId; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned int)commentScene;
- (void)setCommentScene:(unsigned int)arg1;
- (unsigned int)userVersion;
- (void)setUserVersion:(unsigned int)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (void).cxx_destruct;
@end

