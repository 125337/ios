@interface WCAdConversionOnlineReportModel : NSObject
{
    int _ct; // +0x8
    int _os; // +0xc
    int _sdkSt; // +0x10
    NSString * _pkg; // +0x18
    NSString * _av; // +0x20
    NSString * _jsBundleVersion; // +0x28
    NSMutableArray * _events; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)init;
- (id)pkg;
- (void)setPkg:(id)arg1;
- (int)ct;
- (void)setCt:(int)arg1;
- (int)os;
- (void)setOs:(int)arg1;
- (int)sdkSt;
- (void)setSdkSt:(int)arg1;
- (id)av;
- (void)setAv:(id)arg1;
- (id)jsBundleVersion;
- (void)setJsBundleVersion:(id)arg1;
- (id)events;
- (void)setEvents:(id)arg1;
- (void).cxx_destruct;
@end
