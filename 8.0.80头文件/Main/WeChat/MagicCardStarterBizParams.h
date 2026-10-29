@interface MagicCardStarterBizParams : NSObject
{
    BOOL _useCoverView; // +0x8
    BOOL _useVConsole; // +0x9
    NSString * _bizName; // +0x10
    NSArray * _jsApiNames; // +0x18
    NSArray * _jsApiGroupNames; // +0x20
    double _autoDestroyTime; // +0x28
    NSString * _wspkgPath; // +0x30
    NSString * _sclPublicServiceWspkgPath; // +0x38
}
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)jsApiNames;
- (void)setJsApiNames:(id)arg1;
- (id)jsApiGroupNames;
- (void)setJsApiGroupNames:(id)arg1;
- (double)autoDestroyTime;
- (void)setAutoDestroyTime:(double)arg1;
- (BOOL)useCoverView;
- (void)setUseCoverView:(BOOL)arg1;
- (BOOL)useVConsole;
- (void)setUseVConsole:(BOOL)arg1;
- (id)wspkgPath;
- (void)setWspkgPath:(id)arg1;
- (id)sclPublicServiceWspkgPath;
- (void)setSclPublicServiceWspkgPath:(id)arg1;
- (void).cxx_destruct;
@end
