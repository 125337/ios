@interface MMLiveConnectedMicAudienceView : UIView
{
    BOOL _needHidden; // +0x8
    NSString * _text; // +0x10
    UILabel * _textLabel; // +0x18
    UIImageView * _talkingIconView; // +0x20
}
- (void)updateViews;
- (void)updateText:(id)arg1;
- (void)layoutSubviews;
- (double)getConnectedMicAudienceViewWidth;
- (BOOL)needHidden;
- (void)setNeedHidden:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)talkingIconView;
- (void)setTalkingIconView:(id)arg1;
- (void).cxx_destruct;
@end
