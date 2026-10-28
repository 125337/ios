@interface WCWebImageBrowserConfig : MMObject
{
    BOOL _enableBottomBar; // +0x8
    NSMutableArray * _arrImageSourceInfos; // +0x10
    NSMutableArray * _arrImageSearchInfos; // +0x18
}
- (id)init;
- (BOOL)enableBottomBar;
- (void)setEnableBottomBar:(BOOL)arg1;
- (id)arrImageSourceInfos;
- (void)setArrImageSourceInfos:(id)arg1;
- (id)arrImageSearchInfos;
- (void)setArrImageSearchInfos:(id)arg1;
- (void).cxx_destruct;
@end
