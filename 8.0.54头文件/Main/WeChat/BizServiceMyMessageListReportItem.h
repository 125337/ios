@interface BizServiceMyMessageListReportItem : NSObject
{
    BOOL _isStar; // +0x8
    int _actionType; // +0xc
    MMBaseSessionCellData * _cellData; // +0x10
    unsigned long long _timeStamp; // +0x18
}
- (id)cellData;
- (void)setCellData:(id)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (BOOL)isStar;
- (void)setIsStar:(BOOL)arg1;
- (void).cxx_destruct;
@end

