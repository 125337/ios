@interface BaseMsgContentViewMultiSelectLogic : MMObject
{
    BOOL m_isFirstSelectMsg; // +0x8
    BOOL _multiSelectMsgIsTopFlag; // +0x9
    BOOL _bForbidMultiSelect; // +0xa
    unsigned int _clickSelectMsgTipBtnCount; // +0xc
    MultiSelectMsgTipView * _multiSelectMsgTipBtn; // +0x10
    NSMutableDictionary * _dicMultiSelectMsg; // +0x18
    CMessageWrap * _firstSelectMessageWrap; // +0x20
    CMessageWrap * _lastSelectMessageWrap; // +0x28
    NSMutableArray * _arrClickSelectMsgAutoSelected; // +0x30
    id <BaseMsgContentViewMultiSelectLogicDelegate> _delegate; // +0x38
    OrderedDictionary * _dicSelectedMsgLocalID; // +0x40
}
- (id)init;
- (void)initData;
- (void)handleMultiSelectTipButtonWithScrollDirection:(BOOL)arg1;
- (void)handleMultiSelectTipButtonScrollEnd;
- (void)resetMultiSelectMsgTipBtnTopLocation;
- (void)resetMultiSelectMsgTipBtnBottomLocation;
- (void)updateMultiSelectMsgTipBtnWithIsDisableStatus;
- (id)getTopMessagesInVisibleCells;
- (id)getLastMessagesInVisibleCells;
- (id)getLastMessagesInVisibleCells:(BOOL)arg1;
- (BOOL)checkHadTopDirectionMessages;
- (BOOL)checkHadBottomDirectionMessages;
- (id)getMessageWrapInVisibleCellWithMesLocalID:(id)arg1;
- (void)updateFirstAndLastSelectMessageWrap:(id)arg1 isAddSelect:(BOOL)arg2;
- (void)didClickMultiSelectMsgTipViewAutoSelect;
- (BOOL)checkNodeDataIsvalid:(id)arg1;
- (BOOL)checkMultiSelectedInfoCanAddMsg:(id)arg1;
- (void)handleMultiSelectedInfoAddMsg:(id)arg1 nsMsgLocalId:(id)arg2;
- (void)updateMultiSelectMsgButton;
- (void)handleRecordSelectedMsg:(id)arg1;
- (void)recordCanSelectedMsgWithScrollDirection:(BOOL)arg1;
- (void)recordCanSelectedMsgInMoreOperate:(id)arg1;
- (void)calculateSelectedMsgToMoreWithTopMessageWrap:(id)arg1 bottomMessageWrap:(id)arg2;
- (void)resetForbidMultiSelectAndMultiSelectMsgTipBtn;
- (BOOL)isMsg:(id)arg1 greaterThan:(id)arg2;
- (BOOL)isMsg:(id)arg1 lessThan:(id)arg2;
- (BOOL)isMultiSelected:(id)arg1;
- (id)getMsgTableView;
- (id)getViewController;
- (id)getArrSelectMsgLocalID;
- (id)getMultiSelectView;
- (id)getArrMessageNodeData;
- (id /* block */)getMultiSelectedChecker;
- (id /* block */)getMultiSelectedHandler;
- (id)getRoomHistoryStat;
- (double)getMultiSelectMsgTipBtnTopInTopLocation;
- (double)getMultiSelectMsgTipBtnBottomLocation;
- (unsigned int)getMultiSelectMaxCount;
- (void)reloadTableData;
- (BOOL)isInMultiSelectMsg;
- (void)setHistroyMessageForbidMultiSelect:(BOOL)arg1;
- (BOOL)multiSelectMsgIsTopFlag;
- (void)setMultiSelectMsgIsTopFlag:(BOOL)arg1;
- (BOOL)bForbidMultiSelect;
- (void)setBForbidMultiSelect:(BOOL)arg1;
- (id)multiSelectMsgTipBtn;
- (void)setMultiSelectMsgTipBtn:(id)arg1;
- (id)dicMultiSelectMsg;
- (void)setDicMultiSelectMsg:(id)arg1;
- (id)firstSelectMessageWrap;
- (void)setFirstSelectMessageWrap:(id)arg1;
- (id)lastSelectMessageWrap;
- (void)setLastSelectMessageWrap:(id)arg1;
- (unsigned int)clickSelectMsgTipBtnCount;
- (void)setClickSelectMsgTipBtnCount:(unsigned int)arg1;
- (id)arrClickSelectMsgAutoSelected;
- (void)setArrClickSelectMsgAutoSelected:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dicSelectedMsgLocalID;
- (void)setDicSelectedMsgLocalID:(id)arg1;
- (void).cxx_destruct;
@end
