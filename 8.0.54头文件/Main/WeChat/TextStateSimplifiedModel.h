@interface TextStateSimplifiedModel : NSObject
{
    BOOL _isLiked; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _mediaType; // +0x10
    int _mediaWidth; // +0x14
    int _mediaHeight; // +0x18
    NSString * _textStateId; // +0x20
    NSString * _username; // +0x28
    NSString * _nickname; // +0x30
    NSString * _headImageUrl; // +0x38
    NSString * _desc; // +0x40
    NSString * _mediaThumbURL; // +0x48
    NSString * _backgroundImageId; // +0x50
    TextStateSimplifiedIcon * _icon; // +0x58
    NSString * _sourceId; // +0x60
    NSString * _sourceName; // +0x68
    NSString * _sourceIconURL; // +0x70
    unsigned long long _option; // +0x78
    NSString * _clusterId; // +0x80
    TextStateSimplifiedIcon * _clusterIcon; // +0x88
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)initWithTextState:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (id)mediaThumbURL;
- (void)setMediaThumbURL:(id)arg1;
- (int)mediaWidth;
- (void)setMediaWidth:(int)arg1;
- (int)mediaHeight;
- (void)setMediaHeight:(int)arg1;
- (id)backgroundImageId;
- (void)setBackgroundImageId:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)sourceIconURL;
- (void)setSourceIconURL:(id)arg1;
- (unsigned long long)option;
- (void)setOption:(unsigned long long)arg1;
- (id)clusterId;
- (void)setClusterId:(id)arg1;
- (id)clusterIcon;
- (void)setClusterIcon:(id)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (void).cxx_destruct;
@end

