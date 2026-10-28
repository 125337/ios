@interface WCSelectableMenuItem : NSObject
{
    long long _type; // +0x8
    NSString * _title; // +0x10
    long long _textAlignment; // +0x18
    double _minWidth; // +0x20
}
+ (id)textItemWithText:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (double)minWidth;
- (void)setMinWidth:(double)arg1;
- (void).cxx_destruct;
@end
