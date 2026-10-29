@interface WCFinderTagListViewLayoutItem : NSObject
{
    NSString * _displayText; // +0x8
    WCFinderTagListItem * _item; // +0x10
    CGRect _frame; // +0x18
}
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

