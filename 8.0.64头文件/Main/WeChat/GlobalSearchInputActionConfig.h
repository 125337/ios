@interface GlobalSearchInputActionConfig : NSObject
{
    unsigned int _timeout; // +0x8
    NSString * _title; // +0x10
    NSString * _type; // +0x18
    NSString * _iconName; // +0x20
    GlobalSearchInputSheetConfig * _defaultSheet; // +0x28
    NSMutableArray * _actionSheets; // +0x30
}
- (id)init;
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (unsigned int)timeout;
- (void)setTimeout:(unsigned int)arg1;
- (id)defaultSheet;
- (void)setDefaultSheet:(id)arg1;
- (id)actionSheets;
- (void)setActionSheets:(id)arg1;
- (void).cxx_destruct;
@end
