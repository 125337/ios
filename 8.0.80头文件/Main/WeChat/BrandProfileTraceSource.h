@interface BrandProfileTraceSource : NSObject
{
    long long _bizUin; // +0x8
    long long _mid; // +0x10
    long long _idx; // +0x18
    long long _itemShowType; // +0x20
    NSString * _reqId; // +0x28
    NSString * _sessionId; // +0x30
}
- (id)init;
- (void)fillEnterInfoDict:(id)arg1;
- (long long)bizUin;
- (void)setBizUin:(long long)arg1;
- (long long)mid;
- (void)setMid:(long long)arg1;
- (long long)idx;
- (void)setIdx:(long long)arg1;
- (long long)itemShowType;
- (void)setItemShowType:(long long)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
