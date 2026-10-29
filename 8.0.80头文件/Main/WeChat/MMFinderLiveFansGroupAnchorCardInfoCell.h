@interface MMFinderLiveFansGroupAnchorCardInfoCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _nickLabel; // +0x18
    MMUILabel * _wxidLabel; // +0x20
    MMWebImageView * _webImageView; // +0x28
    MMFinderLiveFansGroupInvisibleTipView * _invisibleTipView; // +0x30
    NSString * _wxid; // +0x38
    MMUIButton * _cpButton; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)configWithNick:(id)arg1 wxid:(id)arg2 imageUrlString:(id)arg3;
- (void)onCpButtonClick;
- (void)setInvisible:(BOOL)arg1 invisibleTips:(id)arg2;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)nickLabel;
- (void)setNickLabel:(id)arg1;
- (id)wxidLabel;
- (void)setWxidLabel:(id)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)invisibleTipView;
- (void)setInvisibleTipView:(id)arg1;
- (id)wxid;
- (void)setWxid:(id)arg1;
- (id)cpButton;
- (void)setCpButton:(id)arg1;
- (void).cxx_destruct;
@end
