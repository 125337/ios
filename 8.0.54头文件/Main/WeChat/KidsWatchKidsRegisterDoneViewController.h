@interface KidsWatchKidsRegisterDoneViewController : KidsWatchBaseViewController
{
    KidsWatchTipsCardView * _tipsCardView; // +0x68
    KidsWatchButton * _nextButton; // +0x70
    NSString * _nickName; // +0x78
    NSString * _openID; // +0x80
}
- (void)viewDidLoad;
- (void)setupWithData:(id)arg1;
- (void)initSubviews;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapCloseBarButtonItem;
- (void)onTapNextButton;
- (id)tipsCardView;
- (void)setTipsCardView:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)openID;
- (void)setOpenID:(id)arg1;
- (void).cxx_destruct;
@end

