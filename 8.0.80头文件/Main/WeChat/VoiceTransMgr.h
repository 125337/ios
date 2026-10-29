@interface VoiceTransMgr : MMUserService <BaseMsgViewControllerExt, MMServiceProtocol>
{
    BOOL _newStyle; // +0x8
    BOOL _audioSenderV2Enabled; // +0x9
    BOOL _voiceTransLogicV2Enabled; // +0xa
    BOOL _isAllowCommand; // +0xb
    BOOL _isSupportEmojiRecommend; // +0xc
    BOOL _isSupportXiaowei; // +0xd
    BOOL _isSupportXiaoweiSug; // +0xe
    BOOL _shrinkWidthForKeyboardShowing; // +0xf
    BOOL _useWXKeyboardUserWords; // +0x10
    BOOL _pressGuideTextSettingEnabled; // +0x11
    BOOL _voiceTransPlaceholderDismissEnabled; // +0x12
    BOOL _voiceTransKeyboardUpOnlyMicEnabled; // +0x13
    BOOL _voiceRecordButtonBorderDisabled; // +0x14
    BOOL _voiceRecordButtonBorderV2Enabled; // +0x15
    BOOL _voiceInputRoundStyleEnabled; // +0x16
    BOOL _isEduEnable; // +0x17
    BOOL _pressGuideHideSheetShowOnce; // +0x18
    BOOL _voiceTransPlaceholderExposedInCurrentSession; // +0x19
    unsigned int _inputMenuWidth; // +0x1c
    unsigned int _lastPacketWaitDuration; // +0x20
    unsigned int _pressGuideType; // +0x24
    unsigned int _pressGuideTextMode; // +0x28
    unsigned int _pressGuideHintLineMode; // +0x2c
    unsigned int _voiceTransPlaceholderDismissCount; // +0x30
    unsigned int _voiceTransAppearCount; // +0x34
    unsigned int _voiceTransPlaceholderExposureCount; // +0x38
    unsigned int _voiceTransPlaceholderUsageCount; // +0x3c
    VoiceTransReporter_ChatInput * _reporter; // +0x40
    VoiceTransReporter_ChatInputV2 * _reporter2; // +0x48
    NSMutableArray * _voiceTransInfos; // +0x50
    CMessageWrap * _collapsingMsgWrap; // +0x58
    id /* block */ _pendingCollapseEndBlock; // +0x60
    NSMutableArray * _sendCollapseExpandMsgWraps; // +0x68
}
+ (id)shared;
- (long long)tailLoadingStyle;
- (void)updateTailLoadingStyleForDebug:(long long)arg1;
- (void)clearTailLoadingStyleForDebug;
- (void)onServiceInit;
- (BOOL)shouldShowPressGuideTextSetting;
- (BOOL)isPressGuideTextVisible;
- (void)setPressGuideTextVisible:(BOOL)arg1;
- (BOOL)shouldShowPressGuideHideSheet;
- (void)markPressGuideHideSheetShown;
- (unsigned long long)pressGuideCurrentTimeMs;
- (id)pressGuideWindowStartKeyForType:(unsigned int)arg1;
- (id)pressGuideExposureCountKeyForType:(unsigned int)arg1;
- (id)pressGuideUsedKeyForType:(unsigned int)arg1;
- (void)resetExpiredPressGuideEducationForType:(unsigned int)arg1;
- (BOOL)canShowPressGuideEducationForType:(unsigned int)arg1;
- (void)recordPressGuideEducationExposureForType:(unsigned int)arg1;
- (void)recordPressGuideEducationUsageForType:(unsigned int)arg1;
- (BOOL)canShowPressGuideAccessoryRow;
- (void)recordPressGuideAccessoryRowClose;
- (void)updatePressGuideTypeForDebug:(unsigned int)arg1 textMode:(unsigned int)arg2;
- (void)updatePressGuideHintLineModeForDebug:(unsigned int)arg1;
- (void)updatePressGuideTextSettingEnabledForDebug:(BOOL)arg1;
- (void)clearPressGuideStateForDebug;
- (id)createVoiceTransLogicWithScene:(long long)arg1;
- (id)logicForMessage:(id)arg1;
- (void)setLogic:(id)arg1 forMessage:(id)arg2;
- (void)checkIsInvalidVoiceTransMessage:(id)arg1;
- (BOOL)canShowVoiceTransEduView;
- (void)onVoiceTransEduViewAppear;
- (void)onVoiceTransEduViewActive;
- (BOOL)hasReachedVoiceTransPlaceholderDismissCount;
- (BOOL)canShowVoiceTransPlaceHolder;
- (void)onVoiceTransPlaceHolderAppear;
- (void)onVoiceTransPlaceHolderActive;
- (BOOL)shouldShowCommandInvalidToListeningGuide;
- (void)activateCommandInvalidToListeningGuide;
- (void)markCommandInvalidToListeningGuideShown;
- (void)markCommandInvalidToListeningGuideCompleted;
- (void)clearCommandInvalidToListeningGuideForDebug;
- (void)beginSendBubbleCollapseForMessage:(id)arg1;
- (void)endSendBubbleCollapseForMessage:(id)arg1;
- (void)runAfterSendBubbleCollapseForMessage:(id)arg1 block:(id /* block */)arg2;
- (void)markSendCollapseExpandMessage:(id)arg1;
- (BOOL)isSendCollapseExpandMessage:(id)arg1;
- (void)clearSendCollapseExpandMessage:(id)arg1;
- (id)findInfoWithMessage:(id)arg1;
- (BOOL)isVoiceTranslatingMessage:(id)arg1;
- (void)onExitBaseMsgSession:(id)arg1;
- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg1;
- (BOOL)audioSenderV2Enabled;
- (void)setAudioSenderV2Enabled:(BOOL)arg1;
- (BOOL)voiceTransLogicV2Enabled;
- (void)setVoiceTransLogicV2Enabled:(BOOL)arg1;
- (BOOL)isAllowCommand;
- (void)setIsAllowCommand:(BOOL)arg1;
- (BOOL)isSupportEmojiRecommend;
- (void)setIsSupportEmojiRecommend:(BOOL)arg1;
- (BOOL)isSupportXiaowei;
- (void)setIsSupportXiaowei:(BOOL)arg1;
- (BOOL)isSupportXiaoweiSug;
- (void)setIsSupportXiaoweiSug:(BOOL)arg1;
- (unsigned int)inputMenuWidth;
- (void)setInputMenuWidth:(unsigned int)arg1;
- (BOOL)shrinkWidthForKeyboardShowing;
- (void)setShrinkWidthForKeyboardShowing:(BOOL)arg1;
- (unsigned int)lastPacketWaitDuration;
- (void)setLastPacketWaitDuration:(unsigned int)arg1;
- (BOOL)useWXKeyboardUserWords;
- (void)setUseWXKeyboardUserWords:(BOOL)arg1;
- (unsigned int)pressGuideType;
- (void)setPressGuideType:(unsigned int)arg1;
- (unsigned int)pressGuideTextMode;
- (void)setPressGuideTextMode:(unsigned int)arg1;
- (unsigned int)pressGuideHintLineMode;
- (void)setPressGuideHintLineMode:(unsigned int)arg1;
- (BOOL)pressGuideTextSettingEnabled;
- (void)setPressGuideTextSettingEnabled:(BOOL)arg1;
- (BOOL)voiceTransPlaceholderDismissEnabled;
- (void)setVoiceTransPlaceholderDismissEnabled:(BOOL)arg1;
- (unsigned int)voiceTransPlaceholderDismissCount;
- (void)setVoiceTransPlaceholderDismissCount:(unsigned int)arg1;
- (BOOL)voiceTransKeyboardUpOnlyMicEnabled;
- (void)setVoiceTransKeyboardUpOnlyMicEnabled:(BOOL)arg1;
- (BOOL)voiceRecordButtonBorderDisabled;
- (void)setVoiceRecordButtonBorderDisabled:(BOOL)arg1;
- (BOOL)voiceRecordButtonBorderV2Enabled;
- (void)setVoiceRecordButtonBorderV2Enabled:(BOOL)arg1;
- (BOOL)voiceInputRoundStyleEnabled;
- (void)setVoiceInputRoundStyleEnabled:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)reporter2;
- (void)setReporter2:(id)arg1;
- (id)voiceTransInfos;
- (void)setVoiceTransInfos:(id)arg1;
- (unsigned int)voiceTransAppearCount;
- (void)setVoiceTransAppearCount:(unsigned int)arg1;
- (BOOL)isEduEnable;
- (void)setIsEduEnable:(BOOL)arg1;
- (BOOL)pressGuideHideSheetShowOnce;
- (void)setPressGuideHideSheetShowOnce:(BOOL)arg1;
- (unsigned int)voiceTransPlaceholderExposureCount;
- (void)setVoiceTransPlaceholderExposureCount:(unsigned int)arg1;
- (unsigned int)voiceTransPlaceholderUsageCount;
- (void)setVoiceTransPlaceholderUsageCount:(unsigned int)arg1;
- (BOOL)voiceTransPlaceholderExposedInCurrentSession;
- (void)setVoiceTransPlaceholderExposedInCurrentSession:(BOOL)arg1;
- (id)collapsingMsgWrap;
- (void)setCollapsingMsgWrap:(id)arg1;
- (id /* block */)pendingCollapseEndBlock;
- (void)setPendingCollapseEndBlock:(id /* block */)arg1;
- (id)sendCollapseExpandMsgWraps;
- (void)setSendCollapseExpandMsgWraps:(id)arg1;
- (void).cxx_destruct;
@end
