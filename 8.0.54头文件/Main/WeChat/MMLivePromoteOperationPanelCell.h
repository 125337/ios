@interface MMLivePromoteOperationPanelCell : UIButton
{
    BOOL _isCellViewDisabled; // +0x8
    NSString * _title; // +0x10
    NSString * _svgIconName; // +0x18
    NSString * _stateText; // +0x20
    unsigned long long _uiStyle; // +0x28
    UIView * _customizedBackgroundView; // +0x30
    UIImageView * _customizedUIImageView; // +0x38
    UILabel * _customizedTitleLabel; // +0x40
    UILabel * _customizedStateTextLabel; // +0x48
}
- (id)initWithTitle:(id)arg1 svgIconName:(id)arg2;
- (id)initWithTitle:(id)arg1 svgIconName:(id)arg2 stateText:(id)arg3;
- (void)layoutSubviews;
- (void)setIsCellViewDisabled:(BOOL)arg1;
- (BOOL)updateStateText:(id)arg1;
- (id)title;
- (id)svgIconName;
- (id)stateText;
- (BOOL)isCellViewDisabled;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (id)customizedBackgroundView;
- (void)setCustomizedBackgroundView:(id)arg1;
- (id)customizedUIImageView;
- (void)setCustomizedUIImageView:(id)arg1;
- (id)customizedTitleLabel;
- (void)setCustomizedTitleLabel:(id)arg1;
- (id)customizedStateTextLabel;
- (void)setCustomizedStateTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

