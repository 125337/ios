@interface ChatBotPrologueMsgHistoryThinkCell : ChatBotPrologueMsgBaseCell
{
    CMessageWrap * _msgWrap; // +0x8
    UIView * _msgCard; // +0x10
}
+ (double)CalCellHeightWithMsg:(id)arg1 contentWidth:(double)arg2;
+ (double)CalMsgCardHeightWithPrologueMsg:(id)arg1 contentWidth:(double)arg2;
+ (id)getMsgCardTitleWithMsgWrap:(id)arg1;
+ (id)getMsgCardDescWithMsgWrap:(id)arg1;
+ (id)getMsgCardLogoNameWithMsgWrap:(id)arg1;
+ (id)getMsgCardSourceNameWithMsgWrap:(id)arg1;
+ (id)GetMsgCardImageViewWithMsgWrap:(id)arg1;
- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutMsgCard;
- (void)onTapAction;
- (void)viewLinkMsg;
- (void)jumpWebView:(id)arg1 nsUrl:(id)arg2 nsRawUrl:(id)arg3;
- (void)viewFinderMsg;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)msgCard;
- (void)setMsgCard:(id)arg1;
- (void).cxx_destruct;
@end
