@interface StoreEmoticonGetDesignerAcctInfoCgi : StoreEmotionBaseCgi
{
    unsigned int _designerUin; // +0x8
    id <StoreEmoticonGetDesignerAcctInfoCgiDelegate> _delegate; // +0x10
    NSString * _designerId; // +0x18
}
- (id)init;
- (BOOL)startRequestWithDesignerId:(id)arg1;
- (BOOL)startRequestWithDesignerUin:(unsigned int)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)designerId;
- (void)setDesignerId:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (void).cxx_destruct;
@end

