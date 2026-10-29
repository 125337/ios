@interface VoiceTransCommandLogic : NSObject
{
    NSString * _streamId; // +0x8
    NSString * _reqId; // +0x10
    id /* block */ _complete; // +0x18
}
- (void)dealloc;
- (void)getRecommandEmojiWithChatName:(id)arg1 complete:(id /* block */)arg2;
- (id)generateRequestWithType:(int)arg1 chatContext:(id)arg2;
- (id)buildChatContextWithChatName:(id)arg1;
- (void)onReceiveDownStreamFragment:(id)arg1;
- (id)parseEmojiInfoFromData:(id)arg1;
- (void)finishWithEmojiInfo:(id)arg1;
- (void)onOccurError:(int)arg1 info:(id)arg2;
- (void)releaseResource;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end
