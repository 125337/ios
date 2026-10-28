@interface WCFinderLiveGetDeliveryDetailRequestModel : NSObject
{
    unsigned int _cmdId; // +0x8
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    NSString * _finderUsername; // +0x18
    NSData * _liveCookies; // +0x20
    unsigned long long _objectId; // +0x28
    unsigned long long _liveId; // +0x30
    NSString * _objectNonceId; // +0x38
    NSData * _reqBuffer; // +0x40
}
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (unsigned int)cmdId;
- (void)setCmdId:(unsigned int)arg1;
- (id)reqBuffer;
- (void)setReqBuffer:(id)arg1;
- (void).cxx_destruct;
@end
