@interface MMFinderLiveAnchorPromoteTableViewCell : MMMultiMenuTableViewCell
{
    BOOL _alwaysHidePushButton; // +0x40
    BOOL _enablePushPromote; // +0x41
    BOOL _isLiving; // +0x42
    BOOL _editHidePushButton; // +0x43
    UIView * _contentBackView; // +0x48
    MMUIButton * _pushButton; // +0x50
    MMFinderLiveAnchorPromoteInfo * _promoteInfo; // +0x58
    id /* block */ _sendPromoteCallback; // +0x60
    id /* block */ _cancelPromoteCallback; // +0x68
    MMUIButton * _cancelPushButton; // +0x70
    WCFinderAnimationLoadingView * _loadingView; // +0x78
}
+ (double)preferHeight;
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (BOOL)enableMenuAction;
- (void)configEditMenuButtons;
- (void)updateHidePushButtonState:(BOOL)arg1;
- (void)layoutUI;
- (void)layoutLoadingView;
- (void)createLoadingView;
- (void)layoutContentBackView;
- (void)layoutPushButton;
- (void)updatePushButtonStyle;
- (double)rightWidgetLeft;
- (id)getAdaptedColorForPromoteState:(id)arg1;
- (void)onPushPromoteAction;
- (void)updatePromoteInfo:(id)arg1;
- (id)contentBackView;
- (void)setContentBackView:(id)arg1;
- (id)pushButton;
- (void)setPushButton:(id)arg1;
- (id)promoteInfo;
- (BOOL)alwaysHidePushButton;
- (void)setAlwaysHidePushButton:(BOOL)arg1;
- (BOOL)enablePushPromote;
- (void)setEnablePushPromote:(BOOL)arg1;
- (BOOL)isLiving;
- (void)setIsLiving:(BOOL)arg1;
- (id /* block */)sendPromoteCallback;
- (void)setSendPromoteCallback:(id /* block */)arg1;
- (id /* block */)cancelPromoteCallback;
- (void)setCancelPromoteCallback:(id /* block */)arg1;
- (BOOL)editHidePushButton;
- (void)setEditHidePushButton:(BOOL)arg1;
- (id)cancelPushButton;
- (void)setCancelPushButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

