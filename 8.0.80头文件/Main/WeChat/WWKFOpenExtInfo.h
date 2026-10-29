@interface WWKFOpenExtInfo : MMObject
{
    BOOL _bPopVCWhenLeave; // +0x8
    BOOL _showPageSheet; // +0x9
    BOOL _confirmInHalfScreen; // +0xa
    NSString * _entityId; // +0x10
    WWKFContentSendMsgInfo * _quickSendMsgInfo; // +0x18
    NSData * _spamContext; // +0x20
    NSString * _finderContext; // +0x28
}
- (id)entityId;
- (void)setEntityId:(id)arg1;
- (id)quickSendMsgInfo;
- (void)setQuickSendMsgInfo:(id)arg1;
- (BOOL)bPopVCWhenLeave;
- (void)setBPopVCWhenLeave:(BOOL)arg1;
- (id)spamContext;
- (void)setSpamContext:(id)arg1;
- (BOOL)showPageSheet;
- (void)setShowPageSheet:(BOOL)arg1;
- (id)finderContext;
- (void)setFinderContext:(id)arg1;
- (BOOL)confirmInHalfScreen;
- (void)setConfirmInHalfScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
