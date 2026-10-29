@interface TextStatusLikeDataItem : NSObject
{
    BOOL _notifyFlag; // +0x8
    BOOL _deleteFlag; // +0x9
    unsigned int _type; // +0xc
    unsigned int _likeCount; // +0x10
    unsigned int _createTime; // +0x14
    unsigned int _source; // +0x18
    unsigned long long _likeId; // +0x20
    NSString * _textStateId; // +0x28
    NSString * _hashname; // +0x30
    NSString * _encodeUsername; // +0x38
    NSString * _nickname; // +0x40
    NSString * _headImageURL; // +0x48
    unsigned long long _version; // +0x50
    unsigned long long _likeCountVersion; // +0x58
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)description;
- (BOOL)isValid;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)likeId;
- (void)setLikeId:(unsigned long long)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)notifyFlag;
- (void)setNotifyFlag:(BOOL)arg1;
- (BOOL)deleteFlag;
- (void)setDeleteFlag:(BOOL)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)hashname;
- (void)setHashname:(id)arg1;
- (id)encodeUsername;
- (void)setEncodeUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImageURL;
- (void)setHeadImageURL:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)likeCountVersion;
- (void)setLikeCountVersion:(unsigned long long)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end
