@interface KeyboardDismissProxy : NSObject
{
    id /* block */ _block; // +0x8
}
- (id)initWithExcuteBlock:(id /* block */)arg1;
- (void)checkAndHideKeyboard;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

