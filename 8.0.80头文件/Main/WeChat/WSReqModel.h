@interface WSReqModel : NSObject
{
    long long _action; // +0x8
    NSString * _uin; // +0x10
    unsigned long long _startTime; // +0x18
    NSString * _pageName; // +0x20
    NSString * _clientInfo; // +0x28
    NSString * _data; // +0x30
}
- (id)init;
- (id)toJsonStr;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)uin;
- (void)setUin:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)clientInfo;
- (void)setClientInfo:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
