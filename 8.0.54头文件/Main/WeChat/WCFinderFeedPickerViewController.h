@interface WCFinderFeedPickerViewController : MMUIViewController <WCFinderFeedPickerTabViewDelegate, WCFinderChooseFeedTabControllerDelegate, WCFinderSearchPickerViewControllerDelegate, WCFinderPostMgrDelegate, WCFinderPostDataItemExt, WCFinderFeedPickerPreviewListViewControllerDelegate>
{
    id <WCFinderFeedPickerViewControllerDelegate> _delegate; // +0x68
    UIScrollView * _scrollView; // +0x70
    WCFinderFeedPickerTabView * _tabView; // +0x78
    NSMutableArray * _tabControllers; // +0x80
    WCFinderFeedPickerParams * _params; // +0x88
    NSMutableArray * _tabViewModels; // +0x90
    unsigned long long _currentIndex; // +0x98
    WCFinderPostMgr * _postMgr; // +0xa0
    long long _publishTabIndex; // +0xa8
    id /* block */ _pushCustomVCBlock; // +0xb0
}
+ (id)defaultPickerForEmoticon;
+ (id)pickerForEmoticonInImagePicker;
+ (id)pickerForEmoticon:(BOOL)arg1;
+ (id)defaultPicker;
+ (id)defaultPickerWithParams:(id)arg1;
+ (id)pickerForWxSnsWithParams:(id)arg1;
+ (id)pickerForFinderMusicPublishWithParams:(id)arg1;
+ (id)pickerWithParams:(id)arg1 supportedTabTypes:(id)arg2;
+ (BOOL)canShowFinderPicker;
- (id)initWithTabViewModels:(id)arg1 params:(id)arg2;
- (id)getPickerSessionId;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (double)getSafeTopInset;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)setupSubView;
- (void)loadCurrentTabData;
- (id)navigationBarBackgroundColor;
- (int)currentType;
- (long long)currentEventCode;
- (long long)eventCodeWithTabType:(int)arg1;
- (void)reportDataWithActionType:(long long)arg1 eventCode:(long long)arg2 feedid:(id)arg3;
- (void)onReturn;
- (void)onCameraButtonTap;
- (void)onSearchButtonTap;
- (void)onLimitedClicked;
- (void)showPreviewWithViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)finderFeedPickerTabView:(id)arg1 didSelected:(long long)arg2;
- (void)finderSearchPickerViewController:(id)arg1 didSelectWithSearchModel:(id)arg2 index:(long long)arg3;
- (void)finderChooseFeedTabController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withTabModel:(id)arg3;
- (void)finderChooseFeedTabController:(id)arg1 willDisplayItemAtIndex:(long long)arg2 withTabModel:(id)arg3;
- (void)finderFeedPickerPreviewListViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)finderFeedPickerPreviewViewController:(id)arg1 didClickCancelWithDataItem:(id)arg2;
- (void)postMgrStartUpload;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (id)tabControllers;
- (id)postMgr;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (void)setTabControllers:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)tabViewModels;
- (void)setTabViewModels:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setPostMgr:(id)arg1;
- (long long)publishTabIndex;
- (void)setPublishTabIndex:(long long)arg1;
- (id /* block */)pushCustomVCBlock;
- (void)setPushCustomVCBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

