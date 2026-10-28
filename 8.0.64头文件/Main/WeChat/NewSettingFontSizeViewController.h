@interface NewSettingFontSizeViewController : MMUIViewController <MMStepSliderDelegate, UITableViewDataSource, UITableViewDelegate>
{
    unsigned int m_curLevel; // +0x70
    double m_uiCurSize; // +0x78
    NSArray * m_allLevel; // +0x80
    UITableView * _tableView1; // +0x88
    MMStepSlider * _sliderView; // +0x90
    UIView * _bottomView; // +0x98
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)OnCancel;
- (void)OnSave;
- (void)saveFontChange;
- (void)configData;
- (void)configTableView1;
- (void)viewWillLayoutSubviews;
- (float)calculateSlidingWidth;
- (void)configBottomView;
- (void)viewDidLayoutSubviews;
- (void)mmSliderViewChange:(unsigned int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 isSender:(BOOL)arg2 andText:(id)arg3;
- (id)genMsgLabel:(id)arg1 isSender:(BOOL)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
@end
