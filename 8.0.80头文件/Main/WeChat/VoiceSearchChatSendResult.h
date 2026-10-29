@interface VoiceSearchChatSendResult : NSObject
{
    unsigned int _localMessageID; // +0x8
    unsigned int _createTime; // +0xc
    NSString * _canonicalUsername; // +0x10
}
- (id)initWithCanonicalUsername:(id)arg1 messageWrap:(id)arg2;
- (id)canonicalUsername;
- (void)setCanonicalUsername:(id)arg1;
- (unsigned int)localMessageID;
- (void)setLocalMessageID:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
