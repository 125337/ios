@interface WCFinderLiveTopicTemplateTabView : UIView <WCFinderTabViewProtocol>
{
    BOOL _selected; // +0x8
    id <WCFinderTabViewDelegate> delegate; // +0x10
    NSString * _text; // +0x18
    UILabel * _textLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (id)textLabel;
- (void)setSelected:(BOOL)arg1;
- (void)setTitleText:(id)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)text;
- (void)setTextLabel:(id)arg1;
- (BOOL)selected;
- (void).cxx_destruct;
@end
