@interface APCheck : APBase <PBMessageObserverDelegate>
{
    int _wifiProtoType; // +0x70
    id <APCheckDelegate> _delegate; // +0x78
    PublicWifiCache * _aCache; // +0x80
    NSURLConnection * _connection; // +0x88
    NSMutableData * _respData; // +0x90
    long long _pingStatusCode; // +0x98
    long long _pingCostTimeStart; // +0xa0
}
+ (id)apCheckFromApBase:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isFromCacheAndValid;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 cache:(id)arg3 scene:(unsigned int)arg4 delegate:(id)arg5 wifiProtoType:(int)arg6;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 qrCode:(id)arg3 cache:(id)arg4 scene:(unsigned int)arg5 delegate:(id)arg6;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 qrCode:(id)arg3 cache:(id)arg4 scene:(unsigned int)arg5 delegate:(id)arg6 sessionKey:(id)arg7 wifiProtoType:(int)arg8;
- (id)description;
- (void)start;
- (void)initCache;
- (void)cancel;
- (void)didSuccess;
- (void)didFail;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)wifiProtoType;
- (void)setWifiProtoType:(int)arg1;
- (id)aCache;
- (void)setACache:(id)arg1;
- (id)connection;
- (void)setConnection:(id)arg1;
- (id)respData;
- (void)setRespData:(id)arg1;
- (long long)pingStatusCode;
- (void)setPingStatusCode:(long long)arg1;
- (long long)pingCostTimeStart;
- (void)setPingCostTimeStart:(long long)arg1;
- (void).cxx_destruct;
@end
