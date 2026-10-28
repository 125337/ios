@interface WCFinderCommonSelectListSheetItem : NSObject
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSObject * _userInfo; // +0x18
}
+ (id)sheetItemWithTitle:(id)arg1 desc:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
