@interface FWFScrollViewDelegate : FWFObject <UIScrollViewDelegate>
{
    FWFScrollViewDelegateFlutterApiImpl * _scrollViewDelegateAPI; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollViewDelegateAPI;
- (void).cxx_destruct;
@end
