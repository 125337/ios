@interface WCFinderFeedDetailCommentInputCell : UITableViewCell <WCActionSheetDelegate>
{
    id <WCFinderFeedDetailCommentInputCellDelegate> _delegate; // +0x8
    UIView * _fakeInputView; // +0x10
    MMHeadImageView * _avatarImageView; // +0x18
    MMUIButton * _fakeInputLabel; // +0x20
    UIImageView * _identitySwitchView; // +0x28
    UITapGestureRecognizer * _identitySwitchGesture; // +0x30
    WCFinderCommentIdentityActionSheetView * _identitySwitchSheet; // +0x38
    WCFinderFeedContentVM * _contentVM; // +0x40
    unsigned long long _scene; // +0x48
    unsigned long long _identitySwitchType; // +0x50
}
+ (double)defaultHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)updateUI;
- (void)setupFakeInputView;
- (void)reloadIdentitySwitchView;
- (id)createIndetitySwitchView;
- (void)updateWithContentVM:(id)arg1 type:(unsigned long long)arg2;
- (void)updateCommentIdeneityType:(unsigned long long)arg1;
- (void)updateCurrentIdentity;
- (void)fakeInputLabelClicked;
- (void)identitySwitchClicked;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fakeInputView;
- (void)setFakeInputView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)fakeInputLabel;
- (void)setFakeInputLabel:(id)arg1;
- (id)identitySwitchView;
- (void)setIdentitySwitchView:(id)arg1;
- (id)identitySwitchGesture;
- (void)setIdentitySwitchGesture:(id)arg1;
- (id)identitySwitchSheet;
- (void)setIdentitySwitchSheet:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)identitySwitchType;
- (void)setIdentitySwitchType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
