@interface WeMagicCardStarterBizConfig : NSObject
{
    void * bizName; // +0x8
    void * delegate; // +0x18
    double autoDestroyTime; // +0x20
    BOOL useCoverView; // +0x28
    BOOL useVConsole; // +0x29
    void * jsApiNames; // +0x30
    void * jsApiGroupNames; // +0x38
    void * wspkgPath; // +0x40
    void * sclPublicServiceWspkgPath; // +0x50
}
+ (id)configWithBizName:(id)arg1 delegate:(id)arg2 autoDestroyTime:(double)arg3 useCoverView:(BOOL)arg4 useVConsole:(BOOL)arg5 jsApiNames:(id)arg6 jsApiGroupNames:(id)arg7 wspkgPath:(id)arg8 sclPublicServiceWspkgPath:(id)arg9;
- (id)bizName;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)autoDestroyTime;
- (BOOL)useCoverView;
- (BOOL)useVConsole;
- (id)jsApiNames;
- (id)jsApiGroupNames;
- (id)wspkgPath;
- (id)sclPublicServiceWspkgPath;
- (id)init;
- (void).cxx_destruct;
@end
