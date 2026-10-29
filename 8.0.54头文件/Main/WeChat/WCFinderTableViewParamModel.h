@interface WCFinderTableViewParamModel : NSObject
{
    BOOL _isSubScene; // +0x8
    BOOL _isHiddenFollowTips; // +0x9
    BOOL _isShowRecommend; // +0xa
    BOOL _isHiddendComment; // +0xb
    BOOL _isDisplayPostDate; // +0xc
    BOOL _isForceDisableLikeAction; // +0xd
    BOOL _showFoldFeed; // +0xe
    BOOL _showLargeSpearator; // +0xf
    BOOL _enableShowLiveState; // +0x10
    BOOL _hiddenLiveNoticeTableView; // +0x11
    BOOL _hiddenAuthorAppendDescLabel; // +0x12
    BOOL _alwaysShowFollowBtn; // +0x13
    BOOL _alwaysShowFollowLikeBtn; // +0x14
    BOOL _showMoreAction; // +0x15
    BOOL _showMentionGuide; // +0x16
    BOOL _hiddenHotwordLabel; // +0x17
    BOOL _showAdSelectGuide; // +0x18
    BOOL _hiddenDoubleLikeEduView; // +0x19
    BOOL _shouldCheckAntiAddict; // +0x1a
    BOOL _hiddenSetRingToneEntry; // +0x1b
    BOOL _notShowFollowBtnAfterPlayOver; // +0x1c
    BOOL _hiddenLiveAppointmentState; // +0x1d
    BOOL _notShowTemplateBubbleEntry; // +0x1e
    unsigned long long _toolBarStyle; // +0x20
    long long _dataOffset; // +0x28
    unsigned long long _toolbarDisableConfig; // +0x30
    id <WCFinderFullMultiMediaTableViewCellDelegate> _delegate; // +0x38
    unsigned long long _forceToolBarStyle; // +0x40
    CGRect _tableViewFrame; // +0x48
}
+ (id)defaultParamModelWithContentVM:(id)arg1 isSubScene:(BOOL)arg2;
- (void)updateUnpublishedShowSwitchState;
- (void)setToolBarStyle:(unsigned long long)arg1;
- (void)setForceToolBarStyle:(unsigned long long)arg1;
- (BOOL)isSubScene;
- (void)setIsSubScene:(BOOL)arg1;
- (unsigned long long)toolBarStyle;
- (long long)dataOffset;
- (void)setDataOffset:(long long)arg1;
- (BOOL)isHiddenFollowTips;
- (void)setIsHiddenFollowTips:(BOOL)arg1;
- (BOOL)isShowRecommend;
- (void)setIsShowRecommend:(BOOL)arg1;
- (BOOL)isHiddendComment;
- (void)setIsHiddendComment:(BOOL)arg1;
- (BOOL)isDisplayPostDate;
- (void)setIsDisplayPostDate:(BOOL)arg1;
- (BOOL)isForceDisableLikeAction;
- (void)setIsForceDisableLikeAction:(BOOL)arg1;
- (BOOL)showFoldFeed;
- (void)setShowFoldFeed:(BOOL)arg1;
- (BOOL)showLargeSpearator;
- (void)setShowLargeSpearator:(BOOL)arg1;
- (BOOL)enableShowLiveState;
- (void)setEnableShowLiveState:(BOOL)arg1;
- (BOOL)hiddenLiveNoticeTableView;
- (void)setHiddenLiveNoticeTableView:(BOOL)arg1;
- (BOOL)hiddenAuthorAppendDescLabel;
- (void)setHiddenAuthorAppendDescLabel:(BOOL)arg1;
- (BOOL)alwaysShowFollowBtn;
- (void)setAlwaysShowFollowBtn:(BOOL)arg1;
- (BOOL)alwaysShowFollowLikeBtn;
- (void)setAlwaysShowFollowLikeBtn:(BOOL)arg1;
- (BOOL)showMoreAction;
- (void)setShowMoreAction:(BOOL)arg1;
- (BOOL)showMentionGuide;
- (void)setShowMentionGuide:(BOOL)arg1;
- (unsigned long long)toolbarDisableConfig;
- (void)setToolbarDisableConfig:(unsigned long long)arg1;
- (BOOL)hiddenHotwordLabel;
- (void)setHiddenHotwordLabel:(BOOL)arg1;
- (BOOL)showAdSelectGuide;
- (void)setShowAdSelectGuide:(BOOL)arg1;
- (BOOL)hiddenDoubleLikeEduView;
- (void)setHiddenDoubleLikeEduView:(BOOL)arg1;
- (BOOL)shouldCheckAntiAddict;
- (void)setShouldCheckAntiAddict:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hiddenSetRingToneEntry;
- (void)setHiddenSetRingToneEntry:(BOOL)arg1;
- (BOOL)notShowFollowBtnAfterPlayOver;
- (void)setNotShowFollowBtnAfterPlayOver:(BOOL)arg1;
- (BOOL)hiddenLiveAppointmentState;
- (void)setHiddenLiveAppointmentState:(BOOL)arg1;
- (BOOL)notShowTemplateBubbleEntry;
- (void)setNotShowTemplateBubbleEntry:(BOOL)arg1;
- (CGRect)tableViewFrame;
- (void)setTableViewFrame:(CGRect)arg1;
- (unsigned long long)forceToolBarStyle;
- (void).cxx_destruct;
@end

