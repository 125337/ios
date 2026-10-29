@interface SolitaireTipsView : UIView
{
    NSString * _nsHadShowKey; // +0x8
    SolitaireObj * _solitaireObj; // +0x10
    id <SolitaireTipsViewDelegate> _delegate; // +0x18
    UIButton * _bgContentBtn; // +0x20
    UILabel * _tipsInfoLabel; // +0x28
    UIButton * _tipActionBtn; // +0x30
    UIView * _separateLine; // +0x38
    UIImageView * _iconImageView; // +0x40
    UIImageView * _arrowImageView; // +0x48
}
- (id)init;
- (id)accessibilityLabel;
- (id)separateLine;
- (id)iconImageView;
- (id)arrowImageView;
- (id)bgContentBtn;
- (id)tipsInfoLabel;
- (id)tipActionBtn;
- (void)setSolitaireObj:(id)arg1;
- (void)changeDisplayWording;
- (void)show;
- (void)autoHiddenSelf;
- (void)onTapActionButton:(id)arg1;
- (id)nsHadShowKey;
- (void)setNsHadShowKey:(id)arg1;
- (id)solitaireObj;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBgContentBtn:(id)arg1;
- (void)setTipsInfoLabel:(id)arg1;
- (void)setTipActionBtn:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

