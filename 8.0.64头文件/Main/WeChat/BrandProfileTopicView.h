@interface BrandProfileTopicView : MMUIView
{
    id <BrandProfileTopicViewDelegate> _delegate; // +0x8
    BrandProfileTopicViewModel * _viewModel; // +0x10
    MMUIButton * _unfoldButton; // +0x18
    NSMutableArray * _topicButtonList; // +0x20
}
- (id)initWithViewModel:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateSubviewsUseViewModel;
- (void)onTopicButtonClicked:(id)arg1;
- (void)onUnfoldButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)unfoldButton;
- (void)setUnfoldButton:(id)arg1;
- (id)topicButtonList;
- (void)setTopicButtonList:(id)arg1;
- (void).cxx_destruct;
@end
