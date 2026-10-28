@interface WebSearchCgiUserInfo : MMObject
{
    NSString * _requestId; // +0x8
    NSString * _tagId; // +0x10
    NSString * _subSessionId; // +0x18
    NSString * _widgetId; // +0x20
}
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)tagId;
- (void)setTagId:(id)arg1;
- (id)subSessionId;
- (void)setSubSessionId:(id)arg1;
- (id)widgetId;
- (void)setWidgetId:(id)arg1;
- (void).cxx_destruct;
@end
