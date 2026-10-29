@interface MMStoreEmotionRewardCustomAmountViewController : MMUIViewController
{
    EmoticonStoreItem * m_storeItem; // +0x68
    EmotionRewardResponseInfo * m_rewardInfo; // +0x70
    StoreEmotionRewardLogicObject * m_rewardLogic; // +0x78
    MMUIScrollView * m_scrollView; // +0x80
    MMUIView * m_inputArea; // +0x88
    WCUITextField * m_inputTextField; // +0x90
    MMUIButton * m_rewardBtn; // +0x98
    NSString * m_lastInputValidInput; // +0xa0
    NSPredicate * m_regexPredicate; // +0xa8
}
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 RewardLogic:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initScrollView;
- (void)updateScrollView;
- (void)initInputAreaView;
- (double)updateInputAreaViewFromMarginTop:(double)arg1;
- (void)initRewardBtn;
- (double)updateRewardBtnFromMarginTop:(double)arg1;
- (void)textFieldBeginEditing:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)onClickRewardBtn;
- (void)onClose;
- (void).cxx_destruct;
@end

