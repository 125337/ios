@interface WAJSEventHandler_setTabBarItem : WAJSEventHandler_BaseEvent <MMImageLoaderObserver>
{
    BOOL _download; // +0x8
    long long _iconIndex; // +0x10
    NSString * _failMsg; // +0x18
    NSString * _text; // +0x20
    NSString * _iconPath; // +0x28
    UIImage * _iconImage; // +0x30
    NSString * _selectIconPath; // +0x38
    UIImage * _selectIconImage; // +0x40
}
- (void)handleJSEvent:(id)arg1;
- (id)retreiveImage:(id)arg1;
- (void)stopDownloadImage:(id)arg1;
- (void)setItem:(id)arg1 webview:(id)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (long long)iconIndex;
- (void)setIconIndex:(long long)arg1;
- (BOOL)download;
- (void)setDownload:(BOOL)arg1;
- (id)failMsg;
- (void)setFailMsg:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)selectIconPath;
- (void)setSelectIconPath:(id)arg1;
- (id)selectIconImage;
- (void)setSelectIconImage:(id)arg1;
- (void).cxx_destruct;
@end
