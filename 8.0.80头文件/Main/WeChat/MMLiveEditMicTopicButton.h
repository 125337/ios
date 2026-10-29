@interface MMLiveEditMicTopicButton : MMUIButton
{
    double _maxWidth; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _textLabel; // +0x18
    UILabel * _topicLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
- (id)init;
- (void)updateLiveEditMicTopicButtonTitle:(id)arg1 topic:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)topicLabel;
- (void)setTopicLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
