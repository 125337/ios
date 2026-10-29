@interface ApplicationImpl : NSObject <ApplicationBase>
{
    ApplicationCallback * callback; // +0x8
}
+ (id)shareInstance;
- (id)init;
- (void)dealloc;
- (void)setCallback:(id)arg1;
- (BOOL)isForeground;
- (id)getDeviceInfo;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void).cxx_destruct;
@end
