@interface WCFinderVestAccountInfoViewController : MMUIViewController
{
    WCFinderContact * _contact; // +0x68
    UIScrollView * _scrollView; // +0x70
    FinderNewUserPrepareResponse * _userPrepareResponse; // +0x78
}
- (void)viewDidLoad;
- (void)requestUserPrepare;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)clickCloseAction;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)userPrepareResponse;
- (void)setUserPrepareResponse:(id)arg1;
- (void).cxx_destruct;
@end

