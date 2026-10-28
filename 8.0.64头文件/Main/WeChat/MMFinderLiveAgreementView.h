@interface MMFinderLiveAgreementView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    BOOL _checkBoxSelected; // +0x8
    id <MMFinderLiveAgreementViewDelegate><ILinkEventExt> _delegate; // +0x10
    FinderLiveAgreementInfo * _agreementInfo; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    UIView * _backgroundView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _detailLabel; // +0x38
    MMUIButton * _agreementCheckbox; // +0x40
    RichTextView * _agreementText; // +0x48
    UIButton * _leaveBtn; // +0x50
    UIButton * _startBtn; // +0x58
}
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (id)getAgreementText;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)titleLabel;
- (id)detailLabel;
- (id)agreementText;
- (id)agreementCheckbox;
- (id)leaveBtn;
- (id)startBtn;
- (id)backgroundView;
- (id)liveTask;
- (void)onCheckBoxClicked;
- (void)onClickedLeave;
- (void)onClickedStart;
- (void)updateAccessbility;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)agreementInfo;
- (void)setAgreementInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)checkBoxSelected;
- (void)setCheckBoxSelected:(BOOL)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setAgreementCheckbox:(id)arg1;
- (void)setAgreementText:(id)arg1;
- (void)setLeaveBtn:(id)arg1;
- (void)setStartBtn:(id)arg1;
- (void).cxx_destruct;
@end
