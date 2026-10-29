@interface RingBackInfoDisplaySheetView : MMAutoLayoutSheetView <IVOIPWindowExt, RingTonePickTableViewCellDelegate, SelectContactsViewControllerDelegate, RingToneContactSelectViewController>
{
    BOOL _shouldShowUserStatus; // +0x8
    BOOL _shouldShowFriendSettings; // +0x9
    BOOL _isSelected; // +0xa
    id <RingBackInfoDisplaySheetViewDelegate> _delegate; // +0x10
    MMUIViewController * _viewController; // +0x18
    long long _entranceType; // +0x20
    NSString * _friendName; // +0x28
    NSString * _userName; // +0x30
    unsigned long long _feedEnterType; // +0x38
    RingToneDetail * _ring; // +0x40
    unsigned long long _scene; // +0x48
    RingToneMixPlayer * _player; // +0x50
    RingTonePickTableViewCell * _ringInfoCell; // +0x58
    RingToneImageView * _musicCoverView; // +0x60
    UIView * _musicInfoBottomView; // +0x68
    RingToneContactSelectViewController * _selectVC; // +0x70
    UIImageView * _selectImageView; // +0x78
}
+ (id)genTextStatusJumpInfoRingtonePB:(id)arg1;
- (id)initWithRingToneDetail:(id)arg1 scene:(unsigned long long)arg2 userName:(id)arg3;
- (id)initWithFinderItem:(id)arg1 type:(long long)arg2 userName:(id)arg3;
- (void)report24158Data:(unsigned long long)arg1 friendName:(id)arg2 userName:(id)arg3;
- (void)dealloc;
- (void)customArrangeViews;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)playRing;
- (void)stopRing;
- (void)setVOIPContactStyleUI;
- (void)setHasUsedRingStyleUI;
- (void)setCommonStyleUIWithTitle:(id)arg1;
- (void)addGuideInfoLabel;
- (void)addCustomTitle:(id)arg1;
- (void)addSpaceView:(double)arg1;
- (void)addMusicInfoView;
- (void)addSettingButtonWithTitle:(id)arg1;
- (void)addSetRingForFriendsBtn;
- (void)setRingForFriends;
- (void)addUserStateView;
- (void)onSelectButtonClick;
- (void)reloadContent;
- (void)onTapSettingRing;
- (void)onTapJumpToFinder;
- (void)pageSheetWillAppear;
- (id)curViewController;
- (id)player;
- (void)onTapPlayRingTone:(id)arg1 isToPlay:(BOOL)arg2;
- (void)onTapJumpFinder:(id)arg1;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)sendTextState;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)didSelectFriendContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (long long)entranceType;
- (void)setEntranceType:(long long)arg1;
- (BOOL)shouldShowUserStatus;
- (void)setShouldShowUserStatus:(BOOL)arg1;
- (BOOL)shouldShowFriendSettings;
- (void)setShouldShowFriendSettings:(BOOL)arg1;
- (id)friendName;
- (void)setFriendName:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)feedEnterType;
- (void)setFeedEnterType:(unsigned long long)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void)setPlayer:(id)arg1;
- (id)ringInfoCell;
- (void)setRingInfoCell:(id)arg1;
- (id)musicCoverView;
- (void)setMusicCoverView:(id)arg1;
- (id)musicInfoBottomView;
- (void)setMusicInfoBottomView:(id)arg1;
- (id)selectVC;
- (void)setSelectVC:(id)arg1;
- (id)selectImageView;
- (void)setSelectImageView:(id)arg1;
- (void).cxx_destruct;
@end

