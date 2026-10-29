@interface HardWareRankMessageEntryButtonInfo : NSObject
{
    CMessageWrap * m_msgWrap; // +0x8
    int _type; // +0x10
    NSString * _title; // +0x18
    UIColor * _titleColor; // +0x20
    NSString * _iconUrl; // +0x28
    UIColor * _iconColor; // +0x30
    UIColor * _backgroundColor; // +0x38
    UIColor * _highlightBackgroundColor; // +0x40
    CGSize _iconSize; // +0x48
}
- (id)initWithMsgwrap:(id)arg1;
- (double)marginRight;
- (CGSize)iconSize;
- (id)backgroundColor;
- (id)highlightBackgroundColor;
- (int)type;
- (void)setType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (void)setIconSize:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlightBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end

