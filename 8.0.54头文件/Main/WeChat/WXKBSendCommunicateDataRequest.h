@interface WXKBSendCommunicateDataRequest : WXKBBaseRequest
{
    long long _type; // +0x8
    NSData * _data; // +0x10
    NSString * _action; // +0x18
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (void).cxx_destruct;
@end

