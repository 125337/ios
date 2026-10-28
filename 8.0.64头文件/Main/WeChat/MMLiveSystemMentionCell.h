@interface MMLiveSystemMentionCell : UITableViewCell
{
    id <MMLiveSystemMentionCellDelegate> _delegate; // +0x8
    WCFinderMention * _mention; // +0x10
    UIImageView * _logoImageView; // +0x18
    UIView * _bgView; // +0x20
    UIView * _foldedShadowView; // +0x28
    MMUILabel * _mentionTitleLabel; // +0x30
    MMUIButton * _closeBtn; // +0x38
    UIImageView * _arrowImageView; // +0x40
}
+ (id)getBgColor;
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)setupEvent;
- (void)layoutSubviews;
- (void)layoutShadow;
- (void)layoutUI;
- (void)updateWithMention:(id)arg1;
- (void)updateIfFolded:(BOOL)arg1;
- (void)onClickCloseBtn;
- (void)onMentionClick;
- (id)bgView;
- (id)foldedShadowView;
- (id)logoImageView;
- (id)arrowImageView;
- (id)mentionTitleLabel;
- (id)closeBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setFoldedShadowView:(id)arg1;
- (void)setMentionTitleLabel:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
