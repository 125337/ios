@interface GameVideoEditViewController : GameCenterNativeVc <EditVideoLogicItemDelegate, WAAppActionSheetDelegate, EditVideoOptionsDelegate>
{
    NSNumber * _videoFileSize; // +0x70
    BOOL _needExtUrl; // +0x78
    unsigned int _editFlag; // +0x7c
    int _choosId; // +0x80
    long long _from; // +0x88
    UIImage * _thumbImage; // +0x90
    long long _ssid; // +0x98
    unsigned long long _entranceType; // +0xa0
    id <GameVideoEditViewControllerDelegate> _videoEditDelegate; // +0xa8
    NSString * _videoPath; // +0xb0
    MMAsset * _asset; // +0xb8
    id /* block */ _callback; // +0xc0
    WAAppActionSheet * _actionSheet; // +0xc8
    NSDictionary * _options; // +0xd0
    EditVideoLogicItem * _editVideoLogicItem; // +0xd8
    unsigned long long _compostionStartTime; // +0xe0
    NSDictionary * _compositionProps; // +0xe8
}
+ (id)createWithVideoPath:(id)arg1 andDelegate:(id)arg2;
+ (id)createWithAsset:(id)arg1 andDelegate:(id)arg2;
+ (id)createWithCallback:(id)arg1 options:(id)arg2 callback:(id /* block */)arg3;
- (id)init;
- (void)viewDidLoad;
- (void)initThumbView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onClickEditVideoBackBarButton;
- (void)onClickEditVideoDoneBarButton;
- (id)currentViewController;
- (BOOL)directToolBars;
- (BOOL)inToolBars:(id)arg1;
- (id)getToolBars;
- (id)getButtonOptions;
- (float)getMinDuration;
- (float)getMaxDuration;
- (void)compositeVideo;
- (BOOL)isVideoSizeReachLimit;
- (void)ifAssetHasOriginVideoThenDo:(id /* block */)arg1 elseDo:(id /* block */)arg2;
- (void)handleForNotEdit;
- (void)handleForNotEditVideoFile:(id)arg1 andRename:(id)arg2;
- (void)handleForAsset:(id)arg1;
- (void)handleForVideoPath:(id)arg1;
- (void)handleCompoitionResult:(BOOL)arg1 outFile:(id)arg2;
- (void)handleForNotEditSucceed:(id)arg1;
- (void)handleCompoitionSucceed:(id)arg1;
- (void)notifyResult:(int)arg1 dic:(id)arg2;
- (void)notifyCompositionError:(int)arg1 errmsg:(id)arg2;
- (void)handleCompositionErrorWithMessage:(id)arg1;
- (void)handleUnkonwInputOnMainThread;
- (void)showCompositionFailedTips;
- (void)showActionSheet;
- (id)menubuttonTitleArray;
- (void)onWAActionSheetCancel;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (void)onWAActionSheetClickStateView;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetDidDismiss;
- (void)trackEventExplosured;
- (void)trackEventCancel;
- (void)trackEventNotEditResult:(id)arg1;
- (void)trackEventComposition:(BOOL)arg1 outputFile:(id)arg2;
- (void)setupEditFlag:(id)arg1;
- (id)buildCompositionProps:(id)arg1;
- (void)recordVideoEditAttrForPost:(id)arg1;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (unsigned long long)calculateCompostionDuration;
- (long long)from;
- (void)setFrom:(long long)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (long long)ssid;
- (void)setSsid:(long long)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (unsigned int)editFlag;
- (void)setEditFlag:(unsigned int)arg1;
- (id)videoEditDelegate;
- (void)setVideoEditDelegate:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (int)choosId;
- (void)setChoosId:(int)arg1;
- (BOOL)needExtUrl;
- (void)setNeedExtUrl:(BOOL)arg1;
- (id)editVideoLogicItem;
- (void)setEditVideoLogicItem:(id)arg1;
- (unsigned long long)compostionStartTime;
- (void)setCompostionStartTime:(unsigned long long)arg1;
- (id)compositionProps;
- (void)setCompositionProps:(id)arg1;
- (void).cxx_destruct;
@end
