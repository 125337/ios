@interface MMFinderLiveModeModel : NSObject
{
    BOOL _hideAudioMode; // +0x8
    BOOL _hideKtvMode; // +0x9
    BOOL _isChatRoomModeAvailable; // +0xa
    BOOL _hideSyndicateMode; // +0xb
    NSArray * _modeItems; // +0x10
    MMFinderLiveModeItem * _selectedModeItem; // +0x18
}
- (id)init;
- (void)setUpModeItems;
- (void)updateWithHideAudioMode:(BOOL)arg1 hideKtvMode:(BOOL)arg2 isChatRoomModeAvailable:(BOOL)arg3 hideSyndicateMode:(BOOL)arg4;
- (void)updateSelectedModeItemToVideoMode:(BOOL)arg1;
- (BOOL)updateSelectedModeItemToLiveModeInfo:(id)arg1;
- (void)updateGameItemWithGameUserInfo:(id)arg1 gameEntryScene:(long long)arg2;
- (void)cleanCurrentGameItem;
- (void)updateSelectedModeItem:(id)arg1;
- (BOOL)checkModeItemValid:(id)arg1;
- (void)updateCachedSelectedItem;
- (void)cleanCachedGameItem;
- (id)getCachedSelectedItem;
- (id)modeItems;
- (void)setModeItems:(id)arg1;
- (id)selectedModeItem;
- (void)setSelectedModeItem:(id)arg1;
- (BOOL)hideAudioMode;
- (void)setHideAudioMode:(BOOL)arg1;
- (BOOL)hideKtvMode;
- (void)setHideKtvMode:(BOOL)arg1;
- (BOOL)isChatRoomModeAvailable;
- (void)setIsChatRoomModeAvailable:(BOOL)arg1;
- (BOOL)hideSyndicateMode;
- (void)setHideSyndicateMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
