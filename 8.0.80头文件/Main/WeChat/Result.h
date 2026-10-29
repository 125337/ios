@interface Result : NSObject
{
    BOOL _result; // +0x8
    NSDictionary * _params; // +0x10
}
- (id)initWithResult:(BOOL)arg1 params:(id)arg2;
- (BOOL)result;
- (void)setResult:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
