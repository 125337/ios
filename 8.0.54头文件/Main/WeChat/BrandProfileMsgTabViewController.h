@interface BrandProfileMsgTabViewController : BrandProfileBaseTabViewController <BrandProfileTopicViewDelegate>
{
    id <BrandProfileMsgTabViewControllerDelegate> _msgTabDelegate; // +0x8
    BrandProfileTopicView * _topicView; // +0x10
    BrandProfileTopicViewModel * _topicViewModel; // +0x18
}
- (unsigned long long)tabType;
- (int)cgiReqActionType;
- (id)cgiRespMessageList:(id)arg1;
- (int)cgiRespFuncFlag;
- (id)tabTitle;
- (id)brandProfileCeilingTableView;
- (void)configTableView;
- (id)topicView;
- (void)reloadTopicViewWithInfoList:(id)arg1;
- (void)onTopicButtonClicked:(id)arg1;
- (void)onUnfoldButtonClicked;
- (id)msgTabDelegate;
- (void)setMsgTabDelegate:(id)arg1;
- (void)setTopicView:(id)arg1;
- (id)topicViewModel;
- (void)setTopicViewModel:(id)arg1;
- (void).cxx_destruct;
@end

