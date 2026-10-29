@interface MinimizeTaskExptService : MMUserService <MMServiceProtocol>
{
    BOOL _isOpenStarSwitch; // +0x8
    BOOL _isEnableStateTaskRestore; // +0x9
    BOOL _isEnableStateViewMarquee; // +0xa
    BOOL _isOpenStateFloatingViewCreateAnimation; // +0xb
    BOOL _isUploadStarEnable; // +0xc
    BOOL _shouldHideStarEntry; // +0xd
}
- (BOOL)shouldShowMinimizeEntryReddot:(id)arg1;
- (BOOL)minimizeEntryClicked;
- (void)markMinimizeEntryReddotAction:(id)arg1 action:(long long)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initMinimizeSwitches;
- (BOOL)isOpenStarSwitch;
- (void)setIsOpenStarSwitch:(BOOL)arg1;
- (BOOL)isEnableStateTaskRestore;
- (void)setIsEnableStateTaskRestore:(BOOL)arg1;
- (BOOL)isEnableStateViewMarquee;
- (void)setIsEnableStateViewMarquee:(BOOL)arg1;
- (BOOL)isOpenStateFloatingViewCreateAnimation;
- (void)setIsOpenStateFloatingViewCreateAnimation:(BOOL)arg1;
- (BOOL)isUploadStarEnable;
- (void)setIsUploadStarEnable:(BOOL)arg1;
- (BOOL)shouldHideStarEntry;
- (void)setShouldHideStarEntry:(BOOL)arg1;
@end
