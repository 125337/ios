@interface MsgMediaGroupCellModel : CommonMessageViewModel
{
    NSMutableArray * _nodeModelList; // +0x70
    unsigned long long _cellState; // +0x78
}
+ (BOOL)canCreateMessageViewModelWhilePreload;
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)genDisplayNodeModels:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)rowHeight;
- (BOOL)isShowSourceView;
- (BOOL)isShowSendingView;
- (BOOL)isShowSendFailView;
- (BOOL)shouldLayoutIfNeeded;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)dealloc;
- (void)reloadNodeModels;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)currentMessage;
- (void)setCurrentMessage:(id)arg1 animated:(BOOL)arg2;
- (void)setState:(unsigned long long)arg1;
- (id)accessibilityMessageType;
- (void)onMsgMediaGroup:(id)arg1 receiveMsgs:(id)arg2;
- (void)onMsgMediaGroup:(id)arg1 removeMsgs:(id)arg2;
- (id)nodeModelList;
- (void)setNodeModelList:(id)arg1;
- (unsigned long long)cellState;
- (void)setCellState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
