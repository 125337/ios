@interface WCHeaderGridView : UIView
{
    NSMutableArray * m_arrContacts; // +0x8
    double imageHeight; // +0x10
    double rowSpace; // +0x18
    double sectionSpace; // +0x20
    unsigned int countPerLine; // +0x28
    unsigned int likeCount; // +0x2c
    UIImageView * m_iconImageView; // +0x30
    RichTextView * m_richText; // +0x38
    NSMutableArray * m_arrHeaderViews; // +0x40
    NSMutableArray * m_arrHeaderMatteViews; // +0x48
    BOOL isHBComment; // +0x50
    BOOL isRewardGrid; // +0x51
    UILabel * _m_titleLabel; // +0x58
    id /* block */ _onHedaImageClick; // +0x60
    NSString * _customTextContent; // +0x68
    NSDictionary * _customHeadImgUrlDic; // +0x70
    UIColor * _customIconImageColor; // +0x78
    NSString * _customIconSVGImageName; // +0x80
}
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2 isHBComment:(BOOL)arg3;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2 isHBComment:(BOOL)arg3 customTextContent:(id)arg4 customHeadImgUrlDic:(id)arg5 customIconImageColor:(id)arg6 customIconSVGImageName:(id)arg7;
- (id)initWithRewardInfos:(id)arg1 likeCount:(unsigned int)arg2 isRewardGrid:(BOOL)arg3;
- (void)setImageHeight:(double)arg1;
- (void)setRowSpace:(double)arg1;
- (void)setSectionSpace:(double)arg1;
- (void)setCountPerLine:(unsigned int)arg1;
- (void)onClickHeadImageView:(id)arg1;
- (id)getIconImageWithSize:(CGSize)arg1;
- (void)initView;
- (void)updateView;
- (id)fetchCustomHeadImgUrlForIndex:(int)arg1;
- (id)displayNameForContactAtIndex:(long long)arg1;
- (void)updateCustomHeadImageForHeadView:(id)arg1 index:(int)arg2;
- (void)setCustomHeadImageCornerForHeadView:(id)arg1 index:(int)arg2;
- (id)accessibilityLabelForHeadImageAtIndex:(long long)arg1;
- (double)imageHeight;
- (double)rowSpace;
- (double)sectionSpace;
- (unsigned int)countPerLine;
- (id)m_iconImageView;
- (id)m_titleLabel;
- (id /* block */)onHedaImageClick;
- (void)setOnHedaImageClick:(id /* block */)arg1;
- (id)customTextContent;
- (void)setCustomTextContent:(id)arg1;
- (id)customHeadImgUrlDic;
- (void)setCustomHeadImgUrlDic:(id)arg1;
- (id)customIconImageColor;
- (void)setCustomIconImageColor:(id)arg1;
- (id)customIconSVGImageName;
- (void)setCustomIconSVGImageName:(id)arg1;
- (void).cxx_destruct;
@end

