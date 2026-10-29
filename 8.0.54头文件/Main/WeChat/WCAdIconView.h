@interface WCAdIconView : MMUIView
{
    long long _iconType; // +0x8
    UIImageView * _icon; // +0x10
    UILabel * _label; // +0x18
    NSString * _labelLanguage; // +0x20
}
- (id)initWithAdIconType:(long long)arg1;
- (id)initWithAdIconType:(long long)arg1 labelLanguage:(id)arg2;
- (BOOL)initViews;
- (long long)iconType;
- (void)setIconType:(long long)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)labelLanguage;
- (void)setLabelLanguage:(id)arg1;
- (void).cxx_destruct;
@end

