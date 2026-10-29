@interface WCMomentsPageContext : NSObject
{
    BOOL _scrollViewMonitorEnabled; // +0x8
    BOOL _ImagePreview_showsImageSearching; // +0x9
    BOOL _canPlayLivePhotos; // +0xa
    BOOL _canAutoPlayLivePhotos; // +0xb
    BOOL _canSaveLivePhotos; // +0xc
    BOOL _livePhotoShowMutedMenu; // +0xd
    BOOL _showsLivePhotoIconInThumbView; // +0xe
    BOOL _supportCommentImagePost; // +0xf
    BOOL _supportCommentImageBrowse; // +0x10
    BOOL _supportCommentEmoticonPost; // +0x11
    BOOL _supportCommentEmoticonBrowse; // +0x12
    BOOL _supportCommentEmoticonOrImagePost; // +0x13
    BOOL _supportCommentEmoticonOrImageBrowse; // +0x14
    BOOL _supportAdCommentEmoticonImgPost; // +0x15
    BOOL _supportSwipingDownToBrowseCommentImage; // +0x16
    UIViewController * _rootViewController; // +0x18
    long long _microMerchantFoldStyle; // +0x20
    long long _bizMpImageDisplayStyle; // +0x28
    long long _sourceDisplayStyle; // +0x30
}
- (id)initWithRootViewController:(id)arg1;
- (void)updateDynamicConfigs;
- (BOOL)updateCommnetEmoticonAndImageConfigs;
- (void)updateSpecifiedDynamicConfigsWhenTimelineWillAppear;
- (id)description;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (BOOL)scrollViewMonitorEnabled;
- (long long)microMerchantFoldStyle;
- (long long)bizMpImageDisplayStyle;
- (void)setBizMpImageDisplayStyle:(long long)arg1;
- (BOOL)ImagePreview_showsImageSearching;
- (long long)sourceDisplayStyle;
- (void)setSourceDisplayStyle:(long long)arg1;
- (BOOL)canPlayLivePhotos;
- (BOOL)canAutoPlayLivePhotos;
- (BOOL)canSaveLivePhotos;
- (BOOL)livePhotoShowMutedMenu;
- (BOOL)showsLivePhotoIconInThumbView;
- (BOOL)supportCommentImagePost;
- (BOOL)supportCommentImageBrowse;
- (BOOL)supportCommentEmoticonPost;
- (BOOL)supportCommentEmoticonBrowse;
- (BOOL)supportCommentEmoticonOrImagePost;
- (BOOL)supportCommentEmoticonOrImageBrowse;
- (BOOL)supportAdCommentEmoticonImgPost;
- (BOOL)supportSwipingDownToBrowseCommentImage;
- (void).cxx_destruct;
@end
