@interface WCMomentsStarGuideViewModel : NSObject
{
    BOOL _hasRecordedDisplay; // +0x8
    BOOL _hasRecordedClick; // +0x9
    BOOL _canShowStarGuideButton; // +0xa
    WCDataItem * _dataItem; // +0x10
    long long _scene; // +0x18
    NSString * _starGuideTips; // +0x20
    NSString * _starGuideActionTitle; // +0x28
}
- (id)initWithDataItem:(id)arg1 scene:(long long)arg2;
- (void)updateDataItem:(id)arg1;
- (BOOL)validateDevice;
- (BOOL)validateDataItem;
- (BOOL)validateMediaItemList;
- (BOOL)validateMediaItemListForScene;
- (BOOL)shouldShowStarGuideButton;
- (BOOL)hasActionRecordForShowingStarGuideButton;
- (void)willDisplayGuideButton;
- (void)didClickGuideButton;
- (id)dataItem;
- (long long)scene;
- (BOOL)canShowStarGuideButton;
- (void)setCanShowStarGuideButton:(BOOL)arg1;
- (id)starGuideTips;
- (void)setStarGuideTips:(id)arg1;
- (id)starGuideActionTitle;
- (void)setStarGuideActionTitle:(id)arg1;
- (void).cxx_destruct;
@end
