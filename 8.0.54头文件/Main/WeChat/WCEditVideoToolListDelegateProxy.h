@interface WCEditVideoToolListDelegateProxy : NSObject <UIScrollViewDelegate>
{
    id <WCEditVideoToolListProxyDelegate> _delegate; // +0x8
}
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

