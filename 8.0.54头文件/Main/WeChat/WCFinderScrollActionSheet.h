@interface WCFinderScrollActionSheet : MMScrollActionSheet <WCFinderStreamProfileDragBarViewDelegate, WCFinderScrollActionGridViewDelegate, WCFinderLiveShareSceneProvider>
{
    BOOL _fromMoreButton; // +0x8
    BOOL _isAutoPlayNextFeedSwitchOn; // +0x9
    BOOL _displayGridStyle; // +0xa
    NSArray * _itemArrayConfig; // +0x10
    NSMutableArray * _recentContactArray; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    double _expTime; // +0x28
    long long _actionType; // +0x30
    id <WCFinderScrollActionSheetDelegate> _finderDelegate; // +0x38
    WCFinderScrollActionSheetDelegate * _delegateReplace; // +0x40
    unsigned long long _feedViewerScene; // +0x48
    WCFinderScrollActionGridView * _bodyGridView; // +0x50
}
+ (id)authorSortedFlags;
+ (id)viewerSortedFlags;
- (id)initWithContentVM:(id)arg1 feedViewerScene:(unsigned long long)arg2;
- (id)containerViewBlurBackgroundColor;
- (void)setupGridStyle;
- (id)_getFinderDisableColor;
- (id)init;
- (void)_setUpStandardHeaderViewWithContentVM:(id)arg1;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)arg1 screenWid:(double)arg2 scene:(unsigned long long)arg3 msgType:(unsigned int)arg4 innerAppMsgType:(unsigned int)arg5;
- (BOOL)shouldShowHeaderSpamTips:(id)arg1;
- (void)setItemArrayConfig:(id)arg1;
- (id)displaySectionName:(long long)arg1;
- (id)genMenuIconArray:(id)arg1 contentVM:(id)arg2;
- (BOOL)haveConfigOfItem:(unsigned long long)arg1;
- (BOOL)isAuthorSceneForContentVM:(id)arg1;
- (void)sortRowItems:(id)arg1 isAuthor:(BOOL)arg2;
- (void)addBackgroundColorMaskForRowItem:(id)arg1 maskColor:(id)arg2 resumeInterval:(float)arg3;
- (id)getRowItems:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)createMinimizeItemWithContentVM:(id)arg1;
- (BOOL)_itemEnable:(unsigned long long)arg1 contentVM:(id)arg2;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (BOOL)hasItem:(unsigned long long)arg1;
- (void)showInView:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (void)onGridViewWillDisplayItem:(id)arg1 forView:(id)arg2;
- (long long)liveShareScene;
- (id)itemArrayConfig;
- (id)recentContactArray;
- (void)setRecentContactArray:(id)arg1;
- (BOOL)fromMoreButton;
- (void)setFromMoreButton:(BOOL)arg1;
- (BOOL)isAutoPlayNextFeedSwitchOn;
- (void)setIsAutoPlayNextFeedSwitchOn:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (double)expTime;
- (void)setExpTime:(double)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (BOOL)displayGridStyle;
- (void)setDisplayGridStyle:(BOOL)arg1;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (id)delegateReplace;
- (void)setDelegateReplace:(id)arg1;
- (unsigned long long)feedViewerScene;
- (void)setFeedViewerScene:(unsigned long long)arg1;
- (id)bodyGridView;
- (void)setBodyGridView:(id)arg1;
- (void).cxx_destruct;
@end

