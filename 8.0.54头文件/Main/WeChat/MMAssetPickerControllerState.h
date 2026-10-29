@interface MMAssetPickerControllerState : NSObject
{
    BOOL _isPickerFinished; // +0x8
    BOOL _isUserActionChecked; // +0x9
    BOOL _isAsyncCompositeEnabled; // +0xa
    BOOL _canHybridSendAsset; // +0xb
    BOOL _disableVideoSelection; // +0xc
    BOOL _canSendVideoMessage; // +0xd
    BOOL _videoDirectToEdit; // +0xe
    BOOL _canSendMultiImage; // +0xf
    BOOL _canSendMultiVideo; // +0x10
    BOOL _isHidePreviewPlayButton; // +0x11
    BOOL _enforceUserActionCheck; // +0x12
    BOOL _enforceUserActionUnCheck; // +0x13
    BOOL _isUserActionSelected; // +0x14
    BOOL _isCameraButtonDisabled; // +0x15
    BOOL _buttonEnableAfterSend; // +0x16
    BOOL _shouldShowFinderMJPublisherTemplateComposingButton; // +0x17
    int _pickerScene; // +0x18
    int _maxImageCount; // +0x1c
    long long _stateSource; // +0x20
    NSArray * _selectedAssetInfoList; // +0x28
    NSDictionary * _pickerExtMap; // +0x30
    long long _selectedImageAssetCount; // +0x38
    long long _selectedVideoAssetCount; // +0x40
    double _selectedVideoSumDuration; // +0x48
    long long _userActionCheckScene; // +0x50
    NSString * _finishWording; // +0x58
    NSString * _pickerBottomFloatText; // +0x60
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity; // +0x68
}
- (void)setPickerScene:(int)arg1;
- (void)setStateSource:(long long)arg1;
- (void)setIsPickerFinished:(BOOL)arg1;
- (void)setSelectedAssetInfoList:(id)arg1;
- (void)setPickerExtMap:(id)arg1;
- (void)setSelectedImageAssetCount:(long long)arg1;
- (void)setSelectedVideoAssetCount:(long long)arg1;
- (void)setSelectedVideoSumDuration:(double)arg1;
- (void)setUserActionCheckScene:(long long)arg1;
- (void)setIsUserActionChecked:(BOOL)arg1;
- (void)setIsAsyncCompositeEnabled:(BOOL)arg1;
- (void)setUserActionTipsActivity:(id)arg1;
- (BOOL)isSelectionFull;
- (int)pickerScene;
- (long long)stateSource;
- (BOOL)isPickerFinished;
- (id)selectedAssetInfoList;
- (id)pickerExtMap;
- (long long)selectedImageAssetCount;
- (long long)selectedVideoAssetCount;
- (double)selectedVideoSumDuration;
- (long long)userActionCheckScene;
- (BOOL)isUserActionChecked;
- (BOOL)isAsyncCompositeEnabled;
- (int)maxImageCount;
- (void)setMaxImageCount:(int)arg1;
- (BOOL)canHybridSendAsset;
- (void)setCanHybridSendAsset:(BOOL)arg1;
- (BOOL)disableVideoSelection;
- (void)setDisableVideoSelection:(BOOL)arg1;
- (BOOL)canSendVideoMessage;
- (void)setCanSendVideoMessage:(BOOL)arg1;
- (BOOL)videoDirectToEdit;
- (void)setVideoDirectToEdit:(BOOL)arg1;
- (BOOL)canSendMultiImage;
- (void)setCanSendMultiImage:(BOOL)arg1;
- (BOOL)canSendMultiVideo;
- (void)setCanSendMultiVideo:(BOOL)arg1;
- (id)finishWording;
- (void)setFinishWording:(id)arg1;
- (BOOL)isHidePreviewPlayButton;
- (void)setIsHidePreviewPlayButton:(BOOL)arg1;
- (BOOL)enforceUserActionCheck;
- (void)setEnforceUserActionCheck:(BOOL)arg1;
- (BOOL)enforceUserActionUnCheck;
- (void)setEnforceUserActionUnCheck:(BOOL)arg1;
- (BOOL)isUserActionSelected;
- (void)setIsUserActionSelected:(BOOL)arg1;
- (BOOL)isCameraButtonDisabled;
- (void)setIsCameraButtonDisabled:(BOOL)arg1;
- (BOOL)buttonEnableAfterSend;
- (void)setButtonEnableAfterSend:(BOOL)arg1;
- (id)pickerBottomFloatText;
- (void)setPickerBottomFloatText:(id)arg1;
- (BOOL)shouldShowFinderMJPublisherTemplateComposingButton;
- (void)setShouldShowFinderMJPublisherTemplateComposingButton:(BOOL)arg1;
- (id)userActionTipsActivity;
- (void).cxx_destruct;
@end

