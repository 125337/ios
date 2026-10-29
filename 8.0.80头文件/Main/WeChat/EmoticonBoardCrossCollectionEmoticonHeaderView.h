@interface EmoticonBoardCrossCollectionEmoticonHeaderView : UICollectionReusableView <IStoreEmotionDesignerInfoMgrExt>
{
    id <EmoticonBoardCrossCollectionEmoticonHeaderViewDelegate> _delegate; // +0x8
    EmoticonBoardCrossCollectionEmoticonHeaderModel * _viewModel; // +0x10
    id /* block */ _actionBlock; // +0x18
    UILabel * _titleLabel; // +0x20
    UIButton * _manageButton; // +0x28
    UITapGestureRecognizer * _tapGestureRecongnizer; // +0x30
    MMUILabel * _designerNameLabel; // +0x38
    MMWebImageView * _designerHeadView; // +0x40
    UIImageView * _entryTipView; // +0x48
    UIImageView * _rightArrow; // +0x50
    MMBadgeView * _badgeView; // +0x58
    UIView * _voiceOverView; // +0x60
    WXKeyBoardTipsView * _keyboardTipsView; // +0x68
    PersonalDesigner * _designer; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (BOOL)showManagerEntrance;
- (void)handleSingleTap:(id)arg1;
- (void)jumpToPlugin;
- (void)jumpToCustomManager;
- (void)onGetDesignerForDesignerUin:(unsigned int)arg1 AndDesigner:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)manageButton;
- (void)setManageButton:(id)arg1;
- (id)tapGestureRecongnizer;
- (void)setTapGestureRecongnizer:(id)arg1;
- (id)designerNameLabel;
- (void)setDesignerNameLabel:(id)arg1;
- (id)designerHeadView;
- (void)setDesignerHeadView:(id)arg1;
- (id)entryTipView;
- (void)setEntryTipView:(id)arg1;
- (id)rightArrow;
- (void)setRightArrow:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)voiceOverView;
- (void)setVoiceOverView:(id)arg1;
- (id)keyboardTipsView;
- (void)setKeyboardTipsView:(id)arg1;
- (id)designer;
- (void)setDesigner:(id)arg1;
- (void).cxx_destruct;
@end
