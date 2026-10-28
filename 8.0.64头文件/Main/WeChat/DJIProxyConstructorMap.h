@interface DJIProxyConstructorMap : NSObject
{
    NSObject * lockToken; // +0x8
    NSMapTable * _interfaceClassMapping; // +0x10
}
+ (id)get;
- (id)init;
- (void)mapConstructor:(id)arg1 interface:(id)arg2;
- (id)createObject:(id)arg1;
- (id)interfaceClassMapping;
- (void)setInterfaceClassMapping:(id)arg1;
- (void).cxx_destruct;
@end
