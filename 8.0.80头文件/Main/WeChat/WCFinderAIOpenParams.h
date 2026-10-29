@interface WCFinderAIOpenParams : NSObject
{
    NSString * _xml; // +0x8
    NSString * _exportId; // +0x10
    NSString * _feedId; // +0x18
    NSString * _nonceId; // +0x20
    NSDictionary * _reportDict; // +0x28
    WCFinderAIMessageOpenContext * _messageContext; // +0x30
}
- (id)xml;
- (void)setXml:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)reportDict;
- (void)setReportDict:(id)arg1;
- (id)messageContext;
- (void)setMessageContext:(id)arg1;
- (void).cxx_destruct;
@end
