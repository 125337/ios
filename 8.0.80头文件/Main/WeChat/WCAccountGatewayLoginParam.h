@interface WCAccountGatewayLoginParam : NSObject
{
    NSData * _gatewayTicket; // +0x8
    NSMutableArray * _simTokenInfoList; // +0x10
    NSString * _protocalTitle; // +0x18
    NSString * _protocalUrl; // +0x20
}
- (id)gatewayTicket;
- (void)setGatewayTicket:(id)arg1;
- (id)simTokenInfoList;
- (void)setSimTokenInfoList:(id)arg1;
- (id)protocalTitle;
- (void)setProtocalTitle:(id)arg1;
- (id)protocalUrl;
- (void)setProtocalUrl:(id)arg1;
- (void).cxx_destruct;
@end
