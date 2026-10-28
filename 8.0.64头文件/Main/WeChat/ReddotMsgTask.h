@interface ReddotMsgTask : NSObject
{
    GameCenterCommMsg * _msg; // +0x8
    id /* block */ _complete; // +0x10
}
- (id)msg;
- (void)setMsg:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end
