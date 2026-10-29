@interface EmoticonRecommendMessageContext : MMObject
{
    BOOL _isSelf; // +0x8
    BOOL _isRelatedEmoticon; // +0x9
    unsigned int _messageType; // +0xc
    unsigned int _appMessageInnerType; // +0x10
    unsigned int _payInfoSceneId; // +0x14
    unsigned int _createTime; // +0x18
    NSString * _extInfo; // +0x20
    NSString * _lensId; // +0x28
}
+ (id)messageContextsFromMessageWraps:(id)arg1;
- (id)initWithMessageWrap:(id)arg1;
- (id)panelEmojiCtx;
- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg1;
- (unsigned int)appMessageInnerType;
- (void)setAppMessageInnerType:(unsigned int)arg1;
- (unsigned int)payInfoSceneId;
- (void)setPayInfoSceneId:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (BOOL)isRelatedEmoticon;
- (void)setIsRelatedEmoticon:(BOOL)arg1;
- (void).cxx_destruct;
@end

