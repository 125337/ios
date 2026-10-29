@interface WxpayKitReportKeyState : NSObject
{
    long long sent; // +0x8
    long long windowStartMs; // +0x10
    long long suppressedCount; // +0x18
    long long firstSuppressedTMs; // +0x20
    long long maxCostMs; // +0x28
    NSString * msg; // +0x30
    NSString * stack; // +0x38
    WxpayKitReportContext * context; // +0x40
    NSString * layer; // +0x48
    NSString * code; // +0x50
}
- (id)init;
- (void).cxx_destruct;
@end
