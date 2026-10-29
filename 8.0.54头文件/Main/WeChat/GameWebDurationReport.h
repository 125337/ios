@interface GameWebDurationReport : MMObject
{
    BOOL _visible; // +0x8
    BOOL _gcReportIsVisible; // +0x9
    BOOL _gcReportIsViewDidAppear; // +0xa
    BOOL _hasEndReport; // +0xb
    BOOL _hasBeenVisible; // +0xc
    BOOL _beLiteApp; // +0xd
    UIViewController * _reportVc; // +0x10
    NSNumber * _ssIdNum; // +0x18
    unsigned long long _durationInterval; // +0x20
    unsigned long long _lastVisibleTime; // +0x28
    NSString * _reportVcDesc; // +0x30
    NSMutableString * _durationReportStr; // +0x38
    NSString * _url; // +0x40
    NSMutableDictionary * _externInfoDict; // +0x48
    unsigned long long _clientDurationGap; // +0x50
}
+ (unsigned long long)getMonotonicTimeInMillseconds;
- (id)initWithReportVc:(id)arg1 url:(id)arg2 fromLite:(BOOL)arg3;
- (id)initWithReportVc:(id)arg1 url:(id)arg2;
- (id)description;
- (void)onViewDidAppear;
- (void)onViewDidDisappear;
- (void)reportApplicationWillEnterForeground;
- (void)reportApplicationDidEnterBackground;
- (BOOL)checkShouldHandleBackgroundChange:(BOOL)arg1;
- (BOOL)checkShouldBeInStack;
- (BOOL)isVc:(id)arg1 childViewControllOfVc:(id)arg2;
- (void)markVisibleBegin:(id)arg1;
- (void)markVisibleEnd:(id)arg1;
- (void)markVisibleEnd:(id)arg1 fromDealloc:(BOOL)arg2;
- (void)reportOnVisibleChange:(BOOL)arg1 reason:(id)arg2;
- (void)viewDidBePoped;
- (void)onDealloc;
- (void)handleExit:(BOOL)arg1;
- (void)addAdditionReportDurationInfo:(id)arg1;
- (void)report27743WithUrl:(id)arg1 duration:(unsigned long long)arg2 externInfoDict:(id)arg3;
- (BOOL)checkFinderEntryLiteApp:(id)arg1;
- (void)report27743Data:(id)arg1 duration:(unsigned long long)arg2 externInfoDict:(id)arg3;
- (void)dealloc;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (id)reportVc;
- (void)setReportVc:(id)arg1;
- (id)ssIdNum;
- (void)setSsIdNum:(id)arg1;
- (unsigned long long)durationInterval;
- (void)setDurationInterval:(unsigned long long)arg1;
- (unsigned long long)lastVisibleTime;
- (void)setLastVisibleTime:(unsigned long long)arg1;
- (BOOL)gcReportIsVisible;
- (void)setGcReportIsVisible:(BOOL)arg1;
- (BOOL)gcReportIsViewDidAppear;
- (void)setGcReportIsViewDidAppear:(BOOL)arg1;
- (BOOL)hasEndReport;
- (void)setHasEndReport:(BOOL)arg1;
- (BOOL)hasBeenVisible;
- (void)setHasBeenVisible:(BOOL)arg1;
- (id)reportVcDesc;
- (void)setReportVcDesc:(id)arg1;
- (id)durationReportStr;
- (void)setDurationReportStr:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)externInfoDict;
- (void)setExternInfoDict:(id)arg1;
- (unsigned long long)clientDurationGap;
- (void)setClientDurationGap:(unsigned long long)arg1;
- (BOOL)beLiteApp;
- (void)setBeLiteApp:(BOOL)arg1;
- (void).cxx_destruct;
@end

