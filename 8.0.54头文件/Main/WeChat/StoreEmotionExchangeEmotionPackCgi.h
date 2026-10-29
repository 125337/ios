@interface StoreEmotionExchangeEmotionPackCgi : StoreEmotionBaseCgi
{
    EmoticonStoreItem * m_storeItem; // +0x8
    int _exchangeScence; // +0x10
    id <StoreEmotionExchangeEmotionPackCgiDelegate> _delegate; // +0x18
    EmoticonStoreItem * _item; // +0x20
}
- (id)init;
- (BOOL)startRequestWithStoreItem:(id)arg1 reqScene:(int)arg2 IsAutomatic:(BOOL)arg3;
- (BOOL)startRequestWithProductId:(id)arg1 reqScene:(int)arg2 IsAutomatic:(BOOL)arg3;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)exchangeScence;
- (void)setExchangeScence:(int)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end

