@interface KvReportItem29480 : KvReportBaseItem
{
    unsigned int _actionType; // +0x8
    unsigned int _isRed; // +0xc
    unsigned int _redDotQuantity; // +0x10
    unsigned int _tlSessionId; // +0x14
    unsigned int _homeSessionId; // +0x18
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)isRed;
- (void)setIsRed:(unsigned int)arg1;
- (unsigned int)redDotQuantity;
- (void)setRedDotQuantity:(unsigned int)arg1;
- (unsigned int)tlSessionId;
- (void)setTlSessionId:(unsigned int)arg1;
- (unsigned int)homeSessionId;
- (void)setHomeSessionId:(unsigned int)arg1;
@end
