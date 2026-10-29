@interface MMWebMenuHeaderView : MMUIView
{
    id <MMWebMenuHeaderViewDelegate> _menuHeaderDelegate; // +0x8
    NSString * _brandNanme; // +0x10
    NSString * _headImageUrl; // +0x18
    MMWebImageView * _headImageView; // +0x20
    MMUILabel * _nickNameLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIButton * _headerButton; // +0x38
    UIView * _seperator; // +0x40
}
- (id)initWithBrandName:(id)arg1 headImageUrl:(id)arg2;
- (double)contentViewHeight;
- (double)contentViewWidth;
- (void)initView;
- (void)layoutSubviews;
- (void)onViewClick;
- (id)menuHeaderDelegate;
- (void)setMenuHeaderDelegate:(id)arg1;
- (id)brandNanme;
- (void)setBrandNanme:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)headerButton;
- (void)setHeaderButton:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (void).cxx_destruct;
@end

