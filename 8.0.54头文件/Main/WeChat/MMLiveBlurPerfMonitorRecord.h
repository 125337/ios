@interface MMLiveBlurPerfMonitorRecord : MMLiveUIPerfMonitorRecord
{
    UIView * _blurView; // +0x8
}
+ (id)getMonitorBlurViewKey:(id)arg1;
- (id)initWithBlurView:(id)arg1;
- (BOOL)startMonitorIfNeed;
- (void)autoUpdateComposeRect;
- (BOOL)isBlurViewValid;
- (BOOL)isValid;
- (void)clear;
- (CGRect)currPresentFrame;
- (id)rootView;
- (id)getRecordDesc;
- (id)getUniqueKey;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (void).cxx_destruct;
@end

