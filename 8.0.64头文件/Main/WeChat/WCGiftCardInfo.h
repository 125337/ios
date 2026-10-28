@interface WCGiftCardInfo : MMObject
{
    unsigned int _bizUin; // +0x8
    NSString * _orderId; // +0x10
}
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (void).cxx_destruct;
@end
