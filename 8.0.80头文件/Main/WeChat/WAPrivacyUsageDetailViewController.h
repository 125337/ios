@interface WAPrivacyUsageDetailViewController : ZZFLEXTableViewController <WAPrivacyUsageDetailCgiDelegate>
{
    WAContact * _contact; // +0x70
    NSMutableArray * _cellDataList; // +0x78
    unsigned int _minUpdateTime; // +0x80
    BOOL _hasNoMore; // +0x84
    UIView * _emptyView; // +0x88
    UILabel * _emptyLabel; // +0x90
    UIView * _footerView; // +0x98
}
- (id)init;
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)updateListData;
- (void)initEmptyView;
- (id)makeFooterMarginView;
- (void)initRefreshControl;
- (void)requestNextPagePrivacyUsageRecord;
- (void)getPrivacyUsageDetailCgi:(id)arg1 didGetUsageDetailRecordList:(id)arg2 hasNoMore:(BOOL)arg3;
- (void)getPrivacyUsageDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;
@end
