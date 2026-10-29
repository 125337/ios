@interface MMFinderLiveJSAPIOpenFinderProductParams : NSObject
{
    NSString * _appId; // +0x8
    unsigned long long _productId; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _ecSource; // +0x20
    NSString * _entranceGMsgID; // +0x28
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (void).cxx_destruct;
@end
