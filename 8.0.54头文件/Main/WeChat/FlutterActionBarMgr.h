@interface FlutterActionBarMgr : NSObject
{
    NSMapTable * _map; // +0x8
    double _statusBarHeight; // +0x10
    double _navigationBarMargin; // +0x18
}
+ (id)instance;
+ (void)putWithId:(id)arg1 helper:(id)arg2;
+ (id)getWithId:(id)arg1;
+ (void)removeWithId:(id)arg1;
- (id)init;
- (id)map;
- (void)setMap:(id)arg1;
- (double)statusBarHeight;
- (void)setStatusBarHeight:(double)arg1;
- (double)navigationBarMargin;
- (void)setNavigationBarMargin:(double)arg1;
- (void).cxx_destruct;
@end

