@interface WADebugMenuSheetItem : NSObject
{
    NSString * _title; // +0x8
    id /* block */ _clickAction; // +0x10
}
+ (id)createWithTitle:(id)arg1 clickAction:(id /* block */)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

