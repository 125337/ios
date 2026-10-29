@interface StoreEmotionGetEmotionListCgi : StoreEmotionBaseCgi
{
    unsigned int m_reqType; // +0x8
    unsigned int m_scene; // +0xc
    unsigned int m_category; // +0x10
    SKBuiltinBuffer_t * m_reqBuf; // +0x18
    SKBuiltinBuffer_t * m_emotionListBuf; // +0x20
    id <StoreEmotionGetEmotionListCgiDelegate> _delegate; // +0x28
    NSString * _setKey; // +0x30
}
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2 Category:(unsigned int)arg3;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2 SetKey:(id)arg3;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2 ListBuffer:(id)arg3;
- (BOOL)hasMore;
- (BOOL)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)setKey;
- (void)setSetKey:(id)arg1;
- (void).cxx_destruct;
@end

