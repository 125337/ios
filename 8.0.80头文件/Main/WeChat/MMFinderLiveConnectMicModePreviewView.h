@interface MMFinderLiveConnectMicModePreviewView : UIView <MMLiveTaskMgrExt, MMLiveTrtcRenderingNotificationDelegate>
{
    BOOL _isAnchorMicMode; // +0x8
    unsigned long long _mode; // +0x10
    NSString * _focusedUserId; // +0x18
    unsigned long long _anchorMicIndex; // +0x20
    NSArray * _micUsers; // +0x28
    NSString * _anchorSdkUserId; // +0x30
    UIView * _previewContainerView; // +0x38
    UIView * _placeholderContainerView; // +0x40
    UIImageView * _placeholderGridView; // +0x48
    NSMutableArray * _placeholderViews; // +0x50
    MMFinderLiveConnectMicModePreviewItemView * _anchorPreviewView; // +0x58
    NSMutableDictionary * _previewViews; // +0x60
}
+ (CGRect)previewAreaSizeWithContainerSize:(CGSize)arg1 aspectRatio:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 anchorBackgroundImage:(id)arg2 orBackgroundImageUri:(id)arg3 avatarUri:(id)arg4 anchorSdkUserId:(id)arg5 isAnchorMicMode:(BOOL)arg6;
- (double)preferredAspectRatio;
- (void)updatePreviewWithAnchorMicIndex:(unsigned long long)arg1 micUsers:(id)arg2;
- (void)setMode:(unsigned long long)arg1 focusedUserId:(id)arg2;
- (void)layoutSubviews;
- (void)onLiveTask:(id)arg1 renderImageBuffer:(__CVBuffer *)arg2 forUserId:(id)arg3;
- (void)setupAnchorPreviewViewWithAnchorBackgroundImage:(id)arg1 orBackgroundImageUri:(id)arg2 avatarUri:(id)arg3;
- (void)addPreviewViewForUser:(id)arg1;
- (void)removePreviewViewForUserId:(id)arg1;
- (void)addPlaceholderView;
- (void)removePlaceholderView;
- (void)layoutForAnchorMicMode;
- (void)layoutForStandardMode;
- (void)layoutForStandardModeWithAspectRatio:(double)arg1;
- (void)layoutForFocusMode;
- (void)layoutForGrabMode;
- (void)layoutForLeadMode;
- (void)layoutPlaceholderViewsWithOccupiedIndices:(id)arg1 mode:(unsigned long long)arg2 totalSize:(CGSize)arg3;
- (BOOL)isAnchorMicMode;
- (void)setIsAnchorMicMode:(BOOL)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)focusedUserId;
- (void)setFocusedUserId:(id)arg1;
- (unsigned long long)anchorMicIndex;
- (void)setAnchorMicIndex:(unsigned long long)arg1;
- (id)micUsers;
- (void)setMicUsers:(id)arg1;
- (id)anchorSdkUserId;
- (void)setAnchorSdkUserId:(id)arg1;
- (id)previewContainerView;
- (void)setPreviewContainerView:(id)arg1;
- (id)placeholderContainerView;
- (void)setPlaceholderContainerView:(id)arg1;
- (id)placeholderGridView;
- (void)setPlaceholderGridView:(id)arg1;
- (id)placeholderViews;
- (void)setPlaceholderViews:(id)arg1;
- (id)anchorPreviewView;
- (void)setAnchorPreviewView:(id)arg1;
- (id)previewViews;
- (void)setPreviewViews:(id)arg1;
- (void).cxx_destruct;
@end
