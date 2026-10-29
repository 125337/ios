@interface WCCellGroup : NSObject
{
    long long _homepageType; // +0x8
    NSDate * _date; // +0x10
    NSString * _title; // +0x18
    long long _titleAlignment; // +0x20
    NSString * _location; // +0x28
}
- (id)initWithHomepageType:(long long)arg1;
- (long long)homepageType;
- (id)date;
- (void)setDate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)titleAlignment;
- (void)setTitleAlignment:(long long)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
@end

