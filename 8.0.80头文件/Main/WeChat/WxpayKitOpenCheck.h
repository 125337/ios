@interface WxpayKitOpenCheck : NSObject
{
    NSString * _scene; // +0x8
    long long _spanId; // +0x10
    long long _startedAtMs; // +0x18
    WxpayKitReportContext * _context; // +0x20
}
+ (id)beginForScene:(id)arg1 supplied:(id)arg2 params:(id)arg3;
- (void)finishWithCode:(id)arg1;
- (void)finishWithCode:(id)arg1 route:(id)arg2;
- (id)context;
- (void).cxx_destruct;
@end
