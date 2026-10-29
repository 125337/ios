@interface MultiTalkMembersCollectionView : UIView <UIScrollViewDelegate, MultiTalkMemberCellDelegate, MultiTalkMembersViewProtocol>
{
    BOOL isInMinimizeMode; // +0x8
    BOOL _sharingScreenEnable; // +0x9
    BOOL _isTalking; // +0xa
    BOOL _isReloading; // +0xb
    BOOL _isCameraOpen; // +0xc
    BOOL _frontVirtualBackgroundOn; // +0xd
    BOOL _backVirtualBackgroundOn; // +0xe
    BOOL _isFrontCamera; // +0xf
    int needShowContactInviteInfo; // +0x10
    id <MultiTalkMembersViewDelegate> delegate; // +0x18
    UIScrollView * _contentsView; // +0x20
    NSArray * _itemsArray; // +0x28
    NSObject<MultiTalkMemberProtocol> * _selectedMember; // +0x30
    UIViewPropertyAnimator * _reloadViewPropertyAnimator; // +0x38
    MMTimer * _waittingTimer; // +0x40
    UIButton * _flipCameraButton; // +0x48
    UIButton * _virtualBackgroundButton; // +0x50
}
+ (id)normalVoipDescriptButtonBackImage;
+ (id)selectedVoipDescriptButtonBackImage;
- (void)checkVisableMembers;
- (id)cellFromMemberUserName:(id)arg1;
- (unsigned long long)indexForMemberCell:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)layoutContentsView;
- (void)onContentsViewTap:(id)arg1;
- (id)memberCellWithMember:(id)arg1;
- (void)reloadScreenSharingAudienceWithEnable:(BOOL)arg1;
- (CGSize)noramlCellSizeForMembersCount:(unsigned long long)arg1 hasSelection:(BOOL)arg2;
- (CGSize)selectedCellSizeForMembersCount:(unsigned long long)arg1;
- (CGRect)cellFrameInContentViewWithIndex:(unsigned long long)arg1 membersCount:(unsigned long long)arg2 selectedIndex:(unsigned long long)arg3;
- (void)layoutCellsOnTalking;
- (void)layoutCellsBeforeTalking;
- (void)layoutCells;
- (void)layoutCameraRelativeBtn:(id)arg1;
- (void)reloadMembers;
- (void)reloadSelectedMember:(id)arg1;
- (void)onClickCell:(id)arg1;
- (void)checkMemberWaitting;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)changeViewToTalkingMode;
- (BOOL)isInBigSharingScreenMode;
- (void)multiTalkWindowChange:(BOOL)arg1;
- (void)layoutAfterBottomPanelChange;
- (void)reloadButtonsForVideoStatus:(BOOL)arg1;
- (void)reloadData;
- (void)reloadDataBeforeTalking;
- (void)updateIpadOrientationAfterFrameChange;
- (void)updateMuteState:(BOOL)arg1;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)videoMembersInfoChanged;
- (CGSize)realContentsSize;
- (void)checkIfSetVirtualBackgroundSelect;
- (void)hideButtonsForCameraMode;
- (void)changeIntoDefaultBigView;
- (void)onFlipCameraButtonClick;
- (void)onBackgroundSelect;
- (int)getIfneedShowContactInviteInfo;
- (int)needShowContactInviteInfo;
- (void)setNeedShowContactInviteInfo:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInMinimizeMode;
- (void)setIsInMinimizeMode:(BOOL)arg1;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (id)itemsArray;
- (void)setItemsArray:(id)arg1;
- (BOOL)sharingScreenEnable;
- (void)setSharingScreenEnable:(BOOL)arg1;
- (id)selectedMember;
- (void)setSelectedMember:(id)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (BOOL)isReloading;
- (void)setIsReloading:(BOOL)arg1;
- (id)reloadViewPropertyAnimator;
- (void)setReloadViewPropertyAnimator:(id)arg1;
- (id)waittingTimer;
- (void)setWaittingTimer:(id)arg1;
- (id)flipCameraButton;
- (void)setFlipCameraButton:(id)arg1;
- (id)virtualBackgroundButton;
- (void)setVirtualBackgroundButton:(id)arg1;
- (BOOL)isCameraOpen;
- (void)setIsCameraOpen:(BOOL)arg1;
- (BOOL)frontVirtualBackgroundOn;
- (void)setFrontVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)backVirtualBackgroundOn;
- (void)setBackVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (void).cxx_destruct;
@end

