@interface WxpayKitReportHeldEvent : NSObject
{
    NSString * eventType; // +0x8
    WxpayKitReportContext * context; // +0x10
    WxpayKitReportEvent * row; // +0x18
    BOOL cold; // +0x20
}
- (void).cxx_destruct;
@end
