@interface EmoticonUploadPrepareCgi : StoreEmotionBaseCgi
{
    id <EmoticonUploadPrepareCgiDelegate> _delegate; // +0x8
}
- (id)initWithUploadInfo:(id)arg1 delegate:(id)arg2;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
