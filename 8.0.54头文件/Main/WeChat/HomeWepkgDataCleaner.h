@interface HomeWepkgDataCleaner : MMObject <MMWebViewDelegate>
{
    BOOL _needReleasePreload; // +0x8
}
- (void)webViewDidReturn:(id)arg1;
- (BOOL)needReleasePreload;
- (void)setNeedReleasePreload:(BOOL)arg1;
@end

