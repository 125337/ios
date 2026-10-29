@interface WCTableViewCellNormalConfig : WCTableViewCellBaseConfig
{
    BOOL _isLoading; // +0x8
    BOOL _isSelectionMode; // +0x9
    WCTableViewCellLeftConfig * _leftConfig; // +0x10
    WCTableViewCellRightConfig * _rightConfig; // +0x18
    WCTableViewCellCustomConfig * _customConfig; // +0x20
}
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isSelectionMode;
- (void)setIsSelectionMode:(BOOL)arg1;
- (id)leftConfig;
- (void)setLeftConfig:(id)arg1;
- (id)rightConfig;
- (void)setRightConfig:(id)arg1;
- (id)customConfig;
- (void)setCustomConfig:(id)arg1;
- (void).cxx_destruct;
@end

