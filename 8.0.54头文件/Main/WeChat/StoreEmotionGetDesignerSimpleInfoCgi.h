@interface StoreEmotionGetDesignerSimpleInfoCgi : StoreEmotionBaseCgi
{
    NSString * m_designerId; // +0x8
    id <StoreEmotionGetDesignerSimpleInfoCgiDelegate> _delegate; // +0x10
}
- (id)init;
- (BOOL)startRequestWithDesignerId:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

