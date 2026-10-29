@interface WxaLiteApp : NSObject
{
    WxaLiteAppConfig * _config; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)checkInit;
- (void)setup:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
