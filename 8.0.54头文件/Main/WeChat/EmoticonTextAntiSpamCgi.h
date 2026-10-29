@interface EmoticonTextAntiSpamCgi : StoreEmotionBaseCgi
{
    BOOL m_shouldBlock; // +0x8
    NSString * _text; // +0x10
    id <EmoticonTextAntiSpamCgiDelegate> _delegate; // +0x18
}
- (id)init;
- (BOOL)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldBlock;
- (id)text;
- (void)setText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

