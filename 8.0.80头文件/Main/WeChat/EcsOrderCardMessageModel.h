@interface EcsOrderCardMessageModel : NSObject
{
    NSString * _orderId; // +0x8
    unsigned long long _shareType; // +0x10
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (unsigned long long)shareType;
- (void)setShareType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
