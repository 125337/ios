@interface WAMiniToolAgentReportItem : WAReportBaseItem
{
    NSString * _action; // +0x8
    NSString * _actionNote; // +0x10
}
- (id)reportString;
- (id)action;
- (void)setAction:(id)arg1;
- (id)actionNote;
- (void)setActionNote:(id)arg1;
- (void).cxx_destruct;
@end
