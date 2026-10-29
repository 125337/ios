@interface WeVoipRciABTestInfo : NSObject
{
    BOOL _enableRci; // +0x8
}
+ (id)sharedInstance;
- (void)loadInfo;
- (BOOL)enableRci;
- (void)setEnableRci:(BOOL)arg1;
@end

