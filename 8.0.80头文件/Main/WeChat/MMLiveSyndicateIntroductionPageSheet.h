@interface MMLiveSyndicateIntroductionPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    BOOL _enablePlatformSettlement; // +0x8
    id /* block */ _completionBlock; // +0x10
    WCFinderContact * _finderContact; // +0x18
    unsigned long long _maximumParticipantsCount; // +0x20
    UILabel * _title; // +0x28
    RichTextView * _descriptionLabel; // +0x30
    UIView * _settlementSettingsContainerView; // +0x38
    UIView * _settlementSettingsTopSeparator; // +0x40
    UIView * _settlementSettingsBottomSeparator; // +0x48
    UILabel * _settlementSettingsLabel; // +0x50
    UILabel * _settlementSettingsValue; // +0x58
    UIImageView * _settlementSettingsRightChevron; // +0x60
    unsigned long long _settlementMode; // +0x68
}
- (id)initWithFinderContact:(id)arg1 maximumParticipantsCount:(unsigned long long)arg2 enablePlatformSettlement:(BOOL)arg3;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSettlementSettingsTapped;
- (void)initializeComponents;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (unsigned long long)maximumParticipantsCount;
- (void)setMaximumParticipantsCount:(unsigned long long)arg1;
- (BOOL)enablePlatformSettlement;
- (void)setEnablePlatformSettlement:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)settlementSettingsContainerView;
- (void)setSettlementSettingsContainerView:(id)arg1;
- (id)settlementSettingsTopSeparator;
- (void)setSettlementSettingsTopSeparator:(id)arg1;
- (id)settlementSettingsBottomSeparator;
- (void)setSettlementSettingsBottomSeparator:(id)arg1;
- (id)settlementSettingsLabel;
- (void)setSettlementSettingsLabel:(id)arg1;
- (id)settlementSettingsValue;
- (void)setSettlementSettingsValue:(id)arg1;
- (id)settlementSettingsRightChevron;
- (void)setSettlementSettingsRightChevron:(id)arg1;
- (unsigned long long)settlementMode;
- (void)setSettlementMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
