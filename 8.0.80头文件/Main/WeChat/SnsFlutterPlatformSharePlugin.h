@interface SnsFlutterPlatformSharePlugin : NSObject <MMScrollActionSheetDelegate, EditImageForwardAndEditLogicDelegate, MMFlutterPlugin, PlatformShareApi>
{
    id <SNSPluginDelegate> _delegate; // +0x8
    WCMomentsScrollActionSheet * _actionSheet; // +0x10
    WCMediaItem * _currentMediaItem; // +0x18
    WCDataItem * _currentDataItem; // +0x20
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)showMediaShareDialogItem:(id)arg1 error:(id *)arg2;
- (void)showMediaTranslatedDialogItem:(id)arg1 error:(id *)arg2;
- (void)showShareActionSheetWithItem:(id)arg1 isTranslated:(BOOL)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)handleSaveToAlbum;
- (void)handleForward;
- (void)handleAddFavorites;
- (void)handleEditImage;
- (void)handleTranslateActionSheetItem:(id)arg1;
- (id)convertToWCMediaItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)currentMediaItem;
- (void)setCurrentMediaItem:(id)arg1;
- (id)currentDataItem;
- (void)setCurrentDataItem:(id)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (void).cxx_destruct;
@end
