@interface MJShootSideToolboxPanelViewModel : NSObject
{
    BOOL _microphoneEnabled; // +0x8
    BOOL _switchMicrophoneEnabled; // +0x9
    BOOL _allowReplyButton; // +0xa
    unsigned long long _flashMode; // +0x10
    unsigned long long _countdownTimerMode; // +0x18
    unsigned long long _recordingTimerMode; // +0x20
    unsigned long long _backgroundType; // +0x28
    MMCameraTemplateItem * _currentTemplateItem; // +0x30
    NSArray * _internalItems; // +0x38
}
+ (id)_buildFlashItemWithMode:(unsigned long long)arg1;
+ (id)_buildCountdownItemWithMode:(unsigned long long)arg1;
+ (id)_buildRecordingItemWithMode:(unsigned long long)arg1;
+ (id)_buildBackgroundItemWithMode:(unsigned long long)arg1;
+ (id)_buildMicrophoneItemWithEnabled:(BOOL)arg1;
- (id)items;
- (void)reloadItems;
- (unsigned long long)flashMode;
- (void)setFlashMode:(unsigned long long)arg1;
- (unsigned long long)countdownTimerMode;
- (void)setCountdownTimerMode:(unsigned long long)arg1;
- (unsigned long long)recordingTimerMode;
- (void)setRecordingTimerMode:(unsigned long long)arg1;
- (unsigned long long)backgroundType;
- (void)setBackgroundType:(unsigned long long)arg1;
- (BOOL)isMicrophoneEnabled;
- (void)setMicrophoneEnabled:(BOOL)arg1;
- (BOOL)isSwitchMicrophoneEnabled;
- (void)setSwitchMicrophoneEnabled:(BOOL)arg1;
- (BOOL)allowReplyButton;
- (void)setAllowReplyButton:(BOOL)arg1;
- (id)currentTemplateItem;
- (void)setCurrentTemplateItem:(id)arg1;
- (id)internalItems;
- (void)setInternalItems:(id)arg1;
- (void).cxx_destruct;
@end
