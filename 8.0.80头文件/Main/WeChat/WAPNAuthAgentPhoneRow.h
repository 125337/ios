@interface WAPNAuthAgentPhoneRow : UIControl
{
    UILabel * _numberLabel; // +0x8
    UILabel * _tagLabel; // +0x10
    UIImageView * _checkImageView; // +0x18
    long long _index; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithPhone:(id)arg1 selected:(BOOL)arg2 edge:(double)arg3;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)checkImageView;
- (void)setCheckImageView:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (void).cxx_destruct;
@end
