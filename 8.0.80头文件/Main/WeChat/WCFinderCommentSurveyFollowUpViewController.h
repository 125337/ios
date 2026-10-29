@interface WCFinderCommentSurveyFollowUpViewController : WCFinderCustomPanelSheet
{
    id <WCFinderCommentSurveyFollowUpVCDelegate> _delegate; // +0x70
    WCFinderCommentSurveyFollowUpViewModel * _viewModel; // +0x78
    UIImageView * _tipsImageView; // +0x80
    UILabel * _titleLabel; // +0x88
    UILabel * _questionnaireTitleLabel; // +0x90
    NSArray * _optionButtons; // +0x98
    UIButton * _submitButton; // +0xa0
}
- (id)initWithViewModel:(id)arg1;
- (id)loadContentView;
- (void)setupViewsInContentView:(id)arg1;
- (void)layoutContentView:(id)arg1;
- (void)showOnView:(id)arg1;
- (void)reloadLayout;
- (long long)closeButtonStyle;
- (void)updateOptionButtons;
- (void)onOptionButtonTapped:(id)arg1;
- (void)onSubmitButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tipsImageView;
- (void)setTipsImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)questionnaireTitleLabel;
- (void)setQuestionnaireTitleLabel:(id)arg1;
- (id)optionButtons;
- (void)setOptionButtons:(id)arg1;
- (id)submitButton;
- (void)setSubmitButton:(id)arg1;
- (void).cxx_destruct;
@end
