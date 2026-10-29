@interface WAReportWebViewMenuActionItem : WAReportBaseItem
{
    unsigned int _actionTimeStamp; // +0x8
    int _errcode; // +0xc
    unsigned long long _actionType; // +0x10
    NSString * _actionNote; // +0x18
    unsigned long long _actionResult; // +0x20
}
- (id)reportString;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)actionNote;
- (void)setActionNote:(id)arg1;
- (unsigned int)actionTimeStamp;
- (void)setActionTimeStamp:(unsigned int)arg1;
- (unsigned long long)actionResult;
- (void)setActionResult:(unsigned long long)arg1;
- (int)errcode;
- (void)setErrcode:(int)arg1;
- (void).cxx_destruct;
@end

