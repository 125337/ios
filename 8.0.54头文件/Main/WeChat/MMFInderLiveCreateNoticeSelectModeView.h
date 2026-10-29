@interface MMFInderLiveCreateNoticeSelectModeView : UIView <MMFinderLivePaymentPolicyIntroViewDelegate, MMFinderLivePaymentSettingViewDelegate, SessionSelectControllerDelegate, WCActionSheetDelegate>
{
    BOOL _showFreePersion; // +0x8
    BOOL _isVisible; // +0x9
    BOOL _forbidLiveMemberMode; // +0xa
    BOOL _isSupportMemberFeatures; // +0xb
    BOOL _isPaidSelect; // +0xc
    BOOL _modMode; // +0xd
    unsigned int _curPriceInWecoin; // +0x10
    id /* block */ _selectModeChangeBlock; // +0x18
    id /* block */ _showFreePersionChangeBlock; // +0x20
    id /* block */ _paidLiveChooseMoneyBlock; // +0x28
    id /* block */ _paidModeCanSelectBlock; // +0x30
    id /* block */ _supportMemberFeaturesChangeBlock; // +0x38
    unsigned long long _selectMode; // +0x40
    unsigned long long _defaultSelectMode; // +0x48
    UIView * _contentView; // +0x50
    UIView * _selectModeView; // +0x58
    MMUILabel * _selectModeTitleLabel; // +0x60
    MMUILabel * _selectModeLabel; // +0x68
    UIView * _selectModeArrowView; // +0x70
    UIView * _moneyView; // +0x78
    UIView * _moneyLine; // +0x80
    MMUILabel * _moneyLabel; // +0x88
    UIImageView * _wecoinIconView; // +0x90
    MMCPLabel * _wecoinIconLabel; // +0x98
    UIImageView * _moneyArrowView; // +0xa0
    UIView * _freeView; // +0xa8
    UIView * _freeLine; // +0xb0
    MMUILabel * _freeLabel; // +0xb8
    MMUILabel * _freeDetailLabel; // +0xc0
    NSString * _digest; // +0xc8
    UIImageView * _freeArrowView; // +0xd0
    UIView * _memberFreeView; // +0xd8
    UIView * _memberFreeLine; // +0xe0
    MMUILabel * _memberFreeLabel; // +0xe8
    UISwitch * _memberFreeSwitch; // +0xf0
    UIView * _bottomLine; // +0xf8
    MMFinderLivePaymentSettingView * _paymentSettingPanel; // +0x100
    FinderLivePaymentSetting * _paymentSetting; // +0x108
}
- (id)initWithDefaultSelectMode:(unsigned long long)arg1 modMode:(BOOL)arg2;
- (id)getCurrentLivePaymentSetting;
- (void)updateSupportMemberFeatures:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)chooseShowView;
- (void)updateSelectModeLabelText;
- (void)updateSelectModeLabelOrigin;
- (void)changeSelectMode:(unsigned long long)arg1;
- (void)paidModeSelected;
- (void)updateSelectMode:(unsigned long long)arg1;
- (BOOL)updateShowFreePersion:(BOOL)arg1;
- (BOOL)isNoticeSelectModeValid:(unsigned long long)arg1;
- (BOOL)supportSelectMode;
- (BOOL)supportPaidModeToSelect;
- (BOOL)supportLiveMemberModeToSelect;
- (BOOL)supportLiveMemberFreeInPaidMode;
- (void)switchDidChanged:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewCancelButtonClicked;
- (void)createUI;
- (double)getCurrentViewHeight;
- (void)handleSelectModeViewGestureRecognizer:(id)arg1;
- (void)handleMoneyViewGestureRecognizer:(id)arg1;
- (void)handleFreeViewGestureRecognizer:(id)arg1;
- (void)selectContactsFromRecentSessions;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (double)heightForSessionSelectControllerChildPageSheet:(id)arg1 defaultHeight:(double)arg2;
- (id)lowerCellDigestWithContactUsernames:(id)arg1 chatroomUsernames:(id)arg2;
- (void)showPaymentSettingPanelAndLegalIntro;
- (void)showSelectModeActionSheet;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleUpdateCoin:(unsigned int)arg1;
- (void)updateViewWithModNotcie:(id)arg1;
- (void)changeCurPriceInWecoin:(unsigned int)arg1;
- (void)changePaymentSetting:(id)arg1;
- (BOOL)isMemberLiveEnabled;
- (BOOL)isSuperfanEnabled;
- (BOOL)isLiveThemeReminderSwitchOpen;
- (id)accessibilityLabel;
- (id /* block */)selectModeChangeBlock;
- (void)setSelectModeChangeBlock:(id /* block */)arg1;
- (id /* block */)showFreePersionChangeBlock;
- (void)setShowFreePersionChangeBlock:(id /* block */)arg1;
- (id /* block */)paidLiveChooseMoneyBlock;
- (void)setPaidLiveChooseMoneyBlock:(id /* block */)arg1;
- (id /* block */)paidModeCanSelectBlock;
- (void)setPaidModeCanSelectBlock:(id /* block */)arg1;
- (id /* block */)supportMemberFeaturesChangeBlock;
- (void)setSupportMemberFeaturesChangeBlock:(id /* block */)arg1;
- (unsigned long long)selectMode;
- (void)setSelectMode:(unsigned long long)arg1;
- (BOOL)showFreePersion;
- (void)setShowFreePersion:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)forbidLiveMemberMode;
- (void)setForbidLiveMemberMode:(BOOL)arg1;
- (unsigned long long)defaultSelectMode;
- (void)setDefaultSelectMode:(unsigned long long)arg1;
- (BOOL)isSupportMemberFeatures;
- (void)setIsSupportMemberFeatures:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)selectModeView;
- (void)setSelectModeView:(id)arg1;
- (id)selectModeTitleLabel;
- (void)setSelectModeTitleLabel:(id)arg1;
- (id)selectModeLabel;
- (void)setSelectModeLabel:(id)arg1;
- (id)selectModeArrowView;
- (void)setSelectModeArrowView:(id)arg1;
- (id)moneyView;
- (void)setMoneyView:(id)arg1;
- (id)moneyLine;
- (void)setMoneyLine:(id)arg1;
- (id)moneyLabel;
- (void)setMoneyLabel:(id)arg1;
- (id)wecoinIconView;
- (void)setWecoinIconView:(id)arg1;
- (id)wecoinIconLabel;
- (void)setWecoinIconLabel:(id)arg1;
- (id)moneyArrowView;
- (void)setMoneyArrowView:(id)arg1;
- (id)freeView;
- (void)setFreeView:(id)arg1;
- (id)freeLine;
- (void)setFreeLine:(id)arg1;
- (id)freeLabel;
- (void)setFreeLabel:(id)arg1;
- (id)freeDetailLabel;
- (void)setFreeDetailLabel:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)freeArrowView;
- (void)setFreeArrowView:(id)arg1;
- (id)memberFreeView;
- (void)setMemberFreeView:(id)arg1;
- (id)memberFreeLine;
- (void)setMemberFreeLine:(id)arg1;
- (id)memberFreeLabel;
- (void)setMemberFreeLabel:(id)arg1;
- (id)memberFreeSwitch;
- (void)setMemberFreeSwitch:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)paymentSettingPanel;
- (void)setPaymentSettingPanel:(id)arg1;
- (unsigned int)curPriceInWecoin;
- (void)setCurPriceInWecoin:(unsigned int)arg1;
- (id)paymentSetting;
- (void)setPaymentSetting:(id)arg1;
- (BOOL)isPaidSelect;
- (void)setIsPaidSelect:(BOOL)arg1;
- (BOOL)modMode;
- (void)setModMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

