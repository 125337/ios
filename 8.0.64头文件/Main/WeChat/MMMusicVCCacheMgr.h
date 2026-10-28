@interface MMMusicVCCacheMgr : MMUserService <MMServiceProtocol>
{
    NSString * _curCachedKey; // +0x8
    MMMusicViewController * _curCachedVC; // +0x10
    BOOL _curCachedVCReusable; // +0x18
}
+ (id)openParamsWithMVModel:(id)arg1;
+ (id)openParamsWithMusicInfo:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)commonInit;
- (id)popUsableViewControllerAndMayNilIfConflictWithOpenParams:(id)arg1;
- (void)markSelfPopedOrDismissed:(id)arg1;
- (void)clearCachedVC;
- (BOOL)curCachedVCReusable;
- (void)setCurCachedVCReusable:(BOOL)arg1;
- (void).cxx_destruct;
@end
