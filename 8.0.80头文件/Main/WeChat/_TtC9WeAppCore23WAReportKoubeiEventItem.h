@interface _TtC9WeAppCore23WAReportKoubeiEventItem : WAReportBaseItem
{
    void * sessionBuffer; // +0x8
    long long actionType; // +0x18
    void * koubeiTitle; // +0x20
    unsigned long long source; // +0x30
}
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (id)koubeiTitle;
- (void)setKoubeiTitle:(id)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;
@end
