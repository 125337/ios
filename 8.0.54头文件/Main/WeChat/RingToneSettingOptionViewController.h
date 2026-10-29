@interface RingToneSettingOptionViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    BOOL m_ringRecommendSwitch; // +0x70
    id <RingRecommendSwitchDelegate> _delegate; // +0x78
}
+ (BOOL)getRingRecommendOption;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)reloadTableData;
- (void)ringVerifyIndividualRecommend:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

