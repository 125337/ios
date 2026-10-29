@interface WCFinderShortSampleViewController : MMPageSheetBaseViewController
{
    id <WCFinderShortSampleViewControllerDelegate> _delegate; // +0x70
    UIView * _containerView; // +0x78
    UIView * _cardView; // +0x80
    WCFinderContact * _contact; // +0x88
    double _configHeight; // +0x90
    WCFinderDataItem * _dataItem; // +0x98
}
- (id)initWithContact:(id)arg1 configHeight:(double)arg2 dataItem:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateDuoContentHeight;
- (void)setupPageSheetConfig;
- (void)setupSubViews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (double)configHeight;
- (void)setConfigHeight:(double)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
