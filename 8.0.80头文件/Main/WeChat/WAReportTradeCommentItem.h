@interface WAReportTradeCommentItem : WAReportBaseItem
{
    unsigned int _action; // +0x8
    unsigned int _type; // +0xc
    NSString * _actionNote; // +0x10
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)actionNote;
- (void)setActionNote:(id)arg1;
- (void).cxx_destruct;
@end
