@interface FTSSelectableMenuItem : NSObject
{
    long long _type; // +0x8
    NSString * _title; // +0x10
}
+ (id)textItemWithText:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

