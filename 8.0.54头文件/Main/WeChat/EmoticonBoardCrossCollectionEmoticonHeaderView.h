@interface EmoticonBoardCrossCollectionEmoticonHeaderView : UICollectionReusableView <IStoreEmotionDesignerInfoMgrExt>
{
    EmoticonBoardCrossCollectionEmoticonHeaderModel * _viewModel; // +0x8
    id /* block */ _actionBlock; // +0x10
    UILabel * _titleLabel; // +0x18
    UITapGestureRecognizer * _tapGestureRecongnizer; // +0x20
    MMUILabel * _designerNameLabel; // +0x28
    MMWebImageView * _designerHeadView; // +0x30
    UIImageView * _entryTipView; // +0x38
    UIImageView * _rightArrow; // +0x40
    MMBadgeView * _badgeView; // +0x48
    UIView * _voiceOverView; // +0x50
    WXKeyBoardTipsView * _keyboardTipsView; // +0x58
    PersonalDesigner * _designer; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)handleSingleTap:(id)arg1;
- (void)jumpToPlugin;
- (void)onGetDesignerForDesignerUin:(unsigned int)arg1 AndDesigner:(id)arg2;
- (id)viewModel;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
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

