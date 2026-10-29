@interface StoreEmoticonGetPersonalDesignerCGI : StoreEmotionBaseCgi
{
    unsigned int _designerUin; // +0x8
    id <StoreEmoticonGetPersonalDesignerCGIDelegate> _delegate; // +0x10
    SKBuiltinBuffer_t * _reqBuffer; // +0x18
    unsigned long long _retryCnt; // +0x20
}
- (id)init;
- (id)initWithBuf:(id)arg1 andDesignerUin:(unsigned int)arg2;
- (BOOL)startRequest:(BOOL)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reqBuffer;
- (void)setReqBuffer:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (unsigned long long)retryCnt;
- (void)setRetryCnt:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

