@interface WCPayPocketMoneyMsgItem : MMObject <NSCopying>
{
    BOOL _ishalfscreen; // +0x8
    BOOL _transparent; // +0x9
    NSString * _appid; // +0x10
    NSString * _apppath; // +0x18
    NSString * _appquery; // +0x20
    double _heightpercent; // +0x28
    NSString * _minversion; // +0x30
    NSString * _animin; // +0x38
    NSString * _animout; // +0x40
    NSString * _extradata; // +0x48
    NSString * _senderdigest; // +0x50
    NSString * _receiverdigest; // +0x58
    NSString * _sourceicon; // +0x60
    NSString * _paymsgid; // +0x68
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toXML;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)apppath;
- (void)setApppath:(id)arg1;
- (id)appquery;
- (void)setAppquery:(id)arg1;
- (BOOL)ishalfscreen;
- (void)setIshalfscreen:(BOOL)arg1;
- (BOOL)transparent;
- (void)setTransparent:(BOOL)arg1;
- (double)heightpercent;
- (void)setHeightpercent:(double)arg1;
- (id)minversion;
- (void)setMinversion:(id)arg1;
- (id)animin;
- (void)setAnimin:(id)arg1;
- (id)animout;
- (void)setAnimout:(id)arg1;
- (id)extradata;
- (void)setExtradata:(id)arg1;
- (id)senderdigest;
- (void)setSenderdigest:(id)arg1;
- (id)receiverdigest;
- (void)setReceiverdigest:(id)arg1;
- (id)sourceicon;
- (void)setSourceicon:(id)arg1;
- (id)paymsgid;
- (void)setPaymsgid:(id)arg1;
- (void).cxx_destruct;
@end
