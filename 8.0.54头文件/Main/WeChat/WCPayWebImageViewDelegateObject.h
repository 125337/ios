@interface WCPayWebImageViewDelegateObject : NSObject <WCPayWebImageViewDelegate>
{
    id /* block */ _okBlock; // +0x8
}
- (id)initWithOK:(id /* block */)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (id /* block */)okBlock;
- (void)setOkBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

