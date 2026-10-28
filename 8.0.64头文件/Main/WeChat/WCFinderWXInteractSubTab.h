@interface WCFinderWXInteractSubTab : NSObject
{
    BOOL _selected; // +0x8
    NSString * _title; // +0x10
    long long _dataType; // +0x18
}
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)dataType;
- (void)setDataType:(long long)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
