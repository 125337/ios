@interface WxpayPackagePushUpdateVerdict : NSObject
{
    NSString * _route; // +0x8
    NSString * _reason; // +0x10
    NSString * _appId; // +0x18
    NSDictionary * _data; // +0x20
}
- (id)initWithRoute:(id)arg1 reason:(id)arg2 appId:(id)arg3 data:(id)arg4;
- (id)logReason;
- (id)description;
- (id)route;
- (id)reason;
- (id)appId;
- (id)data;
- (void).cxx_destruct;
@end
