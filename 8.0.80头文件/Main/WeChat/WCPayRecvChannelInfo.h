@interface WCPayRecvChannelInfo : NSObject
{
    int _channelType; // +0x8
    NSString * _bindSerial; // +0x10
}
+ (id)infoWithChannelType:(int)arg1 bindSerial:(id)arg2;
- (int)channelType;
- (void)setChannelType:(int)arg1;
- (id)bindSerial;
- (void)setBindSerial:(id)arg1;
- (void).cxx_destruct;
@end
