@interface MMAssetPickerControllerState : NSObject
{
    BOOL _isPickerFinished; // +0x8
    BOOL _hasOrderSelectedInPreview; // +0x9
    BOOL _isUserActionChecked; // +0xa
    BOOL _isAsyncCompositeEnabled; // +0xb
    BOOL _canHybridSendAsset; // +0xc
    BOOL _disableVideoSelection; // +0xd
    BOOL _canSendVideoMessage; // +0xe
    BOOL _videoDirectToEdit; // +0xf
    BOOL _canSendMultiImage; // +0x10
    BOOL _canSendMultiVideo; // +0x11
    BOOL _isHidePreviewPlayButton; // +0x12
    BOOL _enforceUserActionCheck; // +0x13
    BOOL _enforceUserActionUnCheck; // +0x14
    BOOL _isUserActionSelected; // +0x15
    BOOL _isCameraButtonDisabled; // +0x16
    BOOL _buttonEnableAfterSend; // +0x17
    BOOL _shouldHidePickerBottomFloatIcon; // +0x18
    BOOL _shouldShowPickerBottomFloatViewInitialized; // +0x19
    BOOL _shouldShowFinderMJPublisherTemplateComposingButton; // +0x1a
    int _pickerScene; // +0x1c
    int _maxImageCount; // +0x20
    long long _stateSource; // +0x28
    NSArray * _selectedAssetInfoList; // +0x30
    NSDictionary * _pickerExtMap; // +0x38
    long long _selectedImageAssetCount; // +0x40
    long long _selectedVideoAssetCount; // +0x48
    double _selectedVideoSumDuration; // +0x50
    long long _userActionCheckScene; // +0x58
    NSString * _finishWording; // +0x60
    NSString * _pickerBottomFloatText; // +0x68
    UIColor * _pickerBottomIconTintColor; // +0x70
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity; // +0x78
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
- (BOOL)hasOrderSelectedInPreview;
- (void)setHasOrderSelectedInPreview:(BOOL)arg1;
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
- (id)pickerBottomIconTintColor;
- (void)setPickerBottomIconTintColor:(id)arg1;
- (BOOL)shouldHidePickerBottomFloatIcon;
- (void)setShouldHidePickerBottomFloatIcon:(BOOL)arg1;
- (BOOL)shouldShowPickerBottomFloatViewInitialized;
- (void)setShouldShowPickerBottomFloatViewInitialized:(BOOL)arg1;
- (BOOL)shouldShowFinderMJPublisherTemplateComposingButton;
- (void)setShouldShowFinderMJPublisherTemplateComposingButton:(BOOL)arg1;
- (id)userActionTipsActivity;
- (void).cxx_destruct;
@end
