@interface AmoebaExtensionCenter : NSObject
{
    NSMapTable * m_extendsions; // +0x8
}
+ (id)shareInstance;
- (id)init;
- (void)registerExtension:(id)arg1 withTarget:(id)arg2;
- (void)unRegisterExtension:(id)arg1 withTarget:(id)arg2;
- (void)callExtension:(id)arg1 selector:(SEL)arg2 block:(id /* block */)arg3;
- (void).cxx_destruct;
@end
