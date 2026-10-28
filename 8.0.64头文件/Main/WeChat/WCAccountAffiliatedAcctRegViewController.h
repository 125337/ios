@interface WCAccountAffiliatedAcctRegViewController : WCAccountBaseViewController <TakeOrSelectHeadImageLogicDelegate, WCBaseInfoItemDelegate>
{
    id <WCAccountAffiliatedAcctDelegate> _delegate; // +0x80
    MMUILabel * _titleView; // +0x88
    UIButton * _headImgBtn; // +0x90
    TakeOrSelectHeadImageLogic * _photoLogic; // +0x98
    WCAccountTextFieldItem * _textFieldNameItem; // +0xa0
    WCAgreementCheckBox * _checkBox; // +0xa8
    UIButton * _nextBtn; // +0xb0
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
