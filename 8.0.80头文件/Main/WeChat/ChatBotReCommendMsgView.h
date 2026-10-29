@interface ChatBotReCommendMsgView : UIView
{
    BOOL _buttonBlurred; // +0x8
    id <ChatBotReCommendMsgViewDelegate> _delegate; // +0x10
    MMUILabel * _titleView; // +0x18
    UIFont * _buttonFont; // +0x20
    UIColor * _buttonBackgroundColor; // +0x28
    UIColor * _buttonTitleColor; // +0x30
    MMUIActivityIndicatorView * _loadingView; // +0x38
    NSArray * _recommendMsgList; // +0x40
    NSMutableArray * _msgBtnList; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateRecommendMsgList:(id)arg1;
- (void)layoutContentView;
- (void)layoutTitle;
- (void)setTitle:(id)arg1;
- (void)layoutLoadingView;
- (void)hideLoadingView;
- (void)layoutMsgs;
- (void)onMsgBtnClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)buttonFont;
- (void)setButtonFont:(id)arg1;
- (id)buttonBackgroundColor;
- (void)setButtonBackgroundColor:(id)arg1;
- (id)buttonTitleColor;
- (void)setButtonTitleColor:(id)arg1;
- (BOOL)buttonBlurred;
- (void)setButtonBlurred:(BOOL)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)recommendMsgList;
- (void)setRecommendMsgList:(id)arg1;
- (id)msgBtnList;
- (void)setMsgBtnList:(id)arg1;
- (void).cxx_destruct;
@end
