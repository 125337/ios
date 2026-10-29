@interface WCPIPRenderObj : NSObject
{
    BOOL _isInForeground; // +0x8
    BOOL _isRootViewAppear; // +0x9
    NSString * _renderId; // +0x10
    NSString * _businessName; // +0x18
    long long _type; // +0x20
    CGRect _normalizedFrame; // +0x28
}
+ (id)createPIPBusinessId:(id)arg1 withBusinessName:(id)arg2;
+ (id)createPIPBusinessAttachId:(id)arg1;
- (BOOL)isNormalizedComplete;
- (BOOL)isNormalizedValid;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onRootViewDidAppear;
- (void)onRootViewWillDisAppear;
- (id)renderId;
- (void)setRenderId:(id)arg1;
- (id)businessName;
- (void)setBusinessName:(id)arg1;
- (CGRect)normalizedFrame;
- (void)setNormalizedFrame:(CGRect)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (BOOL)isInForeground;
- (void)setIsInForeground:(BOOL)arg1;
- (BOOL)isRootViewAppear;
- (void)setIsRootViewAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end

