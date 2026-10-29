@interface MMFinderLiveGiftStarGiftDetailPanel : MMFinderLiveGiftStarBasePanel <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _isHistory; // +0x8
    BOOL _rankLoaded; // +0x9
    unsigned int _meGlobalRankValue; // +0xc
    FinderLiveGiftStarGiftUnlockInfo * _unlockInfo; // +0x10
    NSArray * _rankItems; // +0x18
    FinderLiveGiftStarRankItem * _selfRankItem; // +0x20
    unsigned long long _gapToTopAmount; // +0x28
    MMWebImageView * _giftImageView; // +0x30
    UIView * _avatarContainer; // +0x38
    MMWebImageView * _avatarView; // +0x40
    MMUILabel * _stateLabel; // +0x48
    MMUILabel * _countLabel; // +0x50
    UIView * _buttonGroup; // +0x58
    MMUIButton * _sendOneButton; // +0x60
    MMUIButton * _lightButton; // +0x68
    UIView * _listHeader; // +0x70
    MMUILabel * _listHeaderLeftLabel; // +0x78
    MMUILabel * _listHeaderRightLabel; // +0x80
    UITableView * _tableView; // +0x88
    MMUILabel * _emptyLabel; // +0x90
    UIView * _meBar; // +0x98
    UIView * _meBarSeparator; // +0xa0
    MMUILabel * _meRankLabel; // +0xa8
    MMUILabel * _meNicknameLabel; // +0xb0
    MMUILabel * _meAmountLabel; // +0xb8
    MMFinderLiveGlobalRankSignView * _meGlobalRankSignView; // +0xc0
    MMUILabel * _chaseTipLabel; // +0xc8
    MMUIButton * _chaseButton; // +0xd0
}
- (id)initWithTaskId:(id)arg1 unlockInfo:(id)arg2 isHistory:(BOOL)arg3;
- (BOOL)showSendButtons;
- (BOOL)showMeBar;
- (void)panelDidPush;
- (void)reloadData;
- (void)setSendingInFlight:(BOOL)arg1;
- (void)reloadRankBoard;
- (void)applyHeader;
- (id)defaultAvatarImageWithLighted:(BOOL)arg1;
- (void)applyMeBar;
- (void)setupContent;
- (id)makeHeaderLabelWithText:(id)arg1 alignment:(long long)arg2;
- (id)makeSendButtonWithColor:(id)arg1 action:(SEL)arg2;
- (void)configSendButton:(id)arg1 price:(long long)arg2 title:(id)arg3;
- (void)layoutContentWithBounds:(CGRect)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickSendOne;
- (void)onClickLight;
- (void)onClickChaseRank;
- (void)requestSendCount:(unsigned int)arg1;
- (id)unlockInfo;
- (void)setUnlockInfo:(id)arg1;
- (BOOL)isHistory;
- (void)setIsHistory:(BOOL)arg1;
- (id)rankItems;
- (void)setRankItems:(id)arg1;
- (BOOL)rankLoaded;
- (void)setRankLoaded:(BOOL)arg1;
- (id)selfRankItem;
- (void)setSelfRankItem:(id)arg1;
- (unsigned long long)gapToTopAmount;
- (void)setGapToTopAmount:(unsigned long long)arg1;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)buttonGroup;
- (void)setButtonGroup:(id)arg1;
- (id)sendOneButton;
- (void)setSendOneButton:(id)arg1;
- (id)lightButton;
- (void)setLightButton:(id)arg1;
- (id)listHeader;
- (void)setListHeader:(id)arg1;
- (id)listHeaderLeftLabel;
- (void)setListHeaderLeftLabel:(id)arg1;
- (id)listHeaderRightLabel;
- (void)setListHeaderRightLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)meBar;
- (void)setMeBar:(id)arg1;
- (id)meBarSeparator;
- (void)setMeBarSeparator:(id)arg1;
- (id)meRankLabel;
- (void)setMeRankLabel:(id)arg1;
- (id)meNicknameLabel;
- (void)setMeNicknameLabel:(id)arg1;
- (id)meAmountLabel;
- (void)setMeAmountLabel:(id)arg1;
- (id)meGlobalRankSignView;
- (void)setMeGlobalRankSignView:(id)arg1;
- (unsigned int)meGlobalRankValue;
- (void)setMeGlobalRankValue:(unsigned int)arg1;
- (id)chaseTipLabel;
- (void)setChaseTipLabel:(id)arg1;
- (id)chaseButton;
- (void)setChaseButton:(id)arg1;
- (void).cxx_destruct;
@end
