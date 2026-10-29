@interface WAPNAuthPhoneRow : UIControl
{
    UILabel * _numberLabel; // +0x8
    UILabel * _tagLabel; // +0x10
    long long _index; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithPhone:(id)arg1;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (void).cxx_destruct;
@end
