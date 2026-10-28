@interface WCFinderJumpNativeCommonPostInfo : NSObject
{
    int _buttonAction; // +0x8
    int _postToComment; // +0xc
    NSString * _songId; // +0x10
    NSString * _audioId; // +0x18
    NSString * _miaojianMusicId; // +0x20
    NSString * _templateId; // +0x28
    NSString * _templateMusicId; // +0x30
    long long _templateType; // +0x38
    NSArray * _topics; // +0x40
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)enablePostToComment;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)audioId;
- (void)setAudioId:(id)arg1;
- (id)miaojianMusicId;
- (void)setMiaojianMusicId:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)templateMusicId;
- (void)setTemplateMusicId:(id)arg1;
- (long long)templateType;
- (void)setTemplateType:(long long)arg1;
- (id)topics;
- (void)setTopics:(id)arg1;
- (int)buttonAction;
- (void)setButtonAction:(int)arg1;
- (int)postToComment;
- (void)setPostToComment:(int)arg1;
- (void).cxx_destruct;
@end
