@interface MMFinderLiveConfirmSheetItem : NSObject
{
    NSString * _title; // +0x8
    id /* block */ _action; // +0x10
}
+ (id)itemWithTitle:(id)arg1 action:(id /* block */)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
