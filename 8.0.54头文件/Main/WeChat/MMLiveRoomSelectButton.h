@interface MMLiveRoomSelectButton : MMUIButton
{
    NSArray * _roomContacts; // +0x8
    double _maxWidth; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _textLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
- (id)initWithStyle:(long long)arg1;
- (void)updateWithRoomContacts:(id)arg1;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (id)roomContacts;
- (void)setRoomContacts:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

