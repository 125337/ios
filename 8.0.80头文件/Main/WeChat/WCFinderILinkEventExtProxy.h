@interface WCFinderILinkEventExtProxy : NSObject <ILinkEventExt>
{
    id /* block */ _linkClickBlock; // +0x8
}
+ (id)proxyWithBlock:(id /* block */)arg1;
- (void)addToTextView:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)linkClickBlock;
- (void)setLinkClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
