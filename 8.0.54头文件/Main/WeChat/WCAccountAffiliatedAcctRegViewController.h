@interface WCAccountAffiliatedAcctRegViewController : WCAccountBaseViewController <TakeOrSelectHeadImageLogicDelegate, WCBaseInfoItemDelegate>
{
    id <WCAccountAffiliatedAcctDelegate> _delegate; // +0x78
    MMUILabel * _titleView; // +0x80
    UIButton * _headImgBtn; // +0x88
    TakeOrSelectHeadImageLogic * _photoLogic; // +0x90
    WCAccountTextFieldItem * _textFieldNameItem; // +0x98
    WCAgreementCheckBox * _checkBox; // +0xa0
    UIButton * _nextBtn; // +0xa8
}
- (id)photoLogic;
- (BOOL)useRedesignStyle;
- (BOOL)useSheetView;
- (BOOL)autoHandleKeyboardEvent;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)initView;
- (void)checkNextBtnEnable;
- (void)showHeadImageOption;
- (void)onNext;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)onGetHeadImage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)headImgBtn;
- (void)setHeadImgBtn:(id)arg1;
- (void)setPhotoLogic:(id)arg1;
- (id)textFieldNameItem;
- (void)setTextFieldNameItem:(id)arg1;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (id)nextBtn;
- (void)setNextBtn:(id)arg1;
- (void).cxx_destruct;
@end

