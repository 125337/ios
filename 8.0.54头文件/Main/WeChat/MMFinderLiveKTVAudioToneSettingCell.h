@interface MMFinderLiveKTVAudioToneSettingCell : WCTableViewNormalCellManager
{
    MMFinderLiveKTVAudioEffectSettingUserInfo * _customUserInfo; // +0x8
    MMUIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUIButton * _minusBtn; // +0x20
    MMUIButton * _plusBtn; // +0x28
    MMUILabel * _valueLabel; // +0x30
}
- (id)initWithSize:(CGSize)arg1 userInfo:(id)arg2;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initToneValue;
- (void)layoutUI;
- (id)liveTask;
- (void)onMinusButtonTapped:(id)arg1;
- (void)onPlusButtonTapped:(id)arg1;
- (id)customUserInfo;
- (void)setCustomUserInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)minusBtn;
- (void)setMinusBtn:(id)arg1;
- (id)plusBtn;
- (void)setPlusBtn:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (void).cxx_destruct;
@end

