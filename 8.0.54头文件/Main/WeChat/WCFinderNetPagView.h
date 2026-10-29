@interface WCFinderNetPagView : PAGView
{
    BOOL _disableAutoUpate; // +0x8
    id <WCFinderNetPagViewDelegate> _delegate; // +0x10
    NSString * _defaultPagResPath; // +0x18
    NSString * _netPagUrl; // +0x20
    NSString * _targetMd5; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithDefaultPagResPath:(id)arg1 netPagURL:(id)arg2 targetMd5:(id)arg3;
- (void)loadFileWithPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableAutoUpate;
- (void)setDisableAutoUpate:(BOOL)arg1;
- (id)defaultPagResPath;
- (void)setDefaultPagResPath:(id)arg1;
- (id)netPagUrl;
- (void)setNetPagUrl:(id)arg1;
- (id)targetMd5;
- (void)setTargetMd5:(id)arg1;
- (void).cxx_destruct;
@end

