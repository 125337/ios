@interface WAPrivacyUsageDetailViewController : ZZFLEXTableViewController <WAPrivacyUsageDetailCgiDelegate>
{
    WAContact * _contact; // +0x68
    NSMutableArray * _cellDataList; // +0x70
    unsigned int _minUpdateTime; // +0x78
    BOOL _hasNoMore; // +0x7c
    UIView * _emptyView; // +0x80
    UILabel * _emptyLabel; // +0x88
    UIView * _footerView; // +0x90
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

