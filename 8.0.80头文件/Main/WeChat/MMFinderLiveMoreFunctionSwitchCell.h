@interface MMFinderLiveMoreFunctionSwitchCell : MMFinderLiveMoreFunctionBaseCell <ILinkEventExt>
{
    BOOL _showSepLine; // +0x8
    UIView * _functionContentView; // +0x10
    MMUILabel * _tipLabel; // +0x18
    MMUILabel * _titleLabel; // +0x20
    RichTextView * _detailLabel; // +0x28
    MMUILabel * _moneyLabel; // +0x30
    UISwitch * _functionSwitch; // +0x38
    UIImageView * _arrowImgView; // +0x40
    UIView * _sepelateLine; // +0x48
    UIView * _redDotView; // +0x50
    MMWebImageView * _rightImageView; // +0x58
    UIButton * _disabledSwitchButton; // +0x60
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCellWithItem:(id)arg1;
- (void)layoutSubviews;
- (void)applyHighlightAnimation;
- (void)createUI;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutUI;
- (void)layoutWithDetailReminderType;
- (void)layoutWithAmountReminderType;
- (void)layoutWithCommentType;
- (void)layoutWithImageType;
- (void)layoutWithChooseTextType;
- (void)layoutWithDefaultType;
- (void)layoutWithDetailType;
- (void)layoutWithUnknownType;
- (void)layoutRedDotIfNeeded;
- (id)functionContentView;
- (id)tipLabel;
- (id)arrowImgView;
- (id)titleLabel;
- (id)detailLabel;
- (void)updateDetailLabelfWidth:(double)arg1;
- (id)moneyLabel;
- (id)rightImageView;
- (id)functionSwitch;
- (id)sepelateLine;
- (id)redDotView;
- (id)disabledSwitchButton;
- (BOOL)checkNeedShowDisabledSwitchbutton;
- (void)switchDidChanged:(id)arg1;
- (BOOL)canShowSepelateLine;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (void)cleanLayer;
- (void)onDisabledSwitchButtonClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)showSepLine;
- (void)setShowSepLine:(BOOL)arg1;
- (void)setFunctionContentView:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setMoneyLabel:(id)arg1;
- (void)setFunctionSwitch:(id)arg1;
- (void)setArrowImgView:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (void)setRedDotView:(id)arg1;
- (void)setRightImageView:(id)arg1;
- (void)setDisabledSwitchButton:(id)arg1;
- (void).cxx_destruct;
@end
