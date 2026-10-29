@interface WCAdTagButton : UIView
{
    id <WCAdTagButtonDelegate> _delegate; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCAdTagButtonInfo * _tagInfo; // +0x18
    long long _cardType; // +0x20
    unsigned long long _contentItemScene; // +0x28
    WCAdURLImageView * _bgImageView; // +0x30
    UIButton * _topButton; // +0x38
    WCAdURLImageView * _topButtonIcon; // +0x40
}
+ (CGSize)calcTagButtonSizeForTagInfo:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 tagInfo:(id)arg2 cardType:(long long)arg3 contentItemScene:(unsigned long long)arg4;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)bgImageView;
- (id)topButton;
- (id)topButtonIcon;
- (BOOL)hasBgImageView;
- (BOOL)hasIcon;
- (BOOL)hasTitle;
- (void)onClickTopButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setBgImageView:(id)arg1;
- (void)setTopButton:(id)arg1;
- (void)setTopButtonIcon:(id)arg1;
- (void).cxx_destruct;
@end
