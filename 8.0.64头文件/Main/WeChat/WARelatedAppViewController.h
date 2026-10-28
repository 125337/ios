@interface WARelatedAppViewController : ZZFLEXTableViewController
{
    NSString * _teamName; // +0x70
    NSMutableArray * _relateWeappList; // +0x78
}
- (id)initWithTeamName:(id)arg1 relatedAppList:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)onBackButtonClicked:(id)arg1;
- (void)dealloc;
- (void)setTeamName:(id)arg1;
- (void)setRelateWeappList:(id)arg1;
- (void)reloadListUI;
- (id)teamName;
- (id)relateWeappList;
- (void).cxx_destruct;
@end
