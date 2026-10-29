@interface WCTopicReportSessionInputItem : WCTopicReportBaseItem
{
    unsigned int _actionType; // +0x88
    unsigned int _content; // +0x8c
}
- (void)resetRequestId;
- (void)clearMembersAfterReport;
- (unsigned int)enterScene;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)content;
- (void)setContent:(unsigned int)arg1;
@end
