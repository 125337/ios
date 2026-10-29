@interface WCFinderAuthorContactView : UIView
{
    WCFinderHeadImageView * _headImgView; // +0x8
    RichTextView * _nameLabel; // +0x10
    WCFinderAuthInfoIconView * _authIconView; // +0x18
    WCFinderAuthorContactViewStyle * _style; // +0x20
    UILabel * _authProfessionLabel; // +0x28
    double _nsFWidth; // +0x30
}
+ (double)viewHeightWithStyle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(id)arg2;
- (void)setupUI;
- (void)setFWidth:(double)arg1;
- (void)updateWithContact:(id)arg1;
- (void)layoutUI;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)prepareForReuse;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)authProfessionLabel;
- (void)setAuthProfessionLabel:(id)arg1;
- (double)nsFWidth;
- (void)setNsFWidth:(double)arg1;
- (void).cxx_destruct;
@end

