@interface WCFinderLiveChooseLiveModeView : MMPageSheetBaseView <WCFinderLiveChooseLiveModeViewModelDelegate>
{
    WCFinderLiveChooseLiveModeViewModel * _chooseOrientationViewModel; // +0x8
    BOOL _animateDismissOnSelection; // +0x10
    NSString * _title; // +0x18
    id <MMFinderLiveChooseLiveModeDelegate> _operationDelegate; // +0x20
    CAShapeLayer * _shapeLayer; // +0x28
    UIView * _contentView; // +0x30
    MMTableView * _tableView; // +0x38
    WCFinderLiveStarterSwitchModeItem * _switchModeItem; // +0x40
}
+ (id)generateDataItemListWithLiveMode:(unsigned long long)arg1 hideLandscpe:(BOOL)arg2 disableVideoLandscape:(BOOL)arg3 hideKTVLiveMode:(BOOL)arg4 redDotQueryBlock:(id /* block */)arg5 redDotExposeBlock:(id /* block */)arg6 redDotClickBlock:(id /* block */)arg7;
+ (id)generateAudioSubItemWithAudioSubType:(unsigned long long)arg1;
+ (id)getSelectedClarityDataItem:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateWithSwitchModeItem:(id)arg1 dataArray:(id)arg2;
- (void)updateWithSelectedSubItem:(id)arg1 dataArray:(id)arg2;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (double)getTableHeight;
- (id)tableView;
- (id)chooseOrientationViewModel;
- (id)contentView;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
- (void)selectStateWithLiveModeSubItem:(id)arg1 dataArray:(id)arg2;
- (void)pageSheetDidDisappear;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)animateDismissOnSelection;
- (void)setAnimateDismissOnSelection:(BOOL)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)switchModeItem;
- (void)setSwitchModeItem:(id)arg1;
- (void).cxx_destruct;
@end

