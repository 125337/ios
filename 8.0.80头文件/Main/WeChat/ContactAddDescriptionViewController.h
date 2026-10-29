@interface ContactAddDescriptionViewController : NewRemarkViewController <ILinkEventExt, SendVerifyMsgBusinessCardImageDelegate>
{
    BOOL m_firstLoadRightBarButton; // +0x158
    BOOL _isInPageSheetMode; // +0x159
    BOOL _hasFilledDescription; // +0x15a
    BOOL _descSelectorIconExpo; // +0x15b
    BOOL _descSelectorIconClick; // +0x15c
    BOOL _descSelectorIconUsed; // +0x15d
    NSString * _helloMsg; // +0x160
    id <ContactAddDescriptionViewDelegate> _addDescriptionDelegate; // +0x168
    MMPageSheetAdapter * _pageSheetAdapter; // +0x170
    NSArray * _arrShowSectionType; // +0x178
    NSString * _pageSheetViewTitle; // +0x180
    id /* block */ _resultBlock; // +0x188
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (double)getDescViewOriginHeight;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)initCardImgList;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (id)getTableHeaderView;
- (long long)getNumberSections;
- (unsigned int)getSectionType:(long long)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)onPerformEdit;
- (void)reportProfileRecommendInFinisDone;
- (double)getContentViewY;
- (void)DismissRemarkViewControllerAnimated;
- (id)getRightBarButtonItem;
- (void)makeDescriptionCell:(id)arg1;
- (void)handleTextViewDidChangedRightBarButton;
- (BOOL)needSlideTextDescriptionBtn;
- (id)makeSlideTextDescriptionBtnView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)showSelectRemarkHalfScreen;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)helloMsg;
- (void)setHelloMsg:(id)arg1;
- (id)addDescriptionDelegate;
- (void)setAddDescriptionDelegate:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (id)arrShowSectionType;
- (void)setArrShowSectionType:(id)arg1;
- (id)pageSheetViewTitle;
- (void)setPageSheetViewTitle:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (BOOL)hasFilledDescription;
- (void)setHasFilledDescription:(BOOL)arg1;
- (BOOL)descSelectorIconExpo;
- (void)setDescSelectorIconExpo:(BOOL)arg1;
- (BOOL)descSelectorIconClick;
- (void)setDescSelectorIconClick:(BOOL)arg1;
- (BOOL)descSelectorIconUsed;
- (void)setDescSelectorIconUsed:(BOOL)arg1;
- (void).cxx_destruct;
@end
