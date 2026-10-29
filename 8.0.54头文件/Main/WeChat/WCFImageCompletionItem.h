@interface WCFImageCompletionItem : NSObject
{
    BOOL _called; // +0x8
    id /* block */ _callback; // +0x10
    NSString * _sizeKey; // +0x18
    struct _param; // +0x20
}
- (id)initWithParam:(struct)arg1 callback:(id /* block */)arg2;
- (BOOL)isValid;
- (CGSize)size;
- (void)callCompletion:(id)arg1 key:(id)arg2 error:(id)arg3 finished:(BOOL)arg4;
- (struct)param;
- (void)setParam:(struct)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)sizeKey;
- (void)setSizeKey:(id)arg1;
- (BOOL)called;
- (void)setCalled:(BOOL)arg1;
- (void).cxx_destruct;
@end

