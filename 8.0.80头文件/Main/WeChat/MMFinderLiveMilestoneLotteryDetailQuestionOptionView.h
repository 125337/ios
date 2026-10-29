@interface MMFinderLiveMilestoneLotteryDetailQuestionOptionView : UIView
{
    BOOL _selected; // +0x8
    BOOL _showCount; // +0x9
    FinderLiveMilestoneLotteryInfo_AttendInfo_Choice * _choice; // +0x10
    unsigned long long _maxChoiceCount; // +0x18
    id /* block */ _onTapped; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _countLabel; // +0x30
    UIImageView * _checkMarkImageView; // +0x38
    UIView * _progressView; // +0x40
    UIColor * _lightColor; // +0x48
    UIColor * _heavyColor; // +0x50
    UIColor * _selectedTextColor; // +0x58
    UIColor * _normalTextColor; // +0x60
}
- (id)initWithLightColor:(id)arg1 heavyColor:(id)arg2 selectedTextColor:(id)arg3 normalTextColor:(id)arg4;
- (void)commonInit;
- (void)onTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setChoice:(id)arg1;
- (void)setMaxChoiceCount:(unsigned long long)arg1;
- (void)onChoiceUpdated;
- (void)setShowCount:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateColorAndLayout;
- (id)choice;
- (unsigned long long)maxChoiceCount;
- (BOOL)selected;
- (BOOL)showCount;
- (id /* block */)onTapped;
- (void)setOnTapped:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)checkMarkImageView;
- (void)setCheckMarkImageView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)lightColor;
- (void)setLightColor:(id)arg1;
- (id)heavyColor;
- (void)setHeavyColor:(id)arg1;
- (id)selectedTextColor;
- (void)setSelectedTextColor:(id)arg1;
- (id)normalTextColor;
- (void)setNormalTextColor:(id)arg1;
- (void).cxx_destruct;
@end
