@interface WCGroupUndoneShareReport : WCGroupUndoneBaseReport
{
    BOOL _isOpenTodo; // +0x30
    BOOL _isShowEdu; // +0x31
    unsigned int _oper; // +0x34
}
- (void)report;
- (BOOL)isOpenTodo;
- (void)setIsOpenTodo:(BOOL)arg1;
- (BOOL)isShowEdu;
- (void)setIsShowEdu:(BOOL)arg1;
- (unsigned int)oper;
- (void)setOper:(unsigned int)arg1;
@end

