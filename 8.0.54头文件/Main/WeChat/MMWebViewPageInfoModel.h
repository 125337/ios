@interface MMWebViewPageInfoModel : NSObject
{
    BOOL _disableContextMenu; // +0x8
    BOOL _disableExposeAlert; // +0x9
    BOOL _hasSetDisableExposeAlert; // +0xa
    unsigned long long _lastClickTs; // +0x10
    CGPoint _lastClickPos; // +0x18
}
- (CGPoint)lastClickPos;
- (void)setLastClickPos:(CGPoint)arg1;
- (unsigned long long)lastClickTs;
- (void)setLastClickTs:(unsigned long long)arg1;
- (BOOL)disableContextMenu;
- (void)setDisableContextMenu:(BOOL)arg1;
- (BOOL)disableExposeAlert;
- (void)setDisableExposeAlert:(BOOL)arg1;
- (BOOL)hasSetDisableExposeAlert;
- (void)setHasSetDisableExposeAlert:(BOOL)arg1;
@end

