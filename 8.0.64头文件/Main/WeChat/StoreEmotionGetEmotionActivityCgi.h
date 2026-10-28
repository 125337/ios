@interface StoreEmotionGetEmotionActivityCgi : StoreEmotionBaseCgi
{
    NSString * m_activityId; // +0x8
    NSString * m_md5; // +0x10
    id <StoreEmotionGetEmotionActivityCgiDelegate> _delegate; // +0x18
    NSString * _linkId; // +0x20
}
- (id)init;
- (BOOL)startRequestWithActivityId:(id)arg1 md5:(id)arg2 linkId:(id)arg3;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)activityId;
- (id)md5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)linkId;
- (void)setLinkId:(id)arg1;
- (void).cxx_destruct;
@end
