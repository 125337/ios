@interface StoreEmoticonGetDesginerIPListCgi : StoreEmotionBaseCgi
{
    unsigned int _designerUin; // +0x8
    id <StoreEmoticonGetDesginerIPListCgiDelegate> _delegate; // +0x10
    NSData * _context; // +0x18
}
- (id)init;
- (id)initWithContext:(id)arg1 andDesignerUin:(unsigned int)arg2;
- (BOOL)startRequest:(BOOL)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (void).cxx_destruct;
@end

