@interface MMLiveLotteryHistoryWinnerRecordCell : MMLiveLotteryWinnerRecordCell
{
    BOOL _enableToChat; // +0x70
    id /* block */ _chatButtonClickBlock; // +0x78
    UIButton * _finderChatButton; // +0x80
}
+ (double)seperateLineLeftMargin;
- (double)lotteryWinnerRecordCellInnerPadding;
- (double)lotteryWinnerRecordHeadImageViewRightMargin;
- (void)layoutUI;
- (void)initHeaderImageView;
- (void)initNameLabel;
- (void)layoutFinderChatButton;
- (void)onLotteryFinderChatButtonClicked:(id)arg1;
- (void)setEnableToChat:(BOOL)arg1;
- (BOOL)enableToChat;
- (id /* block */)chatButtonClickBlock;
- (void)setChatButtonClickBlock:(id /* block */)arg1;
- (id)finderChatButton;
- (void)setFinderChatButton:(id)arg1;
- (void).cxx_destruct;
@end
