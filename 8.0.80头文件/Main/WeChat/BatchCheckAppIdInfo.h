@interface BatchCheckAppIdInfo : NSObject
{
    NSMutableArray * _unCheckedAppIds; // +0x8
    id /* block */ _callback; // +0x10
}
- (id)init:(id)arg1 callback:(id /* block */)arg2;
- (id)unCheckedAppIds;
- (void)setUnCheckedAppIds:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
