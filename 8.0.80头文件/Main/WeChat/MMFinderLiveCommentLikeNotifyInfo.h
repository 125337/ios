@interface MMFinderLiveCommentLikeNotifyInfo : NSObject
{
    unsigned long long _originalCommentType; // +0x8
    NSString * _originalCommentText; // +0x10
    CEmoticonWrap * _originalCommentEmoticonWrap; // +0x18
    UIColor * _notifyBackgroundColor; // +0x20
    NSString * _originalCommentClientMsgId; // +0x28
    NSString * _originalCommentLocalClientMsgId; // +0x30
}
- (id)initWithAppMsgLikeNotifyInfo:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)configWithOriginMsgKindLiveMsg:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)configWithOriginMsgKindLiveAppMsg:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (unsigned long long)originalCommentType;
- (void)setOriginalCommentType:(unsigned long long)arg1;
- (id)originalCommentText;
- (void)setOriginalCommentText:(id)arg1;
- (id)originalCommentEmoticonWrap;
- (void)setOriginalCommentEmoticonWrap:(id)arg1;
- (id)notifyBackgroundColor;
- (void)setNotifyBackgroundColor:(id)arg1;
- (id)originalCommentClientMsgId;
- (void)setOriginalCommentClientMsgId:(id)arg1;
- (id)originalCommentLocalClientMsgId;
- (void)setOriginalCommentLocalClientMsgId:(id)arg1;
- (void).cxx_destruct;
@end
