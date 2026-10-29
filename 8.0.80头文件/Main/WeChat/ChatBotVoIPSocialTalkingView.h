@interface ChatBotVoIPSocialTalkingView : ChatBotVoIPTalkingView <MMPageSheetContainerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, MMPageSheetAdapterDelegate, CBTTalkingViewOptionalProtocol>
{
    BOOL _isViewAlive; // +0x8
    ChatBotMultiHeadImageRowView * _multiHeadImageRowView; // +0x10
    MMUIButton * _exitBtn; // +0x18
    UIImageView * _backgroundView; // +0x20
    UILabel * _socialTipsLabel; // +0x28
    UILabel * _chatHistoryLabel; // +0x30
    MMPageSheetAdapter * _pageSheetAdapter; // +0x38
    UITableView * _tableView; // +0x40
    MMPageSheetContainerViewController * _chatHistoryContentsheet; // +0x48
    NSMutableArray * _chatHistoryItems; // +0x50
}
- (unsigned int)getCurUIState;
- (void)layoutContentViews;
- (double)getHeadComponentBottom;
- (BOOL)needShowMultiHeadImageRow;
- (void)layoutBackground;
- (CGAffineTransform)getHeadViewTransform;
- (void)layoutchatHistoryContentsheet;
- (void)layoutChatHistoryLabel;
- (void)executeRepeatingTask;
- (void)onHistoryLabelClick:(id)arg1;
- (void)layoutExitBtn;
- (void)exitSocialPage;
- (void)layoutMultiHeadImageRowView;
- (void)layoutSocialTipslabel;
- (BOOL)isLastCellFullyVisible;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didMoveToWindow;
- (id)multiHeadImageRowView;
- (void)setMultiHeadImageRowView:(id)arg1;
- (id)exitBtn;
- (void)setExitBtn:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)socialTipsLabel;
- (void)setSocialTipsLabel:(id)arg1;
- (id)chatHistoryLabel;
- (void)setChatHistoryLabel:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)chatHistoryContentsheet;
- (void)setChatHistoryContentsheet:(id)arg1;
- (BOOL)isViewAlive;
- (void)setIsViewAlive:(BOOL)arg1;
- (id)chatHistoryItems;
- (void)setChatHistoryItems:(id)arg1;
- (void).cxx_destruct;
@end
