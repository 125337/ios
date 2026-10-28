@interface WCTableViewCellNormalConfig : WCTableViewCellBaseConfig
{
    BOOL _isLoading; // +0x8
    BOOL _isSelectionMode; // +0x9
    BOOL _needDefaultReport; // +0xa
    NSString * _pageName; // +0x10
    WCTableViewCellLeftConfig * _leftConfig; // +0x18
    WCTableViewCellRightConfig * _rightConfig; // +0x20
    WCTableViewCellCustomConfig * _customConfig; // +0x28
}
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isSelectionMode;
- (void)setIsSelectionMode:(BOOL)arg1;
- (BOOL)needDefaultReport;
- (void)setNeedDefaultReport:(BOOL)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)leftConfig;
- (void)setLeftConfig:(id)arg1;
- (id)rightConfig;
- (void)setRightConfig:(id)arg1;
- (id)customConfig;
- (void)setCustomConfig:(id)arg1;
- (void).cxx_destruct;
@end
