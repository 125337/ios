@interface WCAppAuthTableViewCellData : NSObject
{
    BOOL _isBottomCell; // +0x8
    unsigned long long _rowIndex; // +0x10
    NSString * _appName; // +0x18
    NSString * _appTypeDesc; // +0x20
    NSString * _appScope; // +0x28
}
- (unsigned long long)rowIndex;
- (void)setRowIndex:(unsigned long long)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appTypeDesc;
- (void)setAppTypeDesc:(id)arg1;
- (id)appScope;
- (void)setAppScope:(id)arg1;
- (BOOL)isBottomCell;
- (void)setIsBottomCell:(BOOL)arg1;
- (void).cxx_destruct;
@end
