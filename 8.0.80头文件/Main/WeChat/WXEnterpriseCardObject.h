@interface WXEnterpriseCardObject : NSObject
{
    NSString * _cardInfo; // +0x8
    long long _msgType; // +0x10
}
+ (id)object;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (long long)msgType;
- (void)setMsgType:(long long)arg1;
- (void).cxx_destruct;
@end
