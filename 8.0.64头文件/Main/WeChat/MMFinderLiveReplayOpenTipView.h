@interface MMFinderLiveReplayOpenTipView : MMPageSheetBaseView
{
    BOOL _isChargableLive; // +0x8
    BOOL _isMemberLive; // +0x9
    BOOL _isAgreementChecked; // +0xa
    BOOL _isMemberAgreementChecked; // +0xb
    BOOL _showMemberReplaySwitch; // +0xc
    unsigned long long _replayState; // +0x10
    id /* block */ _createReplayBlock; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _detailLabel; // +0x28
    MMUIImageView * _headImageView; // +0x30
    MMUIButton * _closeButton; // +0x38
    MMUIButton * _createReplayButton; // +0x40
    MMUIButton * _agreementCheckbox; // +0x48
    MMUIButton * _agreementButton; // +0x50
    MMUILabel * _introduceLabel; // +0x58
    MMUILabel * _memberLabel; // +0x60
    MMUIButton * _memberAgreementCheckbox; // +0x68
    MMUIButton * _memberAgreementButton; // +0x70
    UIView * _topSepelateLine; // +0x78
    UIView * _midSelateLine; // +0x80
    UIView * _bottomSepelateLine; // +0x88
    UIView * _contentView; // +0x90
    double _currentHeight; // +0x98
}
+ (double)getLiveReplayOpenTipViewHeight:(unsigned int)arg1 showMemberReplaySwitch:(BOOL)arg2 width:(double)arg3;
+ (double)getDetailHeight:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateData:(unsigned long long)arg1 isMemberLive:(BOOL)arg2 isChargableLive:(BOOL)arg3 showMemberReplaySwitch:(BOOL)arg4 height:(double)arg5;
- (void)createUI;
- (BOOL)canShowMemberLabel;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)introduceLabel;
- (id)memberLabel;
- (id)memberAgreementCheckbox;
- (id)memberAgreementButton;
- (id)topSepelateLine;
- (id)midSelateLine;
- (id)bottomSepelateLine;
- (id)contentView;
- (id)closeButton;
- (id)titleLabel;
- (id)detailLabel;
- (id)agreementCheckbox;
- (id)agreementButton;
- (id)createReplayButton;
- (id)headImageView;
- (void)onCheckBoxClicked;
- (void)onMemberCheckBoxClicked;
- (void)updateAccessbility;
- (void)updateMemberAccessbility;
- (void)createReplayAction;
- (void)leftButtonAction;
- (unsigned long long)replayState;
- (void)setReplayState:(unsigned long long)arg1;
- (BOOL)isChargableLive;
- (void)setIsChargableLive:(BOOL)arg1;
- (BOOL)isMemberLive;
- (void)setIsMemberLive:(BOOL)arg1;
- (id /* block */)createReplayBlock;
- (void)setCreateReplayBlock:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setCreateReplayButton:(id)arg1;
- (void)setAgreementCheckbox:(id)arg1;
- (void)setAgreementButton:(id)arg1;
- (BOOL)isAgreementChecked;
- (void)setIsAgreementChecked:(BOOL)arg1;
- (void)setIntroduceLabel:(id)arg1;
- (void)setMemberLabel:(id)arg1;
- (void)setMemberAgreementCheckbox:(id)arg1;
- (void)setMemberAgreementButton:(id)arg1;
- (BOOL)isMemberAgreementChecked;
- (void)setIsMemberAgreementChecked:(BOOL)arg1;
- (void)setTopSepelateLine:(id)arg1;
- (void)setMidSelateLine:(id)arg1;
- (void)setBottomSepelateLine:(id)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)showMemberReplaySwitch;
- (void)setShowMemberReplaySwitch:(BOOL)arg1;
- (double)currentHeight;
- (void)setCurrentHeight:(double)arg1;
- (void).cxx_destruct;
@end
