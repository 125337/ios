@interface EmoticonUploadCgi : MMObject <EmojiUploadCgiDelegate>
{
    unsigned long long m_requestStartTime; // +0x8
    unsigned int _m_startPos; // +0x10
    unsigned int _m_totalLen; // +0x14
    EmoticonUploadInfoObj * m_uploadInfoObj; // +0x18
    id <EmoticonUploadCgiDelegate> _delegate; // +0x20
    NSString * _m_md5; // +0x28
    NSMutableSet * _cgiSets; // +0x30
}
- (id)initWithUploadInfoObj:(id)arg1;
- (BOOL)isActive;
- (BOOL)startRequest;
- (BOOL)internalRequestWithReuseCgi:(id)arg1;
- (void)callFailedDelegateWithReason:(unsigned long long)arg1;
- (void)onEmojiUploadBufferCgiFinished:(id)arg1 isSuccess:(BOOL)arg2 isEnd:(BOOL)arg3 activityId:(id)arg4;
- (id)uploadInfoObj;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)m_startPos;
- (void)setM_startPos:(unsigned int)arg1;
- (unsigned int)m_totalLen;
- (void)setM_totalLen:(unsigned int)arg1;
- (id)m_md5;
- (void)setM_md5:(id)arg1;
- (id)cgiSets;
- (void)setCgiSets:(id)arg1;
- (void).cxx_destruct;
@end

