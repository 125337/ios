@interface WCFinderTextDetailListPannel : UIView
{
    NSString * _title; // +0x8
    NSString * _emptyWording; // +0x10
    NSArray * _items; // +0x18
}
+ (id)buildWithTitle:(id)arg1 detail:(id)arg2;
- (id)configEmptyWording:(id)arg1;
- (void)displayOnView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)emptyWording;
- (void)setEmptyWording:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

