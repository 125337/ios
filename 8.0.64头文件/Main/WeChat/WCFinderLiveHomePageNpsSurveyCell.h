@interface WCFinderLiveHomePageNpsSurveyCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveNpsSurveyFeedVMDelegate, WCFinderLiveFeedGenericCardCellProtocol>
{
    BOOL _hasInit; // +0x8
    id <WCFinderLiveHomePageNpsSurveyCellDelegate> _delegate; // +0x10
    WCFinderLiveNpsSurveyFeedVM * _feedVM; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _containerView; // +0x28
    NSMutableArray * _optionButtons; // +0x30
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)updateWithFeedVM:(id)arg1;
- (void)layoutSubviews;
- (void)willDisplay;
- (void)optionButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (BOOL)hasInit;
- (void)setHasInit:(BOOL)arg1;
- (id)optionButtons;
- (void)setOptionButtons:(id)arg1;
- (void).cxx_destruct;
@end
