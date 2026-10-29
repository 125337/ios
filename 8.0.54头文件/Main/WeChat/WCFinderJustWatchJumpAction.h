@interface WCFinderJustWatchJumpAction : NSObject
{
    BOOL _isIgnore; // +0x8
    WCFinderJustWatchContoller * _watchCtrl; // +0x10
}
- (void)ignore;
- (void)loading;
- (void)fail;
- (void)complete;
- (id)watchCtrl;
- (void)setWatchCtrl:(id)arg1;
- (BOOL)isIgnore;
- (void)setIsIgnore:(BOOL)arg1;
- (void).cxx_destruct;
@end

