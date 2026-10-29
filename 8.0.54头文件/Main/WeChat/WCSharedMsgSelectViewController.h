@interface WCSharedMsgSelectViewController : MMUIViewController
{
    UIView * _headerView; // +0x68
    UIImageView * _downArrow; // +0x70
    MMUILabel * _tipsLabel; // +0x78
    MMUIButton * _resetButton; // +0x80
    MMUILabel * _reachMaxLabel; // +0x88
    UIView * _divLine; // +0x90
    MMUILabel * _debugLabel; // +0x98
    unsigned long long _multiSelectMsgTotalSize; // +0xa0
    unsigned long long _multiSelectMsgTextTotalSize; // +0xa8
    BOOL _bShowGuideTips; // +0xb0
    unsigned int _maxSelectCount; // +0xb4
    id /* block */ _resultBlock; // +0xb8
    unsigned long long _maxSelectBytes; // +0xc0
    ChatRoomHistoryShareStat * _stat; // +0xc8
    CContact * _contact; // +0xd0
    NSArray * _initialSelectedMsgs; // +0xd8
    BaseMsgContentLogicController * _logicController; // +0xe0
}
- (id)initWithContact:(id)arg1 selectedMsgs:(id)arg2 stat:(id)arg3;
- (void)showScrollTips;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)buildHeaderView;
- (void)layoutHeaderView;
- (void)updateInset;
- (void)buildMsgPreviewView;
- (void)registerMultiSelectCallBack:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)getTipsInfo;
- (id)getDebugInfo;
- (void)onDone:(id)arg1;
- (void)onResetSelect:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (unsigned int)maxSelectCount;
- (void)setMaxSelectCount:(unsigned int)arg1;
- (unsigned long long)maxSelectBytes;
- (void)setMaxSelectBytes:(unsigned long long)arg1;
- (id)stat;
- (BOOL)bShowGuideTips;
- (void)setBShowGuideTips:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)initialSelectedMsgs;
- (void)setInitialSelectedMsgs:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (void).cxx_destruct;
@end

