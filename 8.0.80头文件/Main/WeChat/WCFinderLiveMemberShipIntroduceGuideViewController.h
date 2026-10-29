@interface WCFinderLiveMemberShipIntroduceGuideViewController : MMUIViewController
{
    id /* block */ _becomeMemberConfirmCallback; // +0x70
    MMFinderLiveContentVM * _liveContentVM; // +0x78
    MMFinderLiveTask * _liveTask; // +0x80
    unsigned long long _memberPrice; // +0x88
    MMFinderLiveMemberTipsFullScreenView * _memberTipsFullScreenView; // +0x90
}
- (id)initWithFinderLiveContentVM:(id)arg1 memberPrice:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutMemberTipsFullScreenView;
- (id /* block */)becomeMemberConfirmCallback;
- (void)setBecomeMemberConfirmCallback:(id /* block */)arg1;
- (id)liveContentVM;
- (void)setLiveContentVM:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (unsigned long long)memberPrice;
- (void)setMemberPrice:(unsigned long long)arg1;
- (id)memberTipsFullScreenView;
- (void)setMemberTipsFullScreenView:(id)arg1;
- (void).cxx_destruct;
@end
