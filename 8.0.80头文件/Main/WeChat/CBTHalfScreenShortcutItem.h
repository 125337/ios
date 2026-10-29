@interface CBTHalfScreenShortcutItem : NSObject
{
    int _shortcutType; // +0x8
    NSString * _text; // +0x10
    NSString * _icoUrl; // +0x18
}
+ (id)itemWithText:(id)arg1;
+ (id)itemWithText:(id)arg1 shortcutType:(int)arg2 icoUrl:(id)arg3;
+ (id)itemsWithTexts:(id)arg1;
+ (id)itemsWithDictionaries:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (int)shortcutType;
- (void)setShortcutType:(int)arg1;
- (id)icoUrl;
- (void)setIcoUrl:(id)arg1;
- (void).cxx_destruct;
@end
