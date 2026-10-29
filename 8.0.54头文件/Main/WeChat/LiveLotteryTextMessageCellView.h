@interface LiveLotteryTextMessageCellView : TextMessageCellView
{
    UIButton * m_sourceButton; // +0xa8
}
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)setViewModel:(id)arg1;
- (BOOL)touchIntoSelectCopyState;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
- (void)layoutContentView;
- (void)initSourceLabel;
- (void)tagWeAppLotteryLink:(id)arg1 messageWrap:(id)arg2;
- (void)reportClick:(unsigned long long)arg1 audience:(int)arg2 lotteryId:(id)arg3;
- (void)audienceClickLotteryDetail:(id)arg1 lotteryInfo:(id)arg2 taskId:(id)arg3 anchorNickName:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 lotteryType:(unsigned int)arg7 couponRecordInfo:(id)arg8;
- (void)anchorClickLotteryDetail:(id)arg1 lotteryInfo:(id)arg2 taskId:(id)arg3;
- (void).cxx_destruct;
@end

