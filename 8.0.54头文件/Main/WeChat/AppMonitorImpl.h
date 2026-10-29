@interface AppMonitorImpl : NSObject
{
    atomic<bool> mIsAppInBackground; // +0x8
}
- (id)init;
- (void)ApplicationDidEnterForeground;
- (void)ApplicationDidEnterBackground;
- (BOOL)IsAppInBackground;
@end

