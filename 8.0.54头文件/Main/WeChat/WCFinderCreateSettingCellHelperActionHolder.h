@interface WCFinderCreateSettingCellHelperActionHolder : NSObject
{
    NSObject * _owner; // +0x8
    id /* block */ _block; // +0x10
}
+ (id)instanceWithBlock:(id /* block */)arg1;
- (void)onAction:(id)arg1;
- (void)attachToOwner:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

