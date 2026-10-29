@interface WCDebugConfigActionSheet : WCActionSheet <WCActionSheetDelegate>
{
    id /* block */ _clickBlock; // +0x8
}
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

