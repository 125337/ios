@interface WCFinderTingEntryFlutterVC : MMFlutterViewController
{
    FinderTingEntryPlugin * _finderTingEntryPlugin; // +0x70
    NSString * _tid; // +0x78
}
- (void)onClickTingEntryJump;
- (void)onClickTingEntryClose;
- (id)finderTingEntryPlugin;
- (void)setFinderTingEntryPlugin:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void).cxx_destruct;
@end
