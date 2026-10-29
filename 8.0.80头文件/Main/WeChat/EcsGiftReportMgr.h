@interface EcsGiftReportMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _exposeList; // +0x8
}
- (void)reportCommonKV:(id)arg1 value:(int)arg2 extra:(id)arg3;
- (void)reportSendCgi:(int)arg1 extra:(id)arg2;
- (void)reportGiftMsg:(int)arg1 extra:(id)arg2;
- (void)reportGiftMsgExpose:(id)arg1;
- (void)reportGiftMsgClick:(id)arg1;
- (void)resetGiftMsgExposeStatus;
- (id)genAndSaveNewChattingGiftToolSessionId;
- (id)getChattingGiftToolSessionId;
- (void)markExposeChattingToolGiftHasReddot:(BOOL)arg1;
- (BOOL)getChattingToolGiftHasReddotWhenExpose;
- (void)reportGiftMsgMenuItemSelected:(id)arg1 orderId:(id)arg2;
- (void)reportGiftQuoteMsgSend:(id)arg1;
- (id)exposeList;
- (void)setExposeList:(id)arg1;
- (void).cxx_destruct;
@end
