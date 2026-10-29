@interface WCFinderQRCodeViewModel : NSObject <WCFinderGetUserCgiDelegate>
{
    int _entryScene; // +0x8
    UIViewController * _viewCtrl; // +0x10
    id <WCFinderQRCodeViewModelDelegate> _delegate; // +0x18
    NSString * _fromUserName; // +0x20
    NSString * _talkerName; // +0x28
    NSString * _userQRCodeUrl; // +0x30
}
- (void)startHandleFinderUserQRCodeUrl:(id)arg1;
- (void)startHandleFinderFeedQRCodeUrl:(id)arg1 scanType:(unsigned int)arg2;
- (void)getUserCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getUserCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)parseFinderFeedQRCodeUrl:(id)arg1;
- (id)parseQuerysWithUrlString:(id)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (id)viewCtrl;
- (void)setViewCtrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)talkerName;
- (void)setTalkerName:(id)arg1;
- (id)userQRCodeUrl;
- (void)setUserQRCodeUrl:(id)arg1;
- (void).cxx_destruct;
@end
