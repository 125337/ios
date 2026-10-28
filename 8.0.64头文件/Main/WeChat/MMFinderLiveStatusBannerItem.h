@interface MMFinderLiveStatusBannerItem : NSObject
{
    unsigned int _type; // +0x8
    UIView * _view; // +0x10
    id /* block */ _willShow; // +0x18
    id /* block */ _didDisappear; // +0x20
}
+ (id)buildStatusBannerItem:(unsigned int)arg1 view:(id)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id /* block */)willShow;
- (void)setWillShow:(id /* block */)arg1;
- (id /* block */)didDisappear;
- (void)setDidDisappear:(id /* block */)arg1;
- (void).cxx_destruct;
@end
