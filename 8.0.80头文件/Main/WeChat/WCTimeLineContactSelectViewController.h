@interface WCTimeLineContactSelectViewController : MMUIViewController <ContactSelectViewDelegate>
{
    id <WCTimeLineContactSelectViewControllerDelegate> _delegate; // +0x70
}
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitleArea;
- (void)onCancelBack:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)getSafeSearchViewController;
- (void).cxx_destruct;
@end
